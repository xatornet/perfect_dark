#include <SDL.h>
#include <PR/ultratypes.h>
#include <PR/os_thread.h>
#include <PR/os_cont.h>
#include "input.h"
#include "video.h"

#define MAX_BINDS 4
#define TRIG_THRESHOLD (30 * 256)
#define DEFAULT_DEADZONE 4096

static SDL_GameController *pads[INPUT_MAX_CONTROLLERS];
static SDL_Haptic *haptics[INPUT_MAX_CONTROLLERS];
static u32 binds[MAXCONTROLLERS][CK_TOTAL_COUNT][MAX_BINDS]; // [i][CK_][b] = [VK_]

static s32 connectedMask = 0;

static s32 mouseLocked = 0;
static s32 mouseX, mouseY;
static s32 mouseDX, mouseDY;
static u32 mouseButtons;

static f32 mouseSensX = 1.5f;
static f32 mouseSensY = 1.5f;

// NOTE: default is inverted for 1.2
static u32 axisMap[2][2] = {
	{ SDL_CONTROLLER_AXIS_RIGHTX, SDL_CONTROLLER_AXIS_RIGHTY }, // stick x/y
	{ SDL_CONTROLLER_AXIS_LEFTX,  SDL_CONTROLLER_AXIS_LEFTY  }, // cbuttons x/y
};

static u32 deadzone[2][2] = {
	{ DEFAULT_DEADZONE, DEFAULT_DEADZONE },
	{ DEFAULT_DEADZONE, DEFAULT_DEADZONE },
};

void inputSetDefaultKeyBinds(void) {
	// TODO: make VK constants for all these
	static const u32 kbbinds[][3] = {
		{ CK_A,          SDL_SCANCODE_Q,      0                   },
		{ CK_B,          SDL_SCANCODE_E,      0                   },
		{ CK_RTRIG,      VK_MOUSE_RIGHT,      SDL_SCANCODE_Z      },
		{ CK_LTRIG,      VK_MOUSE_X1,         SDL_SCANCODE_X      },
		{ CK_ZTRIG,      VK_MOUSE_LEFT,       SDL_SCANCODE_SPACE  },
		{ CK_START,      SDL_SCANCODE_RETURN, 0                   },
		{ CK_DPAD_D,     SDL_SCANCODE_S,      0                   },
		{ CK_DPAD_U,     SDL_SCANCODE_W,      0                   },
		{ CK_DPAD_R,     SDL_SCANCODE_D,      0                   },
		{ CK_DPAD_L,     SDL_SCANCODE_A,      0                   },
		{ CK_STICK_XNEG, SDL_SCANCODE_LEFT,   0                   },
		{ CK_STICK_XPOS, SDL_SCANCODE_RIGHT,  0                   },
		{ CK_STICK_YNEG, SDL_SCANCODE_DOWN,   0                   },
		{ CK_STICK_YPOS, SDL_SCANCODE_UP,     0                   },
	};

	static const u32 joybinds[][2] = {
		{ CK_A,          SDL_CONTROLLER_BUTTON_A             },
		{ CK_B,          SDL_CONTROLLER_BUTTON_B             },
		{ CK_LTRIG,      SDL_CONTROLLER_BUTTON_LEFTSHOULDER  },
		{ CK_RTRIG,      SDL_CONTROLLER_BUTTON_RIGHTSHOULDER },
		{ CK_ZTRIG,      VK_JOY1_LTRIG - VK_JOY1_BEGIN       },
		{ CK_ZTRIG,      VK_JOY1_RTRIG - VK_JOY1_BEGIN       },
		{ CK_START,      SDL_CONTROLLER_BUTTON_START         },
		{ CK_DPAD_D,     SDL_CONTROLLER_BUTTON_DPAD_DOWN     },
		{ CK_DPAD_U,     SDL_CONTROLLER_BUTTON_DPAD_UP       },
		{ CK_DPAD_R,     SDL_CONTROLLER_BUTTON_DPAD_RIGHT    },
		{ CK_DPAD_L,     SDL_CONTROLLER_BUTTON_DPAD_LEFT     },
	};

	for (u32 i = 0; i < sizeof(kbbinds) / sizeof(kbbinds[0]); ++i) {
		for (s32 j = 1; j < 3; ++j) {
			if (kbbinds[i][j]) {
				inputKeyBind(0, kbbinds[i][0], j - 1, kbbinds[i][j]);
			}
		}
	}

	for (u32 i = 0; i < sizeof(joybinds) / sizeof(joybinds[0]); ++i) {
		for (s32 j = 0; j < INPUT_MAX_CONTROLLERS; ++j) {
			inputKeyBind(j, joybinds[i][0], -1, VK_JOY_BEGIN + j * INPUT_MAX_CONTROLLER_BUTTONS + joybinds[i][1]);
		}
	}
}

s32 inputInit(void)
{
	if (!SDL_WasInit(SDL_INIT_GAMECONTROLLER)) {
		if (SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER) != 0) {
			return -1;
		}
	}

	const s32 numJoys = SDL_NumJoysticks();

	s32 ret = 1; // always report first controller as connected

	for (s32 jidx = 0, cidx = 0; jidx < numJoys && cidx < INPUT_MAX_CONTROLLERS; ++jidx) {
		if (SDL_IsGameController(jidx)) {
			pads[cidx] = SDL_GameControllerOpen(jidx);
			if (pads[cidx]) {
				SDL_Haptic *hap = SDL_HapticOpen(jidx);
				if (hap) {
					if (SDL_HapticRumbleSupported(hap) && (SDL_HapticRumbleInit(hap) == 0)) {
						haptics[cidx] = hap;
					} else {
						SDL_HapticClose(hap);
					}
				}
				ret |= 1 << cidx;
				++cidx;
			}
		}
	}

	inputSetDefaultKeyBinds();

	connectedMask = ret;

	return ret;
}

static inline s32 inputBindPressed(const s32 idx, const u32 ck)
{
	for (s32 i = 0; i < MAX_BINDS; ++i) {
		if (binds[idx][ck][i]) {
			if (inputKeyPressed(binds[idx][ck][i])) {
				return 1;
			}
		}
	}
	return 0;
}

s32 inputReadController(s32 idx, OSContPad *npad)
{
	if (idx < 0 || idx >= INPUT_MAX_CONTROLLERS  || !npad) {
		return -1;
	}

	npad->button = 0;

	for (u32 i = 0; i < CONT_NUM_BUTTONS; ++i) {
		if (inputBindPressed(idx, i)) {
			npad->button |= 1U << i;
		}
	}

	const s32 xdiff = (inputBindPressed(idx, CK_STICK_XPOS) - inputBindPressed(idx, CK_STICK_XNEG));
	const s32 ydiff = (inputBindPressed(idx, CK_STICK_YPOS) - inputBindPressed(idx, CK_STICK_YNEG));
	npad->stick_x = xdiff < 0 ? -0x80 : (xdiff > 0 ? 0x7F : 0);
	npad->stick_y = ydiff < 0 ? -0x80 : (ydiff > 0 ? 0x7F : 0);

	if (!pads[idx]) {
		return 0;
	}

	const s16 leftX = SDL_GameControllerGetAxis(pads[idx], axisMap[0][0]);
	const s16 leftY = SDL_GameControllerGetAxis(pads[idx], axisMap[0][1]);
	const s16 rightX = SDL_GameControllerGetAxis(pads[idx], axisMap[1][0]);
	const s16 rightY = SDL_GameControllerGetAxis(pads[idx], axisMap[1][1]);

	if (rightX < -0x4000) npad->button |= L_CBUTTONS;
	if (rightX > +0x4000) npad->button |= R_CBUTTONS;
	if (rightY < -0x4000) npad->button |= U_CBUTTONS;
	if (rightY > +0x4000) npad->button |= D_CBUTTONS;

	const s32 leftMag = leftX * leftX + leftY * leftY;
	const s32 deadzoneMag = deadzone[0][0] * deadzone[0][0] + deadzone[0][1] * deadzone[0][1];
	if (leftMag > deadzoneMag) {
		const s32 stickY = -leftY / 0x100;
		if (!npad->stick_x) {
			npad->stick_x = leftX / 0x100;
		}
		if (!npad->stick_y) {
			npad->stick_y = (stickY == 128) ? 127 : stickY;
		}
	}

	return 0;
}

void inputUpdate(void)
{
	SDL_GameControllerUpdate();

	s32 mx, my;
	mouseButtons = SDL_GetMouseState(&mx, &my);

	if (mouseLocked) {
		SDL_GetRelativeMouseState(&mouseDX, &mouseDY);
	} else {
		mouseDX = mx - mouseX;
		mouseDY = my - mouseY;
	}

	mouseX = mx;
	mouseY = my;

	if (!mouseLocked && (mouseButtons & SDL_BUTTON_LMASK)) {
		inputLockMouse(1);
	} else if (mouseLocked && inputKeyPressed(VK_ESCAPE)) {
		inputLockMouse(0);
	}

	for (s32 i = 0; i < INPUT_MAX_CONTROLLERS; ++i) {
		if (pads[i] && !SDL_GameControllerGetAttached(pads[i])) {
			// this controller has been disconnected, nuke it
			SDL_GameControllerClose(pads[i]);
			pads[i] = NULL;
			// don't clear the first controller
			if (i) {
				connectedMask &= ~(1 << i);
			}
		}
	}

	// TODO: handle freshly connected controllers
}

s32 inputControllerConnected(s32 idx)
{
	if (idx < 0 || idx >= INPUT_MAX_CONTROLLERS) {
		return 0;
	}
	return !idx || !!pads[idx]; // always report first controller as connected
}

s32 inputRumbleSupported(s32 idx)
{
	if (idx < 0 || idx >= INPUT_MAX_CONTROLLERS) {
		return 0;
	}
	return !!haptics[idx];
}

void inputRumble(s32 idx, f32 strength, f32 time)
{
	if (idx < 0 || idx >= INPUT_MAX_CONTROLLERS || !haptics[idx]) {
		return;
	}
	if (strength <= 0.f) {
		SDL_HapticRumbleStop(haptics[idx]);
	} else {
		SDL_HapticRumblePlay(haptics[idx], strength, (u32)(time * 1000.f));
	}
}

s32 inputControllerMask(void)
{
	return connectedMask;
}

void inputKeyBind(s32 idx, u32 cbtn, s32 bind, u32 vk) {
	if (idx < 0 || idx >= INPUT_MAX_CONTROLLERS || bind >= MAX_BINDS || cbtn >= CK_TOTAL_COUNT) {
		return;
	}

	if (bind < 0) {
		for (s32 i = 0; i < MAX_BINDS; ++i) {
			if (binds[idx][cbtn][i] == 0) {
				bind = i;
				break;
			}
		}
		if (bind < 0) {
			bind = MAX_BINDS - 1; // just overwrite last
		}
	}

	binds[idx][cbtn][bind] = vk;
}

s32 inputKeyPressed(u32 vk)
{
	if (vk >= VK_KEYBOARD_BEGIN && vk < VK_MOUSE_BEGIN) {
		const u8 *state = SDL_GetKeyboardState(NULL);
		return state[vk - VK_KEYBOARD_BEGIN];
	} else if (vk >= VK_MOUSE_BEGIN && vk < VK_JOY_BEGIN) {
		return mouseButtons & SDL_BUTTON(vk - VK_MOUSE_BEGIN + 1);
	} else if (vk >= VK_JOY_BEGIN && vk < VK_TOTAL_COUNT) {
		vk -= VK_JOY_BEGIN;
		const s32 idx = vk / INPUT_MAX_CONTROLLER_BUTTONS;
		if (idx < 0 || idx >= INPUT_MAX_CONTROLLERS || !pads[idx]) {
			return 0;
		}
		vk = vk % INPUT_MAX_CONTROLLER_BUTTONS;
		// triggers
		if (vk == 30 || vk == 31) {
			const s32 trig = SDL_CONTROLLER_AXIS_TRIGGERLEFT + vk - 30;
			return SDL_GameControllerGetAxis(pads[idx], trig) > TRIG_THRESHOLD;
		}
		return SDL_GameControllerGetButton(pads[idx], vk);
	}
	return 0;
}

void inputLockMouse(s32 lock) {
	mouseLocked = !!lock;
	SDL_SetRelativeMouseMode(mouseLocked);
}

s32 inputMouseIsLocked(void) {
	return mouseLocked;
}

void inputMouseGetPosition(s32 *x, s32 *y) {
	if (x) *x = mouseX;
	if (y) *y = mouseY;
}

void inputMouseGetDelta(s32 *dx, s32 *dy) {
	if (dx) *dx = mouseDX;
	if (dy) *dy = mouseDY;
}

void inputMouseGetNormalizedDelta(f32 *dx, f32 *dy) {
	s32 w, h;
	SDL_GetWindowSize(videoGetWindowHandle(), &w, &h); 
	if (dx) *dx = mouseSensX * (float)mouseDX / 100.0f;
	if (dy) *dy = mouseSensY * (float)mouseDY / 100.0f;
}

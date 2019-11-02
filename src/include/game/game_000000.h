#ifndef _IN_GAME_000000_H
#define _IN_GAME_000000_H
#include <ultra64.h>
#include "constants.h"

struct chrdata *chrFindByLiteralId(u8 chrnum);
struct chrdata *chrFindById(struct chrdata *data, u32 chrnum);
struct targetsomething *chrGetTargetSomething(struct chrdata *chr);

float chrGetTimer(struct chrdata *chr);

s32 padResolve(struct chrdata *chr, s32 pad_id);

u32 func0f000000(void);
u32 func0f000090(void);
u32 func0f000100(void);
u32 func0f000130(void);
u32 func0f000840(void);
u32 func0f000850(void);
u32 func0f000860(void);
u32 func0f000870(void);
u32 func0f000880(void);
u32 func0f0008e0(void);
u32 func0f0008f0(void);
u32 func0f000900(void);
u32 func0f000910(void);
u32 func0f00b180(void);
u32 func0f00b190(void);
u32 func0f00b200(void);
u32 func0f00b210(void);
u32 func0f00b320(void);
u32 func0f01a348(void);
u32 func0f01aba8(void);
u32 func0f01b148(void);
u32 func0f01b154(void);

#endif

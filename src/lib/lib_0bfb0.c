#include <ultra64.h>
#include "constants.h"
#include "bss.h"
#include "lib/lib_0c000.h"
#include "lib/lib_2fa00.h"
#include "data.h"
#include "types.h"

void faultCreateThread(void)
{
	faultCreateThread2();
}

void func0000bfd0(char *arg0, char *arg1, s32 arg2)
{
	crashPrint("ASSERTION : %s, %d: (\"%s\")\n", arg1, arg2, arg0);
}

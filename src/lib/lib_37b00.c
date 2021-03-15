#include <ultra64.h>
#include "constants.h"
#include "bss.h"
#include "lib/lib_2faf0.h"
#include "lib/lib_37b00.h"
#include "lib/lib_3e730.h"
#include "lib/lib_43dd0.h"
#include "lib/libc/ll.h"
#include "lib/lib_4b170.h"
#include "data.h"
#include "types.h"

u32 var8009c390;
u32 var8009c394;
u32 var8009c398;
u32 var8009c39c;
u32 var8009c3a0;
u32 var8009c3a4;
u32 var8009c3a8;
u32 var8009c3ac;
u32 var8009c3b0;
u32 var8009c3b4;
u32 var8009c3b8;
u32 var8009c3bc;
u32 var8009c3c0;
u32 var8009c3c4;
u32 var8009c3c8;
u32 var8009c3cc;
u32 var8009c3d0;
u32 var8009c3d4;
u32 var8009c3d8;
u32 var8009c3dc;
u32 var8009c3e0;
u32 var8009c3e4;
u32 var8009c3e8;
u32 var8009c3ec;
u32 var8009c3f0;
u32 var8009c3f4;
u32 var8009c3f8;
u32 var8009c3fc;

GLOBAL_ASM(
glabel func00037b00
/*    37b00:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*    37b04:	afbf001c */ 	sw	$ra,0x1c($sp)
/*    37b08:	afa40020 */ 	sw	$a0,0x20($sp)
/*    37b0c:	3c04800a */ 	lui	$a0,%hi(var8009c390)
/*    37b10:	2484c390 */ 	addiu	$a0,$a0,%lo(var8009c390)
/*    37b14:	0c012c30 */ 	jal	bzero
/*    37b18:	24050064 */ 	addiu	$a1,$zero,0x64
/*    37b1c:	240e0001 */ 	addiu	$t6,$zero,0x1
/*    37b20:	afae0010 */ 	sw	$t6,0x10($sp)
/*    37b24:	00002025 */ 	or	$a0,$zero,$zero
/*    37b28:	00002825 */ 	or	$a1,$zero,$zero
/*    37b2c:	8fa60020 */ 	lw	$a2,0x20($sp)
/*    37b30:	0c00bec5 */ 	jal	func0002fb14
/*    37b34:	34078480 */ 	dli	$a3,0x8480
/*    37b38:	3c01800a */ 	lui	$at,%hi(var8009c3f4)
/*    37b3c:	ac22c3f4 */ 	sw	$v0,%lo(var8009c3f4)($at)
/*    37b40:	240f2200 */ 	addiu	$t7,$zero,0x2200
/*    37b44:	afaf0010 */ 	sw	$t7,0x10($sp)
/*    37b48:	00002025 */ 	or	$a0,$zero,$zero
/*    37b4c:	00002825 */ 	or	$a1,$zero,$zero
/*    37b50:	8fa60020 */ 	lw	$a2,0x20($sp)
/*    37b54:	0c00bec5 */ 	jal	func0002fb14
/*    37b58:	24070001 */ 	addiu	$a3,$zero,0x1
/*    37b5c:	3c018006 */ 	lui	$at,%hi(var8005f6f8)
/*    37b60:	ac22f6f8 */ 	sw	$v0,%lo(var8005f6f8)($at)
/*    37b64:	24182200 */ 	addiu	$t8,$zero,0x2200
/*    37b68:	afb80010 */ 	sw	$t8,0x10($sp)
/*    37b6c:	00002025 */ 	or	$a0,$zero,$zero
/*    37b70:	00002825 */ 	or	$a1,$zero,$zero
/*    37b74:	8fa60020 */ 	lw	$a2,0x20($sp)
/*    37b78:	0c00bec5 */ 	jal	func0002fb14
/*    37b7c:	24070001 */ 	addiu	$a3,$zero,0x1
/*    37b80:	3c018006 */ 	lui	$at,%hi(var8005f6fc)
/*    37b84:	ac22f6fc */ 	sw	$v0,%lo(var8005f6fc)($at)
/*    37b88:	24190001 */ 	addiu	$t9,$zero,0x1
/*    37b8c:	afb90010 */ 	sw	$t9,0x10($sp)
/*    37b90:	00002025 */ 	or	$a0,$zero,$zero
/*    37b94:	00002825 */ 	or	$a1,$zero,$zero
/*    37b98:	8fa60020 */ 	lw	$a2,0x20($sp)
/*    37b9c:	0c00bec5 */ 	jal	func0002fb14
/*    37ba0:	24070400 */ 	addiu	$a3,$zero,0x400
/*    37ba4:	3c01800a */ 	lui	$at,%hi(var8009c6d8)
/*    37ba8:	ac22c6d8 */ 	sw	$v0,%lo(var8009c6d8)($at)
/*    37bac:	24080001 */ 	addiu	$t0,$zero,0x1
/*    37bb0:	afa80010 */ 	sw	$t0,0x10($sp)
/*    37bb4:	00002025 */ 	or	$a0,$zero,$zero
/*    37bb8:	00002825 */ 	or	$a1,$zero,$zero
/*    37bbc:	8fa60020 */ 	lw	$a2,0x20($sp)
/*    37bc0:	0c00bec5 */ 	jal	func0002fb14
/*    37bc4:	24070400 */ 	addiu	$a3,$zero,0x400
/*    37bc8:	3c01800a */ 	lui	$at,%hi(var8009c6dc)
/*    37bcc:	ac22c6dc */ 	sw	$v0,%lo(var8009c6dc)($at)
/*    37bd0:	24090001 */ 	addiu	$t1,$zero,0x1
/*    37bd4:	afa90010 */ 	sw	$t1,0x10($sp)
/*    37bd8:	00002025 */ 	or	$a0,$zero,$zero
/*    37bdc:	00002825 */ 	or	$a1,$zero,$zero
/*    37be0:	8fa60020 */ 	lw	$a2,0x20($sp)
/*    37be4:	0c00bec5 */ 	jal	func0002fb14
/*    37be8:	3407a410 */ 	dli	$a3,0xa410
/*    37bec:	3c01800a */ 	lui	$at,%hi(var8009c640)
/*    37bf0:	ac22c640 */ 	sw	$v0,%lo(var8009c640)($at)
/*    37bf4:	240a0001 */ 	addiu	$t2,$zero,0x1
/*    37bf8:	afaa0010 */ 	sw	$t2,0x10($sp)
/*    37bfc:	00002025 */ 	or	$a0,$zero,$zero
/*    37c00:	00002825 */ 	or	$a1,$zero,$zero
/*    37c04:	8fa60020 */ 	lw	$a2,0x20($sp)
/*    37c08:	0c00bec5 */ 	jal	func0002fb14
/*    37c0c:	34078000 */ 	dli	$a3,0x8000
/*    37c10:	3c01800a */ 	lui	$at,%hi(var8009c644)
/*    37c14:	ac22c644 */ 	sw	$v0,%lo(var8009c644)($at)
/*    37c18:	0c011101 */ 	jal	func00044404
/*    37c1c:	00000000 */ 	nop
/*    37c20:	240b0050 */ 	addiu	$t3,$zero,0x50
/*    37c24:	afab0010 */ 	sw	$t3,0x10($sp)
/*    37c28:	00002025 */ 	or	$a0,$zero,$zero
/*    37c2c:	00002825 */ 	or	$a1,$zero,$zero
/*    37c30:	8fa60020 */ 	lw	$a2,0x20($sp)
/*    37c34:	0c00bec5 */ 	jal	func0002fb14
/*    37c38:	24070001 */ 	addiu	$a3,$zero,0x1
/*    37c3c:	3c01800a */ 	lui	$at,%hi(var8009c398)
/*    37c40:	ac22c398 */ 	sw	$v0,%lo(var8009c398)($at)
/*    37c44:	240c0440 */ 	addiu	$t4,$zero,0x440
/*    37c48:	afac0010 */ 	sw	$t4,0x10($sp)
/*    37c4c:	00002025 */ 	or	$a0,$zero,$zero
/*    37c50:	00002825 */ 	or	$a1,$zero,$zero
/*    37c54:	8fa60020 */ 	lw	$a2,0x20($sp)
/*    37c58:	0c00bec5 */ 	jal	func0002fb14
/*    37c5c:	24070001 */ 	addiu	$a3,$zero,0x1
/*    37c60:	3c0d800a */ 	lui	$t5,%hi(var8009c390)
/*    37c64:	25adc390 */ 	addiu	$t5,$t5,%lo(var8009c390)
/*    37c68:	ada20044 */ 	sw	$v0,0x44($t5)
/*    37c6c:	3c01800a */ 	lui	$at,%hi(var8009c3e0)
/*    37c70:	ac20c3e0 */ 	sw	$zero,%lo(var8009c3e0)($at)
/*    37c74:	240e7fff */ 	addiu	$t6,$zero,0x7fff
/*    37c78:	3c01800a */ 	lui	$at,%hi(var8009c3e4)
/*    37c7c:	ac2ec3e4 */ 	sw	$t6,%lo(var8009c3e4)($at)
/*    37c80:	3c01800a */ 	lui	$at,%hi(var8009c3ec)
/*    37c84:	240f0040 */ 	addiu	$t7,$zero,0x40
/*    37c88:	24180040 */ 	addiu	$t8,$zero,0x40
/*    37c8c:	a438c3ec */ 	sh	$t8,%lo(var8009c3ec)($at)
/*    37c90:	a42fc3ee */ 	sh	$t7,%lo(var8009c3ec+0x2)($at)
/*    37c94:	24197fff */ 	addiu	$t9,$zero,0x7fff
/*    37c98:	3c01800a */ 	lui	$at,%hi(var8009c39c+0x2)
/*    37c9c:	a439c39e */ 	sh	$t9,%lo(var8009c39c+0x2)($at)
/*    37ca0:	24080040 */ 	addiu	$t0,$zero,0x40
/*    37ca4:	3c01800a */ 	lui	$at,%hi(var8009c39c)
/*    37ca8:	a428c39c */ 	sh	$t0,%lo(var8009c39c)($at)
/*    37cac:	3c09800a */ 	lui	$t1,%hi(var8009c39c)
/*    37cb0:	8529c39c */ 	lh	$t1,%lo(var8009c39c)($t1)
/*    37cb4:	3c0c8006 */ 	lui	$t4,%hi(var8005f570)
/*    37cb8:	3c0d800a */ 	lui	$t5,%hi(var8009c39c+0x2)
/*    37cbc:	312a007f */ 	andi	$t2,$t1,0x7f
/*    37cc0:	000a5840 */ 	sll	$t3,$t2,0x1
/*    37cc4:	018b6021 */ 	addu	$t4,$t4,$t3
/*    37cc8:	858cf570 */ 	lh	$t4,%lo(var8005f570)($t4)
/*    37ccc:	85adc39e */ 	lh	$t5,%lo(var8009c39c+0x2)($t5)
/*    37cd0:	3c01800a */ 	lui	$at,%hi(var8009c3a0)
/*    37cd4:	018d0019 */ 	multu	$t4,$t5
/*    37cd8:	00007012 */ 	mflo	$t6
/*    37cdc:	000e7bc3 */ 	sra	$t7,$t6,0xf
/*    37ce0:	a42fc3a0 */ 	sh	$t7,%lo(var8009c3a0)($at)
/*    37ce4:	3c18800a */ 	lui	$t8,%hi(var8009c39c)
/*    37ce8:	8718c39c */ 	lh	$t8,%lo(var8009c39c)($t8)
/*    37cec:	3c0a8006 */ 	lui	$t2,%hi(var8005f66c+0x2)
/*    37cf0:	3c0b800a */ 	lui	$t3,%hi(var8009c39c+0x2)
/*    37cf4:	3319007f */ 	andi	$t9,$t8,0x7f
/*    37cf8:	00194023 */ 	negu	$t0,$t9
/*    37cfc:	00084840 */ 	sll	$t1,$t0,0x1
/*    37d00:	01495021 */ 	addu	$t2,$t2,$t1
/*    37d04:	854af66e */ 	lh	$t2,%lo(var8005f66c+0x2)($t2)
/*    37d08:	856bc39e */ 	lh	$t3,%lo(var8009c39c+0x2)($t3)
/*    37d0c:	3c01800a */ 	lui	$at,%hi(var8009c3a0+0x2)
/*    37d10:	014b0019 */ 	multu	$t2,$t3
/*    37d14:	00006012 */ 	mflo	$t4
/*    37d18:	000c6bc3 */ 	sra	$t5,$t4,0xf
/*    37d1c:	a42dc3a2 */ 	sh	$t5,%lo(var8009c3a0+0x2)($at)
/*    37d20:	240e0001 */ 	addiu	$t6,$zero,0x1
/*    37d24:	3c01800a */ 	lui	$at,%hi(var8009c3b4)
/*    37d28:	a42ec3b4 */ 	sh	$t6,%lo(var8009c3b4)($at)
/*    37d2c:	240f7ffc */ 	addiu	$t7,$zero,0x7ffc
/*    37d30:	3c01800a */ 	lui	$at,%hi(var8009c3a4)
/*    37d34:	a42fc3a4 */ 	sh	$t7,%lo(var8009c3a4)($at)
/*    37d38:	3c18800a */ 	lui	$t8,%hi(var8009c39c)
/*    37d3c:	8718c39c */ 	lh	$t8,%lo(var8009c39c)($t8)
/*    37d40:	33190080 */ 	andi	$t9,$t8,0x80
/*    37d44:	13200005 */ 	beqz	$t9,.L00037d5c
/*    37d48:	00000000 */ 	nop
/*    37d4c:	24080001 */ 	addiu	$t0,$zero,0x1
/*    37d50:	3c01800a */ 	lui	$at,%hi(var8009c3a4+0x2)
/*    37d54:	10000003 */ 	b	.L00037d64
/*    37d58:	a428c3a6 */ 	sh	$t0,%lo(var8009c3a4+0x2)($at)
.L00037d5c:
/*    37d5c:	3c01800a */ 	lui	$at,%hi(var8009c3a4+0x2)
/*    37d60:	a420c3a6 */ 	sh	$zero,%lo(var8009c3a4+0x2)($at)
.L00037d64:
/*    37d64:	3c047004 */ 	lui	$a0,%hi(func00038ba8)
/*    37d68:	0c00e2e4 */ 	jal	func00038b90
/*    37d6c:	24848ba8 */ 	addiu	$a0,$a0,%lo(func00038ba8)
/*    37d70:	10000001 */ 	b	.L00037d78
/*    37d74:	00000000 */ 	nop
.L00037d78:
/*    37d78:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*    37d7c:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*    37d80:	03e00008 */ 	jr	$ra
/*    37d84:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00037d88
/*    37d88:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*    37d8c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*    37d90:	afa40018 */ 	sw	$a0,0x18($sp)
/*    37d94:	afa5001c */ 	sw	$a1,0x1c($sp)
/*    37d98:	3c0e800a */ 	lui	$t6,%hi(var8009c3dc)
/*    37d9c:	8dcec3dc */ 	lw	$t6,%lo(var8009c3dc)($t6)
/*    37da0:	15c00003 */ 	bnez	$t6,.L00037db0
/*    37da4:	00000000 */ 	nop
/*    37da8:	10000018 */ 	b	.L00037e0c
/*    37dac:	00000000 */ 	nop
.L00037db0:
/*    37db0:	8faf0018 */ 	lw	$t7,0x18($sp)
/*    37db4:	3c01800a */ 	lui	$at,%hi(var8009c390)
/*    37db8:	ac2fc390 */ 	sw	$t7,%lo(var8009c390)($at)
/*    37dbc:	8fb8001c */ 	lw	$t8,0x1c($sp)
/*    37dc0:	3c01800a */ 	lui	$at,%hi(var8009c3c0)
/*    37dc4:	ac38c3c0 */ 	sw	$t8,%lo(var8009c3c0)($at)
/*    37dc8:	3c01800a */ 	lui	$at,%hi(var8009c3c4)
/*    37dcc:	ac20c3c4 */ 	sw	$zero,%lo(var8009c3c4)($at)
/*    37dd0:	3c01800a */ 	lui	$at,%hi(var8009c3e8)
/*    37dd4:	ac20c3e8 */ 	sw	$zero,%lo(var8009c3e8)($at)
/*    37dd8:	24197fff */ 	addiu	$t9,$zero,0x7fff
/*    37ddc:	3c01800a */ 	lui	$at,%hi(var8009c3e4)
/*    37de0:	ac39c3e4 */ 	sw	$t9,%lo(var8009c3e4)($at)
/*    37de4:	24080005 */ 	addiu	$t0,$zero,0x5
/*    37de8:	3c01800a */ 	lui	$at,%hi(var8009c3f0)
/*    37dec:	a028c3f0 */ 	sb	$t0,%lo(var8009c3f0)($at)
/*    37df0:	0c00e32b */ 	jal	func00038cac
/*    37df4:	00000000 */ 	nop
/*    37df8:	24090004 */ 	addiu	$t1,$zero,0x4
/*    37dfc:	3c01800a */ 	lui	$at,%hi(var8009c3e0)
/*    37e00:	ac29c3e0 */ 	sw	$t1,%lo(var8009c3e0)($at)
/*    37e04:	10000001 */ 	b	.L00037e0c
/*    37e08:	00000000 */ 	nop
.L00037e0c:
/*    37e0c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*    37e10:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*    37e14:	03e00008 */ 	jr	$ra
/*    37e18:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00037e1c
/*    37e1c:	240e0003 */ 	addiu	$t6,$zero,0x3
/*    37e20:	3c01800a */ 	lui	$at,%hi(var8009c3e0)
/*    37e24:	ac2ec3e0 */ 	sw	$t6,%lo(var8009c3e0)($at)
/*    37e28:	03e00008 */ 	jr	$ra
/*    37e2c:	00000000 */ 	nop
/*    37e30:	03e00008 */ 	jr	$ra
/*    37e34:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00037e38
/*    37e38:	3c0e800a */ 	lui	$t6,%hi(var8009c3e0)
/*    37e3c:	8dcec3e0 */ 	lw	$t6,%lo(var8009c3e0)($t6)
/*    37e40:	24010001 */ 	addiu	$at,$zero,0x1
/*    37e44:	15c10004 */ 	bne	$t6,$at,.L00037e58
/*    37e48:	00000000 */ 	nop
/*    37e4c:	240f0002 */ 	addiu	$t7,$zero,0x2
/*    37e50:	3c01800a */ 	lui	$at,%hi(var8009c3e0)
/*    37e54:	ac2fc3e0 */ 	sw	$t7,%lo(var8009c3e0)($at)
.L00037e58:
/*    37e58:	03e00008 */ 	jr	$ra
/*    37e5c:	00000000 */ 	nop
/*    37e60:	03e00008 */ 	jr	$ra
/*    37e64:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00037e68
/*    37e68:	3c0e800a */ 	lui	$t6,%hi(var8009c3e0)
/*    37e6c:	8dcec3e0 */ 	lw	$t6,%lo(var8009c3e0)($t6)
/*    37e70:	24010002 */ 	addiu	$at,$zero,0x2
/*    37e74:	15c10007 */ 	bne	$t6,$at,.L00037e94
/*    37e78:	00000000 */ 	nop
/*    37e7c:	240f0005 */ 	addiu	$t7,$zero,0x5
/*    37e80:	3c01800a */ 	lui	$at,%hi(var8009c3f0)
/*    37e84:	a02fc3f0 */ 	sb	$t7,%lo(var8009c3f0)($at)
/*    37e88:	24180005 */ 	addiu	$t8,$zero,0x5
/*    37e8c:	3c01800a */ 	lui	$at,%hi(var8009c3e0)
/*    37e90:	ac38c3e0 */ 	sw	$t8,%lo(var8009c3e0)($at)
.L00037e94:
/*    37e94:	03e00008 */ 	jr	$ra
/*    37e98:	00000000 */ 	nop
/*    37e9c:	03e00008 */ 	jr	$ra
/*    37ea0:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00037ea4
/*    37ea4:	3c0e800a */ 	lui	$t6,%hi(var8009c3e0)
/*    37ea8:	8dcec3e0 */ 	lw	$t6,%lo(var8009c3e0)($t6)
/*    37eac:	24010001 */ 	addiu	$at,$zero,0x1
/*    37eb0:	11c1000a */ 	beq	$t6,$at,.L00037edc
/*    37eb4:	00000000 */ 	nop
/*    37eb8:	24010004 */ 	addiu	$at,$zero,0x4
/*    37ebc:	11c10007 */ 	beq	$t6,$at,.L00037edc
/*    37ec0:	00000000 */ 	nop
/*    37ec4:	24010005 */ 	addiu	$at,$zero,0x5
/*    37ec8:	11c10004 */ 	beq	$t6,$at,.L00037edc
/*    37ecc:	00000000 */ 	nop
/*    37ed0:	24010002 */ 	addiu	$at,$zero,0x2
/*    37ed4:	15c10006 */ 	bne	$t6,$at,.L00037ef0
/*    37ed8:	00000000 */ 	nop
.L00037edc:
/*    37edc:	3c02800a */ 	lui	$v0,%hi(var8009c3e0)
/*    37ee0:	03e00008 */ 	jr	$ra
/*    37ee4:	8c42c3e0 */ 	lw	$v0,%lo(var8009c3e0)($v0)
/*    37ee8:	10000003 */ 	b	.L00037ef8
/*    37eec:	00000000 */ 	nop
.L00037ef0:
/*    37ef0:	03e00008 */ 	jr	$ra
/*    37ef4:	00001025 */ 	or	$v0,$zero,$zero
.L00037ef8:
/*    37ef8:	03e00008 */ 	jr	$ra
/*    37efc:	00000000 */ 	nop
/*    37f00:	03e00008 */ 	jr	$ra
/*    37f04:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00037f08
/*    37f08:	04810004 */ 	bgez	$a0,.L00037f1c
/*    37f0c:	00000000 */ 	nop
/*    37f10:	3c01800a */ 	lui	$at,%hi(var8009c3e4)
/*    37f14:	1000000b */ 	b	.L00037f44
/*    37f18:	ac20c3e4 */ 	sw	$zero,%lo(var8009c3e4)($at)
.L00037f1c:
/*    37f1c:	34018000 */ 	dli	$at,0x8000
/*    37f20:	0081082a */ 	slt	$at,$a0,$at
/*    37f24:	14200005 */ 	bnez	$at,.L00037f3c
/*    37f28:	00000000 */ 	nop
/*    37f2c:	240e7fff */ 	addiu	$t6,$zero,0x7fff
/*    37f30:	3c01800a */ 	lui	$at,%hi(var8009c3e4)
/*    37f34:	10000003 */ 	b	.L00037f44
/*    37f38:	ac2ec3e4 */ 	sw	$t6,%lo(var8009c3e4)($at)
.L00037f3c:
/*    37f3c:	3c01800a */ 	lui	$at,%hi(var8009c3e4)
/*    37f40:	ac24c3e4 */ 	sw	$a0,%lo(var8009c3e4)($at)
.L00037f44:
/*    37f44:	3c01800a */ 	lui	$at,%hi(var8009c3e8)
/*    37f48:	ac25c3e8 */ 	sw	$a1,%lo(var8009c3e8)($at)
/*    37f4c:	03e00008 */ 	jr	$ra
/*    37f50:	00000000 */ 	nop
/*    37f54:	03e00008 */ 	jr	$ra
/*    37f58:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00037f5c
/*    37f5c:	28810100 */ 	slti	$at,$a0,0x100
/*    37f60:	14200002 */ 	bnez	$at,.L00037f6c
/*    37f64:	00000000 */ 	nop
/*    37f68:	240400ff */ 	addiu	$a0,$zero,0xff
.L00037f6c:
/*    37f6c:	04810002 */ 	bgez	$a0,.L00037f78
/*    37f70:	00000000 */ 	nop
/*    37f74:	00002025 */ 	or	$a0,$zero,$zero
.L00037f78:
/*    37f78:	3c01800a */ 	lui	$at,%hi(var8009c3ec+0x2)
/*    37f7c:	a424c3ee */ 	sh	$a0,%lo(var8009c3ec+0x2)($at)
/*    37f80:	10a00005 */ 	beqz	$a1,.L00037f98
/*    37f84:	00000000 */ 	nop
/*    37f88:	3c0e800a */ 	lui	$t6,%hi(var8009c3ec+0x2)
/*    37f8c:	85cec3ee */ 	lh	$t6,%lo(var8009c3ec+0x2)($t6)
/*    37f90:	3c01800a */ 	lui	$at,%hi(var8009c3ec)
/*    37f94:	a42ec3ec */ 	sh	$t6,%lo(var8009c3ec)($at)
.L00037f98:
/*    37f98:	03e00008 */ 	jr	$ra
/*    37f9c:	00000000 */ 	nop
/*    37fa0:	03e00008 */ 	jr	$ra
/*    37fa4:	00000000 */ 	nop
/*    37fa8:	afa40000 */ 	sw	$a0,0x0($sp)
/*    37fac:	afa50004 */ 	sw	$a1,0x4($sp)
/*    37fb0:	10000001 */ 	b	.L00037fb8
/*    37fb4:	00000000 */ 	nop
.L00037fb8:
/*    37fb8:	03e00008 */ 	jr	$ra
/*    37fbc:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00037fc0
/*    37fc0:	27bdff98 */ 	addiu	$sp,$sp,-104
/*    37fc4:	afbf0014 */ 	sw	$ra,0x14($sp)
/*    37fc8:	afa40068 */ 	sw	$a0,0x68($sp)
/*    37fcc:	afa5006c */ 	sw	$a1,0x6c($sp)
/*    37fd0:	afa0005c */ 	sw	$zero,0x5c($sp)
/*    37fd4:	afa00054 */ 	sw	$zero,0x54($sp)
/*    37fd8:	240e04e0 */ 	addiu	$t6,$zero,0x4e0
/*    37fdc:	afae004c */ 	sw	$t6,0x4c($sp)
/*    37fe0:	240f0650 */ 	addiu	$t7,$zero,0x650
/*    37fe4:	afaf0048 */ 	sw	$t7,0x48($sp)
/*    37fe8:	3c18800a */ 	lui	$t8,%hi(var8009c3ec)
/*    37fec:	3c19800a */ 	lui	$t9,%hi(var8009c3ec+0x2)
/*    37ff0:	8739c3ee */ 	lh	$t9,%lo(var8009c3ec+0x2)($t9)
/*    37ff4:	8718c3ec */ 	lh	$t8,%lo(var8009c3ec)($t8)
/*    37ff8:	13190024 */ 	beq	$t8,$t9,.L0003808c
/*    37ffc:	00000000 */ 	nop
/*    38000:	3c08800a */ 	lui	$t0,%hi(var8009c3ec+0x2)
/*    38004:	3c09800a */ 	lui	$t1,%hi(var8009c3ec)
/*    38008:	8529c3ec */ 	lh	$t1,%lo(var8009c3ec)($t1)
/*    3800c:	8508c3ee */ 	lh	$t0,%lo(var8009c3ec+0x2)($t0)
/*    38010:	01095023 */ 	subu	$t2,$t0,$t1
/*    38014:	afaa0060 */ 	sw	$t2,0x60($sp)
/*    38018:	8fab0060 */ 	lw	$t3,0x60($sp)
/*    3801c:	2961fffe */ 	slti	$at,$t3,-2
/*    38020:	1420000b */ 	bnez	$at,.L00038050
/*    38024:	00000000 */ 	nop
/*    38028:	29610003 */ 	slti	$at,$t3,0x3
/*    3802c:	10200008 */ 	beqz	$at,.L00038050
/*    38030:	00000000 */ 	nop
/*    38034:	3c0c800a */ 	lui	$t4,%hi(var8009c3ec)
/*    38038:	858cc3ec */ 	lh	$t4,%lo(var8009c3ec)($t4)
/*    3803c:	8fad0060 */ 	lw	$t5,0x60($sp)
/*    38040:	3c01800a */ 	lui	$at,%hi(var8009c3ec)
/*    38044:	018d7021 */ 	addu	$t6,$t4,$t5
/*    38048:	10000010 */ 	b	.L0003808c
/*    3804c:	a42ec3ec */ 	sh	$t6,%lo(var8009c3ec)($at)
.L00038050:
/*    38050:	8faf0060 */ 	lw	$t7,0x60($sp)
/*    38054:	29e10003 */ 	slti	$at,$t7,0x3
/*    38058:	14200007 */ 	bnez	$at,.L00038078
/*    3805c:	00000000 */ 	nop
/*    38060:	3c18800a */ 	lui	$t8,%hi(var8009c3ec)
/*    38064:	8718c3ec */ 	lh	$t8,%lo(var8009c3ec)($t8)
/*    38068:	3c01800a */ 	lui	$at,%hi(var8009c3ec)
/*    3806c:	27190002 */ 	addiu	$t9,$t8,0x2
/*    38070:	10000006 */ 	b	.L0003808c
/*    38074:	a439c3ec */ 	sh	$t9,%lo(var8009c3ec)($at)
.L00038078:
/*    38078:	3c08800a */ 	lui	$t0,%hi(var8009c3ec)
/*    3807c:	8508c3ec */ 	lh	$t0,%lo(var8009c3ec)($t0)
/*    38080:	3c01800a */ 	lui	$at,%hi(var8009c3ec)
/*    38084:	2509fffe */ 	addiu	$t1,$t0,-2
/*    38088:	a429c3ec */ 	sh	$t1,%lo(var8009c3ec)($at)
.L0003808c:
/*    3808c:	3c0a800a */ 	lui	$t2,%hi(var8009c3e0)
/*    38090:	8d4ac3e0 */ 	lw	$t2,%lo(var8009c3e0)($t2)
/*    38094:	24010004 */ 	addiu	$at,$zero,0x4
/*    38098:	15410033 */ 	bne	$t2,$at,.L00038168
/*    3809c:	00000000 */ 	nop
/*    380a0:	0c00e32b */ 	jal	func00038cac
/*    380a4:	00000000 */ 	nop
/*    380a8:	3c0b800a */ 	lui	$t3,%hi(var8009c3f0)
/*    380ac:	916bc3f0 */ 	lbu	$t3,%lo(var8009c3f0)($t3)
/*    380b0:	15600028 */ 	bnez	$t3,.L00038154
/*    380b4:	00000000 */ 	nop
/*    380b8:	3c05800a */ 	lui	$a1,%hi(var8009c3dc)
/*    380bc:	3c06800a */ 	lui	$a2,%hi(var8009c3c0)
/*    380c0:	8cc6c3c0 */ 	lw	$a2,%lo(var8009c3c0)($a2)
/*    380c4:	8ca5c3dc */ 	lw	$a1,%lo(var8009c3dc)($a1)
/*    380c8:	0c011118 */ 	jal	func00044460
/*    380cc:	00002025 */ 	or	$a0,$zero,$zero
/*    380d0:	3c01800a */ 	lui	$at,%hi(var8009c394)
/*    380d4:	ac22c394 */ 	sw	$v0,%lo(var8009c394)($at)
/*    380d8:	3c0c800a */ 	lui	$t4,%hi(var8009c394)
/*    380dc:	8d8cc394 */ 	lw	$t4,%lo(var8009c394)($t4)
/*    380e0:	15800007 */ 	bnez	$t4,.L00038100
/*    380e4:	00000000 */ 	nop
/*    380e8:	3c01800a */ 	lui	$at,%hi(var8009c3e0)
/*    380ec:	ac20c3e0 */ 	sw	$zero,%lo(var8009c3e0)($at)
/*    380f0:	10000208 */ 	b	.L00038914
/*    380f4:	00001025 */ 	or	$v0,$zero,$zero
/*    380f8:	10000014 */ 	b	.L0003814c
/*    380fc:	00000000 */ 	nop
.L00038100:
/*    38100:	240d0001 */ 	addiu	$t5,$zero,0x1
/*    38104:	3c01800a */ 	lui	$at,%hi(var8009c3e0)
/*    38108:	ac2dc3e0 */ 	sw	$t5,%lo(var8009c3e0)($at)
/*    3810c:	240e0001 */ 	addiu	$t6,$zero,0x1
/*    38110:	3c01800a */ 	lui	$at,%hi(var8009c3b4)
/*    38114:	a42ec3b4 */ 	sh	$t6,%lo(var8009c3b4)($at)
/*    38118:	3c01800a */ 	lui	$at,%hi(var8009c3c8)
/*    3811c:	ac20c3c8 */ 	sw	$zero,%lo(var8009c3c8)($at)
/*    38120:	3c01800a */ 	lui	$at,%hi(var8009c3cc)
/*    38124:	ac20c3cc */ 	sw	$zero,%lo(var8009c3cc)($at)
/*    38128:	3c01800a */ 	lui	$at,%hi(var8009c3d0)
/*    3812c:	ac20c3d0 */ 	sw	$zero,%lo(var8009c3d0)($at)
/*    38130:	3c01800a */ 	lui	$at,%hi(var8009c3d8)
/*    38134:	ac20c3d8 */ 	sw	$zero,%lo(var8009c3d8)($at)
/*    38138:	3c0f800a */ 	lui	$t7,%hi(var8009c390)
/*    3813c:	25efc390 */ 	addiu	$t7,$t7,%lo(var8009c390)
/*    38140:	8de40044 */ 	lw	$a0,0x44($t7)
/*    38144:	0c012c30 */ 	jal	bzero
/*    38148:	24050440 */ 	addiu	$a1,$zero,0x440
.L0003814c:
/*    3814c:	10000006 */ 	b	.L00038168
/*    38150:	00000000 */ 	nop
.L00038154:
/*    38154:	3c18800a */ 	lui	$t8,%hi(var8009c3f0)
/*    38158:	9318c3f0 */ 	lbu	$t8,%lo(var8009c3f0)($t8)
/*    3815c:	3c01800a */ 	lui	$at,%hi(var8009c3f0)
/*    38160:	2719ffff */ 	addiu	$t9,$t8,-1
/*    38164:	a039c3f0 */ 	sb	$t9,%lo(var8009c3f0)($at)
.L00038168:
/*    38168:	3c08800a */ 	lui	$t0,%hi(var8009c3e0)
/*    3816c:	8d08c3e0 */ 	lw	$t0,%lo(var8009c3e0)($t0)
/*    38170:	24010005 */ 	addiu	$at,$zero,0x5
/*    38174:	15010010 */ 	bne	$t0,$at,.L000381b8
/*    38178:	00000000 */ 	nop
/*    3817c:	0c00e32b */ 	jal	func00038cac
/*    38180:	00000000 */ 	nop
/*    38184:	3c09800a */ 	lui	$t1,%hi(var8009c3f0)
/*    38188:	9129c3f0 */ 	lbu	$t1,%lo(var8009c3f0)($t1)
/*    3818c:	15200005 */ 	bnez	$t1,.L000381a4
/*    38190:	00000000 */ 	nop
/*    38194:	240a0001 */ 	addiu	$t2,$zero,0x1
/*    38198:	3c01800a */ 	lui	$at,%hi(var8009c3e0)
/*    3819c:	10000006 */ 	b	.L000381b8
/*    381a0:	ac2ac3e0 */ 	sw	$t2,%lo(var8009c3e0)($at)
.L000381a4:
/*    381a4:	3c0b800a */ 	lui	$t3,%hi(var8009c3f0)
/*    381a8:	916bc3f0 */ 	lbu	$t3,%lo(var8009c3f0)($t3)
/*    381ac:	3c01800a */ 	lui	$at,%hi(var8009c3f0)
/*    381b0:	256cffff */ 	addiu	$t4,$t3,-1
/*    381b4:	a02cc3f0 */ 	sb	$t4,%lo(var8009c3f0)($at)
.L000381b8:
/*    381b8:	3c0d800a */ 	lui	$t5,%hi(var8009c3e0)
/*    381bc:	8dadc3e0 */ 	lw	$t5,%lo(var8009c3e0)($t5)
/*    381c0:	24010001 */ 	addiu	$at,$zero,0x1
/*    381c4:	15a101cd */ 	bne	$t5,$at,.L000388fc
/*    381c8:	00000000 */ 	nop
/*    381cc:	3c0f800a */ 	lui	$t7,%hi(var8009c3d0)
/*    381d0:	8defc3d0 */ 	lw	$t7,%lo(var8009c3d0)($t7)
/*    381d4:	8fae0068 */ 	lw	$t6,0x68($sp)
/*    381d8:	3c19800a */ 	lui	$t9,%hi(var8009c3cc)
/*    381dc:	8f39c3cc */ 	lw	$t9,%lo(var8009c3cc)($t9)
/*    381e0:	01cfc021 */ 	addu	$t8,$t6,$t7
/*    381e4:	0338082a */ 	slt	$at,$t9,$t8
/*    381e8:	10200066 */ 	beqz	$at,.L00038384
/*    381ec:	00000000 */ 	nop
/*    381f0:	3c08800a */ 	lui	$t0,%hi(var8009c3cc)
/*    381f4:	3c09800a */ 	lui	$t1,%hi(var8009c3d0)
/*    381f8:	8d29c3d0 */ 	lw	$t1,%lo(var8009c3d0)($t1)
/*    381fc:	8d08c3cc */ 	lw	$t0,%lo(var8009c3cc)($t0)
/*    38200:	3c01800a */ 	lui	$at,%hi(var8009c3cc)
/*    38204:	01095023 */ 	subu	$t2,$t0,$t1
/*    38208:	ac2ac3cc */ 	sw	$t2,%lo(var8009c3cc)($at)
/*    3820c:	3c0b800a */ 	lui	$t3,%hi(var8009c3cc)
/*    38210:	8d6bc3cc */ 	lw	$t3,%lo(var8009c3cc)($t3)
/*    38214:	1160000f */ 	beqz	$t3,.L00038254
/*    38218:	00000000 */ 	nop
/*    3821c:	3c0c800a */ 	lui	$t4,%hi(var8009c3c8)
/*    38220:	8d8cc3c8 */ 	lw	$t4,%lo(var8009c3c8)($t4)
/*    38224:	1180000b */ 	beqz	$t4,.L00038254
/*    38228:	00000000 */ 	nop
/*    3822c:	3c0d800a */ 	lui	$t5,%hi(var8009c3d0)
/*    38230:	8dadc3d0 */ 	lw	$t5,%lo(var8009c3d0)($t5)
/*    38234:	3c0f800a */ 	lui	$t7,%hi(var8009c3c8)
/*    38238:	8defc3c8 */ 	lw	$t7,%lo(var8009c3c8)($t7)
/*    3823c:	000d7040 */ 	sll	$t6,$t5,0x1
/*    38240:	01cfc021 */ 	addu	$t8,$t6,$t7
/*    38244:	afb80054 */ 	sw	$t8,0x54($sp)
/*    38248:	3c19800a */ 	lui	$t9,%hi(var8009c3cc)
/*    3824c:	8f39c3cc */ 	lw	$t9,%lo(var8009c3cc)($t9)
/*    38250:	afb90050 */ 	sw	$t9,0x50($sp)
.L00038254:
/*    38254:	3c01800a */ 	lui	$at,%hi(var8009c3d0)
/*    38258:	ac20c3d0 */ 	sw	$zero,%lo(var8009c3d0)($at)
/*    3825c:	3c01800a */ 	lui	$at,%hi(var8009c3cc)
/*    38260:	ac20c3cc */ 	sw	$zero,%lo(var8009c3cc)($at)
/*    38264:	3c04800a */ 	lui	$a0,%hi(var8009c394)
/*    38268:	8c84c394 */ 	lw	$a0,%lo(var8009c394)($a0)
/*    3826c:	27a50058 */ 	addiu	$a1,$sp,0x58
/*    38270:	0c01114f */ 	jal	func0004453c
/*    38274:	27a6005c */ 	addiu	$a2,$sp,0x5c
/*    38278:	10400042 */ 	beqz	$v0,.L00038384
/*    3827c:	00000000 */ 	nop
/*    38280:	8fa80058 */ 	lw	$t0,0x58($sp)
/*    38284:	3c01800a */ 	lui	$at,%hi(var8009c3c8)
/*    38288:	ac28c3c8 */ 	sw	$t0,%lo(var8009c3c8)($at)
/*    3828c:	8fa9005c */ 	lw	$t1,0x5c($sp)
/*    38290:	afa00064 */ 	sw	$zero,0x64($sp)
/*    38294:	1920002c */ 	blez	$t1,.L00038348
/*    38298:	00000000 */ 	nop
.L0003829c:
/*    3829c:	8faa006c */ 	lw	$t2,0x6c($sp)
/*    382a0:	8d4b0000 */ 	lw	$t3,0x0($t2)
/*    382a4:	afab0044 */ 	sw	$t3,0x44($sp)
/*    382a8:	8d4c0000 */ 	lw	$t4,0x0($t2)
/*    382ac:	258d0008 */ 	addiu	$t5,$t4,0x8
/*    382b0:	ad4d0000 */ 	sw	$t5,0x0($t2)
/*    382b4:	8faf0044 */ 	lw	$t7,0x44($sp)
/*    382b8:	3c0e0800 */ 	lui	$t6,0x800
/*    382bc:	adee0000 */ 	sw	$t6,0x0($t7)
/*    382c0:	8fb80064 */ 	lw	$t8,0x64($sp)
/*    382c4:	3c04800a */ 	lui	$a0,%hi(var8009c3d4)
/*    382c8:	0018c880 */ 	sll	$t9,$t8,0x2
/*    382cc:	00992021 */ 	addu	$a0,$a0,$t9
/*    382d0:	0c012d20 */ 	jal	osVirtualToPhysical
/*    382d4:	8c84c3d4 */ 	lw	$a0,%lo(var8009c3d4)($a0)
/*    382d8:	8fa80044 */ 	lw	$t0,0x44($sp)
/*    382dc:	ad020004 */ 	sw	$v0,0x4($t0)
/*    382e0:	8fa9006c */ 	lw	$t1,0x6c($sp)
/*    382e4:	8d2b0000 */ 	lw	$t3,0x0($t1)
/*    382e8:	afab0040 */ 	sw	$t3,0x40($sp)
/*    382ec:	8d2c0000 */ 	lw	$t4,0x0($t1)
/*    382f0:	258d0008 */ 	addiu	$t5,$t4,0x8
/*    382f4:	ad2d0000 */ 	sw	$t5,0x0($t1)
/*    382f8:	3c0a800a */ 	lui	$t2,%hi(var8009c3d8)
/*    382fc:	8d4ac3d8 */ 	lw	$t2,%lo(var8009c3d8)($t2)
/*    38300:	8fb80040 */ 	lw	$t8,0x40($sp)
/*    38304:	3c010700 */ 	lui	$at,0x700
/*    38308:	314effff */ 	andi	$t6,$t2,0xffff
/*    3830c:	01c17825 */ 	or	$t7,$t6,$at
/*    38310:	af0f0000 */ 	sw	$t7,0x0($t8)
/*    38314:	0c012d20 */ 	jal	osVirtualToPhysical
/*    38318:	8fa40058 */ 	lw	$a0,0x58($sp)
/*    3831c:	8fb90040 */ 	lw	$t9,0x40($sp)
/*    38320:	af220004 */ 	sw	$v0,0x4($t9)
/*    38324:	8fa80058 */ 	lw	$t0,0x58($sp)
/*    38328:	250b0488 */ 	addiu	$t3,$t0,0x488
/*    3832c:	afab0058 */ 	sw	$t3,0x58($sp)
/*    38330:	8fac0064 */ 	lw	$t4,0x64($sp)
/*    38334:	8fa9005c */ 	lw	$t1,0x5c($sp)
/*    38338:	258d0001 */ 	addiu	$t5,$t4,0x1
/*    3833c:	01a9082a */ 	slt	$at,$t5,$t1
/*    38340:	1420ffd6 */ 	bnez	$at,.L0003829c
/*    38344:	afad0064 */ 	sw	$t5,0x64($sp)
.L00038348:
/*    38348:	3c0a800a */ 	lui	$t2,%hi(var8009c3d8)
/*    3834c:	8d4ac3d8 */ 	lw	$t2,%lo(var8009c3d8)($t2)
/*    38350:	3c01800a */ 	lui	$at,%hi(var8009c3d8)
/*    38354:	254effdc */ 	addiu	$t6,$t2,-36
/*    38358:	31cf001e */ 	andi	$t7,$t6,0x1e
/*    3835c:	ac2fc3d8 */ 	sw	$t7,%lo(var8009c3d8)($at)
/*    38360:	24180240 */ 	addiu	$t8,$zero,0x240
/*    38364:	3c01800a */ 	lui	$at,%hi(var8009c3cc)
/*    38368:	ac38c3cc */ 	sw	$t8,%lo(var8009c3cc)($at)
/*    3836c:	8fb9005c */ 	lw	$t9,0x5c($sp)
/*    38370:	3c01800a */ 	lui	$at,%hi(var8009c3f0+0x1)
/*    38374:	3b280002 */ 	xori	$t0,$t9,0x2
/*    38378:	2d080001 */ 	sltiu	$t0,$t0,0x1
/*    3837c:	10000001 */ 	b	.L00038384
/*    38380:	a028c3f1 */ 	sb	$t0,%lo(var8009c3f0+0x1)($at)
.L00038384:
/*    38384:	0c00e32b */ 	jal	func00038cac
/*    38388:	00000000 */ 	nop
/*    3838c:	3c0b800a */ 	lui	$t3,%hi(var8009c3f0+0x1)
/*    38390:	916bc3f1 */ 	lbu	$t3,%lo(var8009c3f0+0x1)($t3)
/*    38394:	15600002 */ 	bnez	$t3,.L000383a0
/*    38398:	00000000 */ 	nop
/*    3839c:	afa0004c */ 	sw	$zero,0x4c($sp)
.L000383a0:
/*    383a0:	8fac0054 */ 	lw	$t4,0x54($sp)
/*    383a4:	11800040 */ 	beqz	$t4,.L000384a8
/*    383a8:	00000000 */ 	nop
/*    383ac:	8fad006c */ 	lw	$t5,0x6c($sp)
/*    383b0:	8da90000 */ 	lw	$t1,0x0($t5)
/*    383b4:	afa9003c */ 	sw	$t1,0x3c($sp)
/*    383b8:	8daa0000 */ 	lw	$t2,0x0($t5)
/*    383bc:	254e0008 */ 	addiu	$t6,$t2,0x8
/*    383c0:	adae0000 */ 	sw	$t6,0x0($t5)
/*    383c4:	8faf0050 */ 	lw	$t7,0x50($sp)
/*    383c8:	8fac004c */ 	lw	$t4,0x4c($sp)
/*    383cc:	8fae003c */ 	lw	$t6,0x3c($sp)
/*    383d0:	01efc021 */ 	addu	$t8,$t7,$t7
/*    383d4:	33190fff */ 	andi	$t9,$t8,0xfff
/*    383d8:	00194300 */ 	sll	$t0,$t9,0xc
/*    383dc:	3c010400 */ 	lui	$at,0x400
/*    383e0:	01015825 */ 	or	$t3,$t0,$at
/*    383e4:	31890fff */ 	andi	$t1,$t4,0xfff
/*    383e8:	01695025 */ 	or	$t2,$t3,$t1
/*    383ec:	adca0000 */ 	sw	$t2,0x0($t6)
/*    383f0:	0c012d20 */ 	jal	osVirtualToPhysical
/*    383f4:	8fa40054 */ 	lw	$a0,0x54($sp)
/*    383f8:	8fad003c */ 	lw	$t5,0x3c($sp)
/*    383fc:	ada20004 */ 	sw	$v0,0x4($t5)
/*    38400:	3c0f800a */ 	lui	$t7,%hi(var8009c3f0+0x1)
/*    38404:	91efc3f1 */ 	lbu	$t7,%lo(var8009c3f0+0x1)($t7)
/*    38408:	11e00019 */ 	beqz	$t7,.L00038470
/*    3840c:	00000000 */ 	nop
/*    38410:	8fb80054 */ 	lw	$t8,0x54($sp)
/*    38414:	27190488 */ 	addiu	$t9,$t8,0x488
/*    38418:	afb90054 */ 	sw	$t9,0x54($sp)
/*    3841c:	8fa8006c */ 	lw	$t0,0x6c($sp)
/*    38420:	8d0c0000 */ 	lw	$t4,0x0($t0)
/*    38424:	afac0038 */ 	sw	$t4,0x38($sp)
/*    38428:	8d0b0000 */ 	lw	$t3,0x0($t0)
/*    3842c:	25690008 */ 	addiu	$t1,$t3,0x8
/*    38430:	ad090000 */ 	sw	$t1,0x0($t0)
/*    38434:	8faa0050 */ 	lw	$t2,0x50($sp)
/*    38438:	8fb90048 */ 	lw	$t9,0x48($sp)
/*    3843c:	8fa90038 */ 	lw	$t1,0x38($sp)
/*    38440:	014a7021 */ 	addu	$t6,$t2,$t2
/*    38444:	31cd0fff */ 	andi	$t5,$t6,0xfff
/*    38448:	000d7b00 */ 	sll	$t7,$t5,0xc
/*    3844c:	3c010400 */ 	lui	$at,0x400
/*    38450:	01e1c025 */ 	or	$t8,$t7,$at
/*    38454:	332c0fff */ 	andi	$t4,$t9,0xfff
/*    38458:	030c5825 */ 	or	$t3,$t8,$t4
/*    3845c:	ad2b0000 */ 	sw	$t3,0x0($t1)
/*    38460:	0c012d20 */ 	jal	osVirtualToPhysical
/*    38464:	8fa40054 */ 	lw	$a0,0x54($sp)
/*    38468:	8fa80038 */ 	lw	$t0,0x38($sp)
/*    3846c:	ad020004 */ 	sw	$v0,0x4($t0)
.L00038470:
/*    38470:	8faa0050 */ 	lw	$t2,0x50($sp)
/*    38474:	8fad004c */ 	lw	$t5,0x4c($sp)
/*    38478:	014a7021 */ 	addu	$t6,$t2,$t2
/*    3847c:	01ae7821 */ 	addu	$t7,$t5,$t6
/*    38480:	afaf004c */ 	sw	$t7,0x4c($sp)
/*    38484:	8fb90050 */ 	lw	$t9,0x50($sp)
/*    38488:	8fac0048 */ 	lw	$t4,0x48($sp)
/*    3848c:	0339c021 */ 	addu	$t8,$t9,$t9
/*    38490:	01985821 */ 	addu	$t3,$t4,$t8
/*    38494:	afab0048 */ 	sw	$t3,0x48($sp)
/*    38498:	8fa90068 */ 	lw	$t1,0x68($sp)
/*    3849c:	8fa80050 */ 	lw	$t0,0x50($sp)
/*    384a0:	01285023 */ 	subu	$t2,$t1,$t0
/*    384a4:	afaa0068 */ 	sw	$t2,0x68($sp)
.L000384a8:
/*    384a8:	8fad0068 */ 	lw	$t5,0x68($sp)
/*    384ac:	19a00043 */ 	blez	$t5,.L000385bc
/*    384b0:	00000000 */ 	nop
/*    384b4:	3c0e800a */ 	lui	$t6,%hi(var8009c3c8)
/*    384b8:	8dcec3c8 */ 	lw	$t6,%lo(var8009c3c8)($t6)
/*    384bc:	11c0003f */ 	beqz	$t6,.L000385bc
/*    384c0:	00000000 */ 	nop
/*    384c4:	3c0f800a */ 	lui	$t7,%hi(var8009c3d0)
/*    384c8:	8defc3d0 */ 	lw	$t7,%lo(var8009c3d0)($t7)
/*    384cc:	3c0c800a */ 	lui	$t4,%hi(var8009c3c8)
/*    384d0:	8d8cc3c8 */ 	lw	$t4,%lo(var8009c3c8)($t4)
/*    384d4:	000fc840 */ 	sll	$t9,$t7,0x1
/*    384d8:	032cc021 */ 	addu	$t8,$t9,$t4
/*    384dc:	afb80054 */ 	sw	$t8,0x54($sp)
/*    384e0:	8fab006c */ 	lw	$t3,0x6c($sp)
/*    384e4:	8d690000 */ 	lw	$t1,0x0($t3)
/*    384e8:	afa90034 */ 	sw	$t1,0x34($sp)
/*    384ec:	8d680000 */ 	lw	$t0,0x0($t3)
/*    384f0:	250a0008 */ 	addiu	$t2,$t0,0x8
/*    384f4:	ad6a0000 */ 	sw	$t2,0x0($t3)
/*    384f8:	8fad0068 */ 	lw	$t5,0x68($sp)
/*    384fc:	8fb8004c */ 	lw	$t8,0x4c($sp)
/*    38500:	8faa0034 */ 	lw	$t2,0x34($sp)
/*    38504:	01ad7021 */ 	addu	$t6,$t5,$t5
/*    38508:	31cf0fff */ 	andi	$t7,$t6,0xfff
/*    3850c:	000fcb00 */ 	sll	$t9,$t7,0xc
/*    38510:	3c010400 */ 	lui	$at,0x400
/*    38514:	03216025 */ 	or	$t4,$t9,$at
/*    38518:	33090fff */ 	andi	$t1,$t8,0xfff
/*    3851c:	01894025 */ 	or	$t0,$t4,$t1
/*    38520:	ad480000 */ 	sw	$t0,0x0($t2)
/*    38524:	0c012d20 */ 	jal	osVirtualToPhysical
/*    38528:	8fa40054 */ 	lw	$a0,0x54($sp)
/*    3852c:	8fab0034 */ 	lw	$t3,0x34($sp)
/*    38530:	ad620004 */ 	sw	$v0,0x4($t3)
/*    38534:	3c0d800a */ 	lui	$t5,%hi(var8009c3f0+0x1)
/*    38538:	91adc3f1 */ 	lbu	$t5,%lo(var8009c3f0+0x1)($t5)
/*    3853c:	11a00019 */ 	beqz	$t5,.L000385a4
/*    38540:	00000000 */ 	nop
/*    38544:	8fae0054 */ 	lw	$t6,0x54($sp)
/*    38548:	25cf0488 */ 	addiu	$t7,$t6,0x488
/*    3854c:	afaf0054 */ 	sw	$t7,0x54($sp)
/*    38550:	8fb9006c */ 	lw	$t9,0x6c($sp)
/*    38554:	8f380000 */ 	lw	$t8,0x0($t9)
/*    38558:	afb80030 */ 	sw	$t8,0x30($sp)
/*    3855c:	8f2c0000 */ 	lw	$t4,0x0($t9)
/*    38560:	25890008 */ 	addiu	$t1,$t4,0x8
/*    38564:	af290000 */ 	sw	$t1,0x0($t9)
/*    38568:	8fa80068 */ 	lw	$t0,0x68($sp)
/*    3856c:	8faf0048 */ 	lw	$t7,0x48($sp)
/*    38570:	8fa90030 */ 	lw	$t1,0x30($sp)
/*    38574:	01085021 */ 	addu	$t2,$t0,$t0
/*    38578:	314b0fff */ 	andi	$t3,$t2,0xfff
/*    3857c:	000b6b00 */ 	sll	$t5,$t3,0xc
/*    38580:	3c010400 */ 	lui	$at,0x400
/*    38584:	01a17025 */ 	or	$t6,$t5,$at
/*    38588:	31f80fff */ 	andi	$t8,$t7,0xfff
/*    3858c:	01d86025 */ 	or	$t4,$t6,$t8
/*    38590:	ad2c0000 */ 	sw	$t4,0x0($t1)
/*    38594:	0c012d20 */ 	jal	osVirtualToPhysical
/*    38598:	8fa40054 */ 	lw	$a0,0x54($sp)
/*    3859c:	8fb90030 */ 	lw	$t9,0x30($sp)
/*    385a0:	af220004 */ 	sw	$v0,0x4($t9)
.L000385a4:
/*    385a4:	3c08800a */ 	lui	$t0,%hi(var8009c3d0)
/*    385a8:	8d08c3d0 */ 	lw	$t0,%lo(var8009c3d0)($t0)
/*    385ac:	8faa0068 */ 	lw	$t2,0x68($sp)
/*    385b0:	3c01800a */ 	lui	$at,%hi(var8009c3d0)
/*    385b4:	010a5821 */ 	addu	$t3,$t0,$t2
/*    385b8:	ac2bc3d0 */ 	sw	$t3,%lo(var8009c3d0)($at)
.L000385bc:
/*    385bc:	3c04800a */ 	lui	$a0,%hi(var8009c390)
/*    385c0:	0c00e249 */ 	jal	func00038924
/*    385c4:	2484c390 */ 	addiu	$a0,$a0,%lo(var8009c390)
/*    385c8:	3c0d800a */ 	lui	$t5,%hi(var8009c3f0+0x1)
/*    385cc:	91adc3f1 */ 	lbu	$t5,%lo(var8009c3f0+0x1)($t5)
/*    385d0:	15a000c8 */ 	bnez	$t5,.L000388f4
/*    385d4:	00000000 */ 	nop
/*    385d8:	8faf006c */ 	lw	$t7,0x6c($sp)
/*    385dc:	8dee0000 */ 	lw	$t6,0x0($t7)
/*    385e0:	afae002c */ 	sw	$t6,0x2c($sp)
/*    385e4:	8df80000 */ 	lw	$t8,0x0($t7)
/*    385e8:	270c0008 */ 	addiu	$t4,$t8,0x8
/*    385ec:	adec0000 */ 	sw	$t4,0x0($t7)
/*    385f0:	8fb9002c */ 	lw	$t9,0x2c($sp)
/*    385f4:	3c090200 */ 	lui	$t1,0x200
/*    385f8:	352904e0 */ 	ori	$t1,$t1,0x4e0
/*    385fc:	af290000 */ 	sw	$t1,0x0($t9)
/*    38600:	8faa002c */ 	lw	$t2,0x2c($sp)
/*    38604:	240802e0 */ 	addiu	$t0,$zero,0x2e0
/*    38608:	ad480004 */ 	sw	$t0,0x4($t2)
/*    3860c:	3c0b800a */ 	lui	$t3,%hi(var8009c3b4)
/*    38610:	856bc3b4 */ 	lh	$t3,%lo(var8009c3b4)($t3)
/*    38614:	11600099 */ 	beqz	$t3,.L0003887c
/*    38618:	00000000 */ 	nop
/*    3861c:	3c01800a */ 	lui	$at,%hi(var8009c3b4)
/*    38620:	a420c3b4 */ 	sh	$zero,%lo(var8009c3b4)($at)
/*    38624:	3c0d800a */ 	lui	$t5,%hi(var8009c39c)
/*    38628:	85adc39c */ 	lh	$t5,%lo(var8009c39c)($t5)
/*    3862c:	3c0c8006 */ 	lui	$t4,%hi(var8005f570)
/*    38630:	3c0f800a */ 	lui	$t7,%hi(var8009c39c+0x2)
/*    38634:	31ae007f */ 	andi	$t6,$t5,0x7f
/*    38638:	000ec040 */ 	sll	$t8,$t6,0x1
/*    3863c:	01986021 */ 	addu	$t4,$t4,$t8
/*    38640:	858cf570 */ 	lh	$t4,%lo(var8005f570)($t4)
/*    38644:	85efc39e */ 	lh	$t7,%lo(var8009c39c+0x2)($t7)
/*    38648:	3c01800a */ 	lui	$at,%hi(var8009c3ac)
/*    3864c:	018f0019 */ 	multu	$t4,$t7
/*    38650:	00004812 */ 	mflo	$t1
/*    38654:	0009cbc3 */ 	sra	$t9,$t1,0xf
/*    38658:	a439c3ac */ 	sh	$t9,%lo(var8009c3ac)($at)
/*    3865c:	3c08800a */ 	lui	$t0,%hi(var8009c3a0)
/*    38660:	3c0a800a */ 	lui	$t2,%hi(var8009c3ac)
/*    38664:	854ac3ac */ 	lh	$t2,%lo(var8009c3ac)($t2)
/*    38668:	8508c3a0 */ 	lh	$t0,%lo(var8009c3a0)($t0)
/*    3866c:	3c07800a */ 	lui	$a3,%hi(var8009c390)
/*    38670:	448a3000 */ 	mtc1	$t2,$f6
/*    38674:	44882000 */ 	mtc1	$t0,$f4
/*    38678:	24e7c390 */ 	addiu	$a3,$a3,%lo(var8009c390)
/*    3867c:	3c06800a */ 	lui	$a2,%hi(var8009c3bc)
/*    38680:	8cc6c3bc */ 	lw	$a2,%lo(var8009c3bc)($a2)
/*    38684:	24e70018 */ 	addiu	$a3,$a3,0x18
/*    38688:	468033a0 */ 	cvt.s.w	$f14,$f6
/*    3868c:	0c00fd83 */ 	jal	func0003f60c
/*    38690:	46802320 */ 	cvt.s.w	$f12,$f4
/*    38694:	3c01800a */ 	lui	$at,%hi(var8009c3a8+0x2)
/*    38698:	a422c3aa */ 	sh	$v0,%lo(var8009c3a8+0x2)($at)
/*    3869c:	3c0b800a */ 	lui	$t3,%hi(var8009c39c)
/*    386a0:	856bc39c */ 	lh	$t3,%lo(var8009c39c)($t3)
/*    386a4:	3c0c8006 */ 	lui	$t4,%hi(var8005f66c+0x2)
/*    386a8:	3c0f800a */ 	lui	$t7,%hi(var8009c39c+0x2)
/*    386ac:	316d007f */ 	andi	$t5,$t3,0x7f
/*    386b0:	000d7023 */ 	negu	$t6,$t5
/*    386b4:	000ec040 */ 	sll	$t8,$t6,0x1
/*    386b8:	01986021 */ 	addu	$t4,$t4,$t8
/*    386bc:	858cf66e */ 	lh	$t4,%lo(var8005f66c+0x2)($t4)
/*    386c0:	85efc39e */ 	lh	$t7,%lo(var8009c39c+0x2)($t7)
/*    386c4:	3c01800a */ 	lui	$at,%hi(var8009c3b0+0x2)
/*    386c8:	018f0019 */ 	multu	$t4,$t7
/*    386cc:	00004812 */ 	mflo	$t1
/*    386d0:	0009cbc3 */ 	sra	$t9,$t1,0xf
/*    386d4:	a439c3b2 */ 	sh	$t9,%lo(var8009c3b0+0x2)($at)
/*    386d8:	3c08800a */ 	lui	$t0,%hi(var8009c3a0+0x2)
/*    386dc:	3c0a800a */ 	lui	$t2,%hi(var8009c3b0+0x2)
/*    386e0:	854ac3b2 */ 	lh	$t2,%lo(var8009c3b0+0x2)($t2)
/*    386e4:	8508c3a2 */ 	lh	$t0,%lo(var8009c3a0+0x2)($t0)
/*    386e8:	3c07800a */ 	lui	$a3,%hi(var8009c390)
/*    386ec:	448a5000 */ 	mtc1	$t2,$f10
/*    386f0:	44884000 */ 	mtc1	$t0,$f8
/*    386f4:	24e7c390 */ 	addiu	$a3,$a3,%lo(var8009c390)
/*    386f8:	3c06800a */ 	lui	$a2,%hi(var8009c3bc)
/*    386fc:	8cc6c3bc */ 	lw	$a2,%lo(var8009c3bc)($a2)
/*    38700:	24e7001e */ 	addiu	$a3,$a3,0x1e
/*    38704:	468053a0 */ 	cvt.s.w	$f14,$f10
/*    38708:	0c00fd83 */ 	jal	func0003f60c
/*    3870c:	46804320 */ 	cvt.s.w	$f12,$f8
/*    38710:	3c01800a */ 	lui	$at,%hi(var8009c3b0)
/*    38714:	a422c3b0 */ 	sh	$v0,%lo(var8009c3b0)($at)
/*    38718:	8fab006c */ 	lw	$t3,0x6c($sp)
/*    3871c:	8d6d0000 */ 	lw	$t5,0x0($t3)
/*    38720:	afad0028 */ 	sw	$t5,0x28($sp)
/*    38724:	8d6e0000 */ 	lw	$t6,0x0($t3)
/*    38728:	25d80008 */ 	addiu	$t8,$t6,0x8
/*    3872c:	ad780000 */ 	sw	$t8,0x0($t3)
/*    38730:	3c0c800a */ 	lui	$t4,%hi(var8009c3a0)
/*    38734:	858cc3a0 */ 	lh	$t4,%lo(var8009c3a0)($t4)
/*    38738:	8fb90028 */ 	lw	$t9,0x28($sp)
/*    3873c:	3c010906 */ 	lui	$at,0x906
/*    38740:	318fffff */ 	andi	$t7,$t4,0xffff
/*    38744:	01e14825 */ 	or	$t1,$t7,$at
/*    38748:	af290000 */ 	sw	$t1,0x0($t9)
/*    3874c:	3c08800a */ 	lui	$t0,%hi(var8009c3a4)
/*    38750:	8508c3a4 */ 	lh	$t0,%lo(var8009c3a4)($t0)
/*    38754:	3c0e800a */ 	lui	$t6,%hi(var8009c3a4+0x2)
/*    38758:	85cec3a6 */ 	lh	$t6,%lo(var8009c3a4+0x2)($t6)
/*    3875c:	8fac0028 */ 	lw	$t4,0x28($sp)
/*    38760:	310affff */ 	andi	$t2,$t0,0xffff
/*    38764:	000a6c00 */ 	sll	$t5,$t2,0x10
/*    38768:	31d8ffff */ 	andi	$t8,$t6,0xffff
/*    3876c:	01b85825 */ 	or	$t3,$t5,$t8
/*    38770:	ad8b0004 */ 	sw	$t3,0x4($t4)
/*    38774:	8faf006c */ 	lw	$t7,0x6c($sp)
/*    38778:	8de90000 */ 	lw	$t1,0x0($t7)
/*    3877c:	afa90024 */ 	sw	$t1,0x24($sp)
/*    38780:	8df90000 */ 	lw	$t9,0x0($t7)
/*    38784:	27280008 */ 	addiu	$t0,$t9,0x8
/*    38788:	ade80000 */ 	sw	$t0,0x0($t7)
/*    3878c:	3c0a800a */ 	lui	$t2,%hi(var8009c3b0+0x2)
/*    38790:	854ac3b2 */ 	lh	$t2,%lo(var8009c3b0+0x2)($t2)
/*    38794:	8fb80024 */ 	lw	$t8,0x24($sp)
/*    38798:	3c010904 */ 	lui	$at,0x904
/*    3879c:	314effff */ 	andi	$t6,$t2,0xffff
/*    387a0:	01c16825 */ 	or	$t5,$t6,$at
/*    387a4:	af0d0000 */ 	sw	$t5,0x0($t8)
/*    387a8:	3c0b800a */ 	lui	$t3,%hi(var8009c3b0)
/*    387ac:	856bc3b0 */ 	lh	$t3,%lo(var8009c3b0)($t3)
/*    387b0:	3c19800a */ 	lui	$t9,%hi(var8009c3ac+0x2)
/*    387b4:	9739c3ae */ 	lhu	$t9,%lo(var8009c3ac+0x2)($t9)
/*    387b8:	8faa0024 */ 	lw	$t2,0x24($sp)
/*    387bc:	316cffff */ 	andi	$t4,$t3,0xffff
/*    387c0:	000c4c00 */ 	sll	$t1,$t4,0x10
/*    387c4:	3328ffff */ 	andi	$t0,$t9,0xffff
/*    387c8:	01287825 */ 	or	$t7,$t1,$t0
/*    387cc:	ad4f0004 */ 	sw	$t7,0x4($t2)
/*    387d0:	8fae006c */ 	lw	$t6,0x6c($sp)
/*    387d4:	8dcd0000 */ 	lw	$t5,0x0($t6)
/*    387d8:	afad0020 */ 	sw	$t5,0x20($sp)
/*    387dc:	8dd80000 */ 	lw	$t8,0x0($t6)
/*    387e0:	270b0008 */ 	addiu	$t3,$t8,0x8
/*    387e4:	adcb0000 */ 	sw	$t3,0x0($t6)
/*    387e8:	3c0c800a */ 	lui	$t4,%hi(var8009c3ac)
/*    387ec:	858cc3ac */ 	lh	$t4,%lo(var8009c3ac)($t4)
/*    387f0:	8fa80020 */ 	lw	$t0,0x20($sp)
/*    387f4:	3c010900 */ 	lui	$at,0x900
/*    387f8:	3199ffff */ 	andi	$t9,$t4,0xffff
/*    387fc:	03214825 */ 	or	$t1,$t9,$at
/*    38800:	ad090000 */ 	sw	$t1,0x0($t0)
/*    38804:	3c0f800a */ 	lui	$t7,%hi(var8009c3a8+0x2)
/*    38808:	85efc3aa */ 	lh	$t7,%lo(var8009c3a8+0x2)($t7)
/*    3880c:	3c18800a */ 	lui	$t8,%hi(var8009c3a8)
/*    38810:	9718c3a8 */ 	lhu	$t8,%lo(var8009c3a8)($t8)
/*    38814:	8fac0020 */ 	lw	$t4,0x20($sp)
/*    38818:	31eaffff */ 	andi	$t2,$t7,0xffff
/*    3881c:	000a6c00 */ 	sll	$t5,$t2,0x10
/*    38820:	330bffff */ 	andi	$t3,$t8,0xffff
/*    38824:	01ab7025 */ 	or	$t6,$t5,$t3
/*    38828:	ad8e0004 */ 	sw	$t6,0x4($t4)
/*    3882c:	8fb9006c */ 	lw	$t9,0x6c($sp)
/*    38830:	8f290000 */ 	lw	$t1,0x0($t9)
/*    38834:	afa9001c */ 	sw	$t1,0x1c($sp)
/*    38838:	8f280000 */ 	lw	$t0,0x0($t9)
/*    3883c:	250f0008 */ 	addiu	$t7,$t0,0x8
/*    38840:	af2f0000 */ 	sw	$t7,0x0($t9)
/*    38844:	3c0a800a */ 	lui	$t2,%hi(var8009c3a0+0x2)
/*    38848:	854ac3a2 */ 	lh	$t2,%lo(var8009c3a0+0x2)($t2)
/*    3884c:	8fab001c */ 	lw	$t3,0x1c($sp)
/*    38850:	3c010301 */ 	lui	$at,0x301
/*    38854:	3158ffff */ 	andi	$t8,$t2,0xffff
/*    38858:	03016825 */ 	or	$t5,$t8,$at
/*    3885c:	ad6d0000 */ 	sw	$t5,0x0($t3)
/*    38860:	3c04800a */ 	lui	$a0,%hi(var8009c398)
/*    38864:	0c012d20 */ 	jal	osVirtualToPhysical
/*    38868:	8c84c398 */ 	lw	$a0,%lo(var8009c398)($a0)
/*    3886c:	8fae001c */ 	lw	$t6,0x1c($sp)
/*    38870:	adc20004 */ 	sw	$v0,0x4($t6)
/*    38874:	1000000f */ 	b	.L000388b4
/*    38878:	00000000 */ 	nop
.L0003887c:
/*    3887c:	8fac006c */ 	lw	$t4,0x6c($sp)
/*    38880:	8d890000 */ 	lw	$t1,0x0($t4)
/*    38884:	afa90018 */ 	sw	$t1,0x18($sp)
/*    38888:	8d880000 */ 	lw	$t0,0x0($t4)
/*    3888c:	250f0008 */ 	addiu	$t7,$t0,0x8
/*    38890:	ad8f0000 */ 	sw	$t7,0x0($t4)
/*    38894:	8faa0018 */ 	lw	$t2,0x18($sp)
/*    38898:	3c190300 */ 	lui	$t9,0x300
/*    3889c:	ad590000 */ 	sw	$t9,0x0($t2)
/*    388a0:	3c04800a */ 	lui	$a0,%hi(var8009c398)
/*    388a4:	0c012d20 */ 	jal	osVirtualToPhysical
/*    388a8:	8c84c398 */ 	lw	$a0,%lo(var8009c398)($a0)
/*    388ac:	8fb80018 */ 	lw	$t8,0x18($sp)
/*    388b0:	af020004 */ 	sw	$v0,0x4($t8)
.L000388b4:
/*    388b4:	3c0d800a */ 	lui	$t5,%hi(var8009c3b8)
/*    388b8:	8dadc3b8 */ 	lw	$t5,%lo(var8009c3b8)($t5)
/*    388bc:	3c01800a */ 	lui	$at,%hi(var8009c3b8)
/*    388c0:	25ab00b8 */ 	addiu	$t3,$t5,0xb8
/*    388c4:	ac2bc3b8 */ 	sw	$t3,%lo(var8009c3b8)($at)
/*    388c8:	3c0e800a */ 	lui	$t6,%hi(var8009c3b8)
/*    388cc:	3c09800a */ 	lui	$t1,%hi(var8009c3bc)
/*    388d0:	8d29c3bc */ 	lw	$t1,%lo(var8009c3bc)($t1)
/*    388d4:	8dcec3b8 */ 	lw	$t6,%lo(var8009c3b8)($t6)
/*    388d8:	012e082a */ 	slt	$at,$t1,$t6
/*    388dc:	10200005 */ 	beqz	$at,.L000388f4
/*    388e0:	00000000 */ 	nop
/*    388e4:	3c08800a */ 	lui	$t0,%hi(var8009c3bc)
/*    388e8:	8d08c3bc */ 	lw	$t0,%lo(var8009c3bc)($t0)
/*    388ec:	3c01800a */ 	lui	$at,%hi(var8009c3b8)
/*    388f0:	ac28c3b8 */ 	sw	$t0,%lo(var8009c3b8)($at)
.L000388f4:
/*    388f4:	10000003 */ 	b	.L00038904
/*    388f8:	00000000 */ 	nop
.L000388fc:
/*    388fc:	10000005 */ 	b	.L00038914
/*    38900:	00001025 */ 	or	$v0,$zero,$zero
.L00038904:
/*    38904:	10000003 */ 	b	.L00038914
/*    38908:	24020001 */ 	addiu	$v0,$zero,0x1
/*    3890c:	10000001 */ 	b	.L00038914
/*    38910:	00000000 */ 	nop
.L00038914:
/*    38914:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*    38918:	27bd0068 */ 	addiu	$sp,$sp,0x68
/*    3891c:	03e00008 */ 	jr	$ra
/*    38920:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00038924
/*    38924:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*    38928:	afbf0014 */ 	sw	$ra,0x14($sp)
/*    3892c:	afa40018 */ 	sw	$a0,0x18($sp)
/*    38930:	8fae0018 */ 	lw	$t6,0x18($sp)
/*    38934:	85cf000e */ 	lh	$t7,0xe($t6)
/*    38938:	8dd80054 */ 	lw	$t8,0x54($t6)
/*    3893c:	15f80005 */ 	bne	$t7,$t8,.L00038954
/*    38940:	00000000 */ 	nop
/*    38944:	85d9000c */ 	lh	$t9,0xc($t6)
/*    38948:	85c8005c */ 	lh	$t0,0x5c($t6)
/*    3894c:	1328008a */ 	beq	$t9,$t0,.L00038b78
/*    38950:	00000000 */ 	nop
.L00038954:
/*    38954:	8fa90018 */ 	lw	$t1,0x18($sp)
/*    38958:	8d2a0028 */ 	lw	$t2,0x28($t1)
/*    3895c:	8d2b002c */ 	lw	$t3,0x2c($t1)
/*    38960:	014b082a */ 	slt	$at,$t2,$t3
/*    38964:	14200024 */ 	bnez	$at,.L000389f8
/*    38968:	00000000 */ 	nop
/*    3896c:	8fac0018 */ 	lw	$t4,0x18($sp)
/*    38970:	3c0e8006 */ 	lui	$t6,%hi(var8005f570)
/*    38974:	858d000c */ 	lh	$t5,0xc($t4)
/*    38978:	8599000e */ 	lh	$t9,0xe($t4)
/*    3897c:	31af007f */ 	andi	$t7,$t5,0x7f
/*    38980:	000fc040 */ 	sll	$t8,$t7,0x1
/*    38984:	01d87021 */ 	addu	$t6,$t6,$t8
/*    38988:	85cef570 */ 	lh	$t6,%lo(var8005f570)($t6)
/*    3898c:	01d90019 */ 	multu	$t6,$t9
/*    38990:	00004012 */ 	mflo	$t0
/*    38994:	00084bc3 */ 	sra	$t1,$t0,0xf
/*    38998:	a589001c */ 	sh	$t1,0x1c($t4)
/*    3899c:	8faa0018 */ 	lw	$t2,0x18($sp)
/*    389a0:	3c0e8006 */ 	lui	$t6,%hi(var8005f66c+0x2)
/*    389a4:	854b000c */ 	lh	$t3,0xc($t2)
/*    389a8:	8559000e */ 	lh	$t9,0xe($t2)
/*    389ac:	316d007f */ 	andi	$t5,$t3,0x7f
/*    389b0:	000d7823 */ 	negu	$t7,$t5
/*    389b4:	000fc040 */ 	sll	$t8,$t7,0x1
/*    389b8:	01d87021 */ 	addu	$t6,$t6,$t8
/*    389bc:	85cef66e */ 	lh	$t6,%lo(var8005f66c+0x2)($t6)
/*    389c0:	01d90019 */ 	multu	$t6,$t9
/*    389c4:	00004012 */ 	mflo	$t0
/*    389c8:	00084bc3 */ 	sra	$t1,$t0,0xf
/*    389cc:	a5490022 */ 	sh	$t1,0x22($t2)
/*    389d0:	8fac0018 */ 	lw	$t4,0x18($sp)
/*    389d4:	8d8b002c */ 	lw	$t3,0x2c($t4)
/*    389d8:	ad8b0028 */ 	sw	$t3,0x28($t4)
/*    389dc:	8fad0018 */ 	lw	$t5,0x18($sp)
/*    389e0:	85af001c */ 	lh	$t7,0x1c($t5)
/*    389e4:	a5af0010 */ 	sh	$t7,0x10($t5)
/*    389e8:	8fb80018 */ 	lw	$t8,0x18($sp)
/*    389ec:	870e0022 */ 	lh	$t6,0x22($t8)
/*    389f0:	10000011 */ 	b	.L00038a38
/*    389f4:	a70e0012 */ 	sh	$t6,0x12($t8)
.L000389f8:
/*    389f8:	8fb90018 */ 	lw	$t9,0x18($sp)
/*    389fc:	87240010 */ 	lh	$a0,0x10($t9)
/*    38a00:	8f250028 */ 	lw	$a1,0x28($t9)
/*    38a04:	8726001a */ 	lh	$a2,0x1a($t9)
/*    38a08:	0c00fe07 */ 	jal	func0003f81c
/*    38a0c:	97270018 */ 	lhu	$a3,0x18($t9)
/*    38a10:	8fa80018 */ 	lw	$t0,0x18($sp)
/*    38a14:	a5020010 */ 	sh	$v0,0x10($t0)
/*    38a18:	8fa90018 */ 	lw	$t1,0x18($sp)
/*    38a1c:	85240012 */ 	lh	$a0,0x12($t1)
/*    38a20:	8d250028 */ 	lw	$a1,0x28($t1)
/*    38a24:	85260020 */ 	lh	$a2,0x20($t1)
/*    38a28:	0c00fe07 */ 	jal	func0003f81c
/*    38a2c:	9527001e */ 	lhu	$a3,0x1e($t1)
/*    38a30:	8faa0018 */ 	lw	$t2,0x18($sp)
/*    38a34:	a5420012 */ 	sh	$v0,0x12($t2)
.L00038a38:
/*    38a38:	8fab0018 */ 	lw	$t3,0x18($sp)
/*    38a3c:	856c0010 */ 	lh	$t4,0x10($t3)
/*    38a40:	15800004 */ 	bnez	$t4,.L00038a54
/*    38a44:	00000000 */ 	nop
/*    38a48:	8fad0018 */ 	lw	$t5,0x18($sp)
/*    38a4c:	240f0001 */ 	addiu	$t7,$zero,0x1
/*    38a50:	a5af0010 */ 	sh	$t7,0x10($t5)
.L00038a54:
/*    38a54:	8fae0018 */ 	lw	$t6,0x18($sp)
/*    38a58:	85d80012 */ 	lh	$t8,0x12($t6)
/*    38a5c:	17000004 */ 	bnez	$t8,.L00038a70
/*    38a60:	00000000 */ 	nop
/*    38a64:	8fa80018 */ 	lw	$t0,0x18($sp)
/*    38a68:	24190001 */ 	addiu	$t9,$zero,0x1
/*    38a6c:	a5190012 */ 	sh	$t9,0x12($t0)
.L00038a70:
/*    38a70:	8fa90018 */ 	lw	$t1,0x18($sp)
/*    38a74:	8d2a0054 */ 	lw	$t2,0x54($t1)
/*    38a78:	a52a000e */ 	sh	$t2,0xe($t1)
/*    38a7c:	8fab0018 */ 	lw	$t3,0x18($sp)
/*    38a80:	856c000c */ 	lh	$t4,0xc($t3)
/*    38a84:	856f005c */ 	lh	$t7,0x5c($t3)
/*    38a88:	118f002a */ 	beq	$t4,$t7,.L00038b34
/*    38a8c:	00000000 */ 	nop
/*    38a90:	3c0d800a */ 	lui	$t5,%hi(var8009c340+0x2)
/*    38a94:	91adc342 */ 	lbu	$t5,%lo(var8009c340+0x2)($t5)
/*    38a98:	11a0000a */ 	beqz	$t5,.L00038ac4
/*    38a9c:	00000000 */ 	nop
/*    38aa0:	8fae0018 */ 	lw	$t6,0x18($sp)
/*    38aa4:	85d8005c */ 	lh	$t8,0x5c($t6)
/*    38aa8:	3319007f */ 	andi	$t9,$t8,0x7f
/*    38aac:	00194400 */ 	sll	$t0,$t9,0x10
/*    38ab0:	00085403 */ 	sra	$t2,$t0,0x10
/*    38ab4:	000a4843 */ 	sra	$t1,$t2,0x1
/*    38ab8:	252b0020 */ 	addiu	$t3,$t1,0x20
/*    38abc:	1000000c */ 	b	.L00038af0
/*    38ac0:	a5cb000c */ 	sh	$t3,0xc($t6)
.L00038ac4:
/*    38ac4:	3c0c800a */ 	lui	$t4,%hi(var8009c340+0x1)
/*    38ac8:	918cc341 */ 	lbu	$t4,%lo(var8009c340+0x1)($t4)
/*    38acc:	11800005 */ 	beqz	$t4,.L00038ae4
/*    38ad0:	00000000 */ 	nop
/*    38ad4:	8fad0018 */ 	lw	$t5,0x18($sp)
/*    38ad8:	240f0040 */ 	addiu	$t7,$zero,0x40
/*    38adc:	10000004 */ 	b	.L00038af0
/*    38ae0:	a5af000c */ 	sh	$t7,0xc($t5)
.L00038ae4:
/*    38ae4:	8fb80018 */ 	lw	$t8,0x18($sp)
/*    38ae8:	8719005c */ 	lh	$t9,0x5c($t8)
/*    38aec:	a719000c */ 	sh	$t9,0xc($t8)
.L00038af0:
/*    38af0:	8fa80018 */ 	lw	$t0,0x18($sp)
/*    38af4:	8509005c */ 	lh	$t1,0x5c($t0)
/*    38af8:	850a000c */ 	lh	$t2,0xc($t0)
/*    38afc:	312b0080 */ 	andi	$t3,$t1,0x80
/*    38b00:	256e007f */ 	addiu	$t6,$t3,0x7f
/*    38b04:	014e6024 */ 	and	$t4,$t2,$t6
/*    38b08:	a50c000c */ 	sh	$t4,0xc($t0)
/*    38b0c:	8faf0018 */ 	lw	$t7,0x18($sp)
/*    38b10:	85ed000c */ 	lh	$t5,0xc($t7)
/*    38b14:	31b90080 */ 	andi	$t9,$t5,0x80
/*    38b18:	13200004 */ 	beqz	$t9,.L00038b2c
/*    38b1c:	00000000 */ 	nop
/*    38b20:	24180001 */ 	addiu	$t8,$zero,0x1
/*    38b24:	10000003 */ 	b	.L00038b34
/*    38b28:	a5f80016 */ 	sh	$t8,0x16($t7)
.L00038b2c:
/*    38b2c:	8fa90018 */ 	lw	$t1,0x18($sp)
/*    38b30:	a5200016 */ 	sh	$zero,0x16($t1)
.L00038b34:
/*    38b34:	8fab0018 */ 	lw	$t3,0x18($sp)
/*    38b38:	ad600028 */ 	sw	$zero,0x28($t3)
/*    38b3c:	8faa0018 */ 	lw	$t2,0x18($sp)
/*    38b40:	240100b8 */ 	addiu	$at,$zero,0xb8
/*    38b44:	8d4e0058 */ 	lw	$t6,0x58($t2)
/*    38b48:	25cc00b7 */ 	addiu	$t4,$t6,0xb7
/*    38b4c:	0181001b */ 	divu	$zero,$t4,$at
/*    38b50:	00004012 */ 	mflo	$t0
/*    38b54:	00086880 */ 	sll	$t5,$t0,0x2
/*    38b58:	01a86823 */ 	subu	$t5,$t5,$t0
/*    38b5c:	000d68c0 */ 	sll	$t5,$t5,0x3
/*    38b60:	01a86823 */ 	subu	$t5,$t5,$t0
/*    38b64:	000d68c0 */ 	sll	$t5,$t5,0x3
/*    38b68:	ad4d002c */ 	sw	$t5,0x2c($t2)
/*    38b6c:	8fb80018 */ 	lw	$t8,0x18($sp)
/*    38b70:	24190001 */ 	addiu	$t9,$zero,0x1
/*    38b74:	a7190024 */ 	sh	$t9,0x24($t8)
.L00038b78:
/*    38b78:	10000001 */ 	b	.L00038b80
/*    38b7c:	00000000 */ 	nop
.L00038b80:
/*    38b80:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*    38b84:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*    38b88:	03e00008 */ 	jr	$ra
/*    38b8c:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00038b90
/*    38b90:	3c01800a */ 	lui	$at,%hi(var8009c3dc)
/*    38b94:	ac24c3dc */ 	sw	$a0,%lo(var8009c3dc)($at)
/*    38b98:	03e00008 */ 	jr	$ra
/*    38b9c:	00000000 */ 	nop
/*    38ba0:	03e00008 */ 	jr	$ra
/*    38ba4:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00038ba8
/*    38ba8:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*    38bac:	afbf0014 */ 	sw	$ra,0x14($sp)
/*    38bb0:	afa40020 */ 	sw	$a0,0x20($sp)
/*    38bb4:	afa50024 */ 	sw	$a1,0x24($sp)
/*    38bb8:	afa60028 */ 	sw	$a2,0x28($sp)
/*    38bbc:	afa7002c */ 	sw	$a3,0x2c($sp)
/*    38bc0:	8fae002c */ 	lw	$t6,0x2c($sp)
/*    38bc4:	2401ffff */ 	addiu	$at,$zero,-1
/*    38bc8:	11c10004 */ 	beq	$t6,$at,.L00038bdc
/*    38bcc:	00000000 */ 	nop
/*    38bd0:	8faf002c */ 	lw	$t7,0x2c($sp)
/*    38bd4:	3c01800a */ 	lui	$at,%hi(var8009c3c4)
/*    38bd8:	ac2fc3c4 */ 	sw	$t7,%lo(var8009c3c4)($at)
.L00038bdc:
/*    38bdc:	3c18800a */ 	lui	$t8,%hi(var8009c3c4)
/*    38be0:	8f18c3c4 */ 	lw	$t8,%lo(var8009c3c4)($t8)
/*    38be4:	8fb90028 */ 	lw	$t9,0x28($sp)
/*    38be8:	3c09800a */ 	lui	$t1,%hi(var8009c3c0)
/*    38bec:	8d29c3c0 */ 	lw	$t1,%lo(var8009c3c0)($t1)
/*    38bf0:	03194021 */ 	addu	$t0,$t8,$t9
/*    38bf4:	0128082a */ 	slt	$at,$t1,$t0
/*    38bf8:	10200007 */ 	beqz	$at,.L00038c18
/*    38bfc:	00000000 */ 	nop
/*    38c00:	3c0a800a */ 	lui	$t2,%hi(var8009c3c0)
/*    38c04:	3c0b800a */ 	lui	$t3,%hi(var8009c3c4)
/*    38c08:	8d6bc3c4 */ 	lw	$t3,%lo(var8009c3c4)($t3)
/*    38c0c:	8d4ac3c0 */ 	lw	$t2,%lo(var8009c3c0)($t2)
/*    38c10:	014b6023 */ 	subu	$t4,$t2,$t3
/*    38c14:	afac0028 */ 	sw	$t4,0x28($sp)
.L00038c18:
/*    38c18:	3c0d8006 */ 	lui	$t5,%hi(var8005f114)
/*    38c1c:	8dadf114 */ 	lw	$t5,%lo(var8005f114)($t5)
/*    38c20:	27a4001c */ 	addiu	$a0,$sp,0x1c
/*    38c24:	8db90024 */ 	lw	$t9,0x24($t5)
/*    38c28:	0320f809 */ 	jalr	$t9
/*    38c2c:	00000000 */ 	nop
/*    38c30:	afa20018 */ 	sw	$v0,0x18($sp)
/*    38c34:	8fb90018 */ 	lw	$t9,0x18($sp)
/*    38c38:	3c0e800a */ 	lui	$t6,%hi(var8009c390)
/*    38c3c:	3c0f800a */ 	lui	$t7,%hi(var8009c3c4)
/*    38c40:	8defc3c4 */ 	lw	$t7,%lo(var8009c3c4)($t7)
/*    38c44:	8dcec390 */ 	lw	$t6,%lo(var8009c390)($t6)
/*    38c48:	8fa50028 */ 	lw	$a1,0x28($sp)
/*    38c4c:	00003025 */ 	or	$a2,$zero,$zero
/*    38c50:	0320f809 */ 	jalr	$t9
/*    38c54:	01cf2021 */ 	addu	$a0,$t6,$t7
/*    38c58:	3c018000 */ 	lui	$at,0x8000
/*    38c5c:	0041c021 */ 	addu	$t8,$v0,$at
/*    38c60:	afb8001c */ 	sw	$t8,0x1c($sp)
/*    38c64:	8fa4001c */ 	lw	$a0,0x1c($sp)
/*    38c68:	8fa50024 */ 	lw	$a1,0x24($sp)
/*    38c6c:	0c012c5c */ 	jal	func0004b170
/*    38c70:	8fa60028 */ 	lw	$a2,0x28($sp)
/*    38c74:	3c08800a */ 	lui	$t0,%hi(var8009c3c4)
/*    38c78:	8d08c3c4 */ 	lw	$t0,%lo(var8009c3c4)($t0)
/*    38c7c:	8fa90028 */ 	lw	$t1,0x28($sp)
/*    38c80:	3c01800a */ 	lui	$at,%hi(var8009c3c4)
/*    38c84:	01095021 */ 	addu	$t2,$t0,$t1
/*    38c88:	ac2ac3c4 */ 	sw	$t2,%lo(var8009c3c4)($at)
/*    38c8c:	10000003 */ 	b	.L00038c9c
/*    38c90:	8fa20028 */ 	lw	$v0,0x28($sp)
/*    38c94:	10000001 */ 	b	.L00038c9c
/*    38c98:	00000000 */ 	nop
.L00038c9c:
/*    38c9c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*    38ca0:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*    38ca4:	03e00008 */ 	jr	$ra
/*    38ca8:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00038cac
/*    38cac:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*    38cb0:	afbf0014 */ 	sw	$ra,0x14($sp)
/*    38cb4:	3c0e8006 */ 	lui	$t6,%hi(var8005f114)
/*    38cb8:	8dcef114 */ 	lw	$t6,%lo(var8005f114)($t6)
/*    38cbc:	27a4001c */ 	addiu	$a0,$sp,0x1c
/*    38cc0:	8dd90024 */ 	lw	$t9,0x24($t6)
/*    38cc4:	0320f809 */ 	jalr	$t9
/*    38cc8:	00000000 */ 	nop
/*    38ccc:	afa20018 */ 	sw	$v0,0x18($sp)
/*    38cd0:	8fb90018 */ 	lw	$t9,0x18($sp)
/*    38cd4:	3c0f800a */ 	lui	$t7,%hi(var8009c390)
/*    38cd8:	3c18800a */ 	lui	$t8,%hi(var8009c3c4)
/*    38cdc:	8f18c3c4 */ 	lw	$t8,%lo(var8009c3c4)($t8)
/*    38ce0:	8defc390 */ 	lw	$t7,%lo(var8009c390)($t7)
/*    38ce4:	24050400 */ 	addiu	$a1,$zero,0x400
/*    38ce8:	00003025 */ 	or	$a2,$zero,$zero
/*    38cec:	0320f809 */ 	jalr	$t9
/*    38cf0:	01f82021 */ 	addu	$a0,$t7,$t8
/*    38cf4:	10000001 */ 	b	.L00038cfc
/*    38cf8:	00000000 */ 	nop
.L00038cfc:
/*    38cfc:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*    38d00:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*    38d04:	03e00008 */ 	jr	$ra
/*    38d08:	00000000 */ 	nop
/*    38d0c:	00000000 */ 	nop
);

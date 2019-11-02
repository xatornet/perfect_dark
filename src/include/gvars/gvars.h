#include <ultra64.h>
#include "types.h"

struct g_vars {
	// Known remaining member names based on debug strings:
	//g_Vars.PaksNeedsReInit
	//g_Vars.FourMeg2Player
	//g_Vars.playersperm[0]
	//g_Vars.playersperm[1]
	//g_Vars.PropState.propznum
	//g_Vars.PropState
	//g_Vars.antiradaron
	//g_Vars.antibodynum
	//g_Vars.antiheadnum
	//g_Vars.coopfriendlyfire
	//g_Vars.coopradaron

	/*000000*/ u32 unk000000;
	/*000004*/ u32 unk000004;
	/*000008*/ u32 unk000008;
	/*00000c*/ u32 unk00000c;
	/*000010*/ u32 unk000010;
	/*000014*/ u32 unk000014;
	/*000018*/ u32 unk000018;
	/*00001c*/ u32 unk00001c;
	/*000020*/ u32 unk000020;
	/*000024*/ u32 unk000024;
	/*000028*/ u32 unk000028;
	/*00002c*/ u32 unk00002c;
	/*000030*/ u32 unk000030;
	/*000034*/ u32 unk000034;
	/*000038*/ u32 unk000038;
	/*00003c*/ u32 unk00003c;
	/*000040*/ u32 unk000040;
	/*000044*/ u32 unk000044;
	/*000048*/ u32 unk000048;
	/*00004c*/ u32 unk00004c;
	/*000050*/ u32 unk000050;
	/*000054*/ u32 unk000054;
	/*000058*/ u32 unk000058;
	/*00005c*/ u32 unk00005c;
	/*000060*/ u32 unk000060;
	/*000064*/ struct player *players[2];
	/*00006c*/ u32 unk00006c;
	/*000070*/ u32 unk000070;
	/*000074*/ u32 unk000074;
	/*000078*/ u32 unk000078;
	/*00007c*/ u32 unk00007c;
	/*000080*/ u32 unk000080;
	/*000084*/ u32 unk000084;
	/*000088*/ u32 unk000088;
	/*00008c*/ u32 unk00008c;
	/*000090*/ u32 unk000090;
	/*000094*/ u32 unk000094;
	/*000098*/ u32 unk000098;
	/*00009c*/ u32 unk00009c;
	/*0000a0*/ u32 unk0000a0;
	/*0000a4*/ u32 unk0000a4;
	/*0000a8*/ u32 unk0000a8;
	/*0000ac*/ u32 unk0000ac;
	/*0000b0*/ u32 unk0000b0;
	/*0000b4*/ u32 unk0000b4;
	/*0000b8*/ u32 unk0000b8;
	/*0000bc*/ u32 unk0000bc;
	/*0000c0*/ u32 unk0000c0;
	/*0000c4*/ u32 unk0000c4;
	/*0000c8*/ u32 unk0000c8;
	/*0000cc*/ u32 unk0000cc;
	/*0000d0*/ u32 unk0000d0;
	/*0000d4*/ u32 unk0000d4;
	/*0000d8*/ u32 unk0000d8;
	/*0000dc*/ u32 unk0000dc;
	/*0000e0*/ u32 unk0000e0;
	/*0000e4*/ u32 unk0000e4;
	/*0000e8*/ u32 unk0000e8;
	/*0000ec*/ u32 unk0000ec;
	/*0000f0*/ u32 unk0000f0;
	/*0000f4*/ u32 unk0000f4;
	/*0000f8*/ u32 unk0000f8;
	/*0000fc*/ u32 unk0000fc;
	/*000100*/ u32 unk000100;
	/*000104*/ u32 unk000104;
	/*000108*/ u32 unk000108;
	/*00010c*/ u32 unk00010c;
	/*000110*/ u32 unk000110;
	/*000114*/ u32 unk000114;
	/*000118*/ u32 unk000118;
	/*00011c*/ u32 unk00011c;
	/*000120*/ u32 unk000120;
	/*000124*/ u32 unk000124;
	/*000128*/ u32 unk000128;
	/*00012c*/ u32 unk00012c;
	/*000130*/ u32 unk000130;
	/*000134*/ u32 unk000134;
	/*000138*/ u32 unk000138;
	/*00013c*/ u32 unk00013c;
	/*000140*/ u32 unk000140;
	/*000144*/ u32 unk000144;
	/*000148*/ u32 unk000148;
	/*00014c*/ u32 unk00014c;
	/*000150*/ u32 unk000150;
	/*000154*/ u32 unk000154;
	/*000158*/ u32 unk000158;
	/*00015c*/ u32 unk00015c;
	/*000160*/ u32 unk000160;
	/*000164*/ u32 unk000164;
	/*000168*/ u32 unk000168;
	/*00016c*/ u32 unk00016c;
	/*000170*/ u32 unk000170;
	/*000174*/ u32 unk000174;
	/*000178*/ u32 unk000178;
	/*00017c*/ u32 unk00017c;
	/*000180*/ u32 unk000180;
	/*000184*/ u32 unk000184;
	/*000188*/ u32 unk000188;
	/*00018c*/ u32 unk00018c;
	/*000190*/ u32 unk000190;
	/*000194*/ u32 unk000194;
	/*000198*/ u32 unk000198;
	/*00019c*/ u32 unk00019c;
	/*0001a0*/ u32 unk0001a0;
	/*0001a4*/ u32 unk0001a4;
	/*0001a8*/ u32 unk0001a8;
	/*0001ac*/ u32 unk0001ac;
	/*0001b0*/ u32 unk0001b0;
	/*0001b4*/ u32 unk0001b4;
	/*0001b8*/ u32 unk0001b8;
	/*0001bc*/ u32 unk0001bc;
	/*0001c0*/ u32 unk0001c0;
	/*0001c4*/ u32 unk0001c4;
	/*0001c8*/ u32 unk0001c8;
	/*0001cc*/ u32 unk0001cc;
	/*0001d0*/ u32 unk0001d0;
	/*0001d4*/ u32 unk0001d4;
	/*0001d8*/ u32 unk0001d8;
	/*0001dc*/ u32 unk0001dc;
	/*0001e0*/ u32 unk0001e0;
	/*0001e4*/ u32 unk0001e4;
	/*0001e8*/ u32 unk0001e8;
	/*0001ec*/ u32 unk0001ec;
	/*0001f0*/ u32 unk0001f0;
	/*0001f4*/ u32 unk0001f4;
	/*0001f8*/ u32 unk0001f8;
	/*0001fc*/ u32 unk0001fc;
	/*000200*/ u32 unk000200;
	/*000204*/ u32 unk000204;
	/*000208*/ u32 unk000208;
	/*00020c*/ u32 unk00020c;
	/*000210*/ u32 unk000210;
	/*000214*/ u32 unk000214;
	/*000218*/ u32 unk000218;
	/*00021c*/ u32 unk00021c;
	/*000220*/ u32 unk000220;
	/*000224*/ u32 unk000224;
	/*000228*/ u32 unk000228;
	/*00022c*/ u32 unk00022c;
	/*000230*/ u32 unk000230;
	/*000234*/ u32 unk000234;
	/*000238*/ u32 unk000238;
	/*00023c*/ u32 unk00023c;
	/*000240*/ u32 unk000240;
	/*000244*/ u32 unk000244;
	/*000248*/ u32 unk000248;
	/*00024c*/ u32 unk00024c;
	/*000250*/ u32 unk000250;
	/*000254*/ u32 unk000254;
	/*000258*/ u32 unk000258;
	/*00025c*/ u32 unk00025c;
	/*000260*/ u32 unk000260;
	/*000264*/ u32 unk000264;
	/*000268*/ u32 unk000268;
	/*00026c*/ u32 unk00026c;
	/*000270*/ u32 unk000270;
	/*000274*/ u32 unk000274;
	/*000278*/ u32 unk000278;
	/*00027c*/ u32 unk00027c;
	/*000280*/ u32 unk000280;
	/*000284*/ struct gvars284 *unk000284;
	/*000288*/ u32 unk000288;
	/*00028c*/ u32 currentplayernum;
	/*000290*/ u32 unk000290;
	/*000294*/ s32 bondplayernum; // suspected 0-3 to indicate bond controller number
	/*000298*/ s32 coopplayernum;
	/*00029c*/ s32 antiplayernum;
	/*0002a0*/ struct player *bond;
	/*0002a4*/ struct player *coop; // Co-op buddy when controlled by human
	/*0002a8*/ struct player *anti; // Counter-op
	/*0002ac*/ u32 unk0002ac;
	/*0002b0*/ s32 killcount;
	/*0002b4*/ u32 unk0002b4;
	/*0002b8*/ u32 unk0002b8;
	/*0002bc*/ u32 unk0002bc;
	/*0002c0*/ u32 unk0002c0;
	/*0002c4*/ u32 unk0002c4;
	/*0002c8*/ u32 unk0002c8;
	/*0002cc*/ u32 unk0002cc;
	/*0002d0*/ u32 unk0002d0;
	/*0002d4*/ u32 unk0002d4;
	/*0002d8*/ u32 unk0002d8;
	/*0002dc*/ u32 unk0002dc;
	/*0002e0*/ u32 unk0002e0;
	/*0002e4*/ u32 unk0002e4;
	/*0002e8*/ u32 unk0002e8;
	/*0002ec*/ u32 unk0002ec;
	/*0002f0*/ u32 unk0002f0;
	/*0002f4*/ u32 unk0002f4;
	/*0002f8*/ u32 unk0002f8;
	/*0002fc*/ u32 unk0002fc;
	/*000300*/ u32 unk000300;
	/*000304*/ u32 unk000304;
	/*000308*/ u32 unk000308;
	/*00030c*/ u32 unk00030c;
	/*000310*/ u32 unk000310;
	/*000314*/ u32 unk000314;
	/*000318*/ u32 unk000318;
	/*00031c*/ u32 unk00031c;
	/*000320*/ u32 unk000320;
	/*000324*/ u32 unk000324;
	/*000328*/ u32 unk000328;
	/*00032c*/ u32 unk00032c;
	/*000330*/ u32 unk000330;
	/*000334*/ u32 unk000334;
	/*000338*/ struct targetsomething targets[2]; // array length unknown
	///*000338*/ struct targetsomething *targets[24]; // array length unknown
	///*000380*/ u32 unk000380;
	///*000384*/ u32 unk000384;
	///*000388*/ u32 unk000388;
	///*00038c*/ u32 unk00038c;
	///*000390*/ u32 unk000390;
	///*000394*/ u32 unk000394;
	///*000398*/ u32 unk000398;
	///*00039c*/ u32 unk00039c;
	///*0003a0*/ u32 unk0003a0;
	///*0003a4*/ u32 unk0003a4;
	///*0003a8*/ u32 unk0003a8;
	///*0003ac*/ u32 unk0003ac;
	///*0003b0*/ u32 unk0003b0;
	///*0003b4*/ u32 unk0003b4;
	///*0003b8*/ u32 unk0003b8;
	///*0003bc*/ u32 unk0003bc;
	///*0003c0*/ u32 unk0003c0;
	///*0003c4*/ u32 unk0003c4;
	/*0003c8*/ u32 unk0003c8;
	/*0003cc*/ u32 unk0003cc;
	/*0003d0*/ u32 unk0003d0;
	/*0003d4*/ u32 unk0003d4;
	/*0003d8*/ u32 unk0003d8;
	/*0003dc*/ u32 unk0003dc;
	/*0003e0*/ u32 unk0003e0;
	/*0003e4*/ u32 unk0003e4;
	/*0003e8*/ u32 unk0003e8;
	/*0003ec*/ u32 unk0003ec;
	/*0003f0*/ u32 unk0003f0;
	/*0003f4*/ u32 unk0003f4;
	/*0003f8*/ u32 unk0003f8;
	/*0003fc*/ u32 unk0003fc;
	/*000400*/ u32 unk000400;
	/*000404*/ u32 unk000404;
	/*000408*/ u32 unk000408;
	/*00040c*/ u32 unk00040c;
	/*000410*/ u32 unk000410;
	/*000414*/ u32 unk000414;
	/*000418*/ u32 unk000418;
	/*00041c*/ u32 unk00041c;
	/*000420*/ u32 unk000420;
	/*000424*/ struct chrdata *chrdata;
	/*000428*/ struct standardobj *objdata;
	/*00042c*/ struct otheraidata *aicdata;
	/*000430*/ struct otheraidata *aiddata;
	/*000434*/ u8 *ailist;
	/*000438*/ u32 aioffset;
	/*00043c*/ u32 unk00043c;
	/*000440*/ u32 unk000440;
	/*000444*/ u32 unk000444;
	/*000448*/ u32 unk000448;
	/*00044c*/ u32 unk00044c;
	/*000450*/ u32 unk000450;
	/*000454*/ u32 unk000454;
	/*000458*/ u32 unk000458;
	/*00045c*/ u32 unk00045c;
	/*000460*/ u32 unk000460;
	/*000464*/ u32 unk000464;
	/*000468*/ u32 unk000468;
	/*00046c*/ u32 unk00046c;
	/*000470*/ u32 unk000470;
	/*000474*/ u32 unk000474;
	/*000478*/ u32 unk000478;
	/*00047c*/ u32 unk00047c;
	/*000480*/ u32 unk000480;
	/*000484*/ u32 unk000484;
	/*000488*/ u32 unk000488;
	/*00048c*/ u32 unk00048c;
	/*000490*/ u32 unk000490;
	/*000494*/ u32 unk000494;
	/*000498*/ u32 unk000498;
	/*00049c*/ u32 unk00049c;
	/*0004a0*/ u32 unk0004a0;
	/*0004a4*/ u32 unk0004a4;
	/*0004a8*/ u32 unk0004a8;
	/*0004ac*/ u32 unk0004ac;
	/*0004b0*/ u32 unk0004b0;
	/*0004b4*/ u32 unk0004b4;
	/*0004b8*/ u32 unk0004b8;
	/*0004bc*/ u32 unk0004bc;
	/*0004c0*/ u32 unk0004c0;
	/*0004c4*/ u32 unk0004c4;
	/*0004c8*/ u32 unk0004c8;
	/*0004cc*/ u32 in_cutscene;
	/*0004d0*/ u32 unk0004d0;
	/*0004d4*/ u32 unk0004d4;
	/*0004d8*/ u32 unk0004d8;
	/*0004dc*/ u32 unk0004dc;
	/*0004e0*/ u8 unk0004e0;
	/*0004e1*/ u8 unk0004e1;
	/*0004e2*/ u8 unk0004e2;
	/*0004e3*/ u8 langFilterActive;
	/*0004e4*/ u32 unk0004e4;
	/*0004e8*/ u32 unk0004e8;
	/*0004ec*/ u32 unk0004ec;
	/*0004f0*/ u32 unk0004f0;
	/*0004f4*/ u32 unk0004f4;
	/*0004f8*/ u32 unk0004f8;
	/*0004fc*/ u32 unk0004fc;
	/*0004e0*/ u32 unk000500;
	/*000504*/ u32 unk000504;
	/*000508*/ u32 unk000508;
	/*00050c*/ u32 unk00050c;
	/*000510*/ u32 unk000510;
	/*000514*/ u32 unk000514;
	/*000518*/ u32 unk000518;
	/*00051c*/ u32 unk00051c;
	/*000520*/ u32 unk000520;
	/*000524*/ u32 unk000524;
	/*000528*/ u32 unk000528;
	/*00052c*/ u32 unk00052c;
	/*000530*/ u32 unk000530;
	/*000534*/ u32 unk000534;
	/*000538*/ u32 unk000538;
	/*00053c*/ u32 unk00053c;
	/*000540*/ u32 unk000540;
	/*000544*/ u32 unk000544;
	/*000548*/ u32 unk000548;
	/*00054c*/ u32 unk00054c;
	/*000550*/ u32 unk000550;
	/*000554*/ u32 unk000554;
	/*000558*/ u32 unk000558;
	/*00055c*/ u32 unk00055c;
	/*000560*/ u32 unk000560;
	/*000564*/ u32 unk000564;
	/*000568*/ u32 unk000568;
	/*00056c*/ u32 unk00056c;
	/*000570*/ u32 unk000570;
	/*000574*/ u32 unk000574;
	/*000578*/ u32 unk000578;
	/*00057c*/ u32 unk00057c;
	/*000580*/ u32 unk000580;
	/*000584*/ u32 unk000584;
	/*000588*/ u32 unk000588;
	/*00058c*/ u32 unk00058c;
	/*000590*/ u32 unk000590;
	/*000594*/ u32 unk000594;
	/*000598*/ u32 unk000598;
	/*00059c*/ u32 unk00059c;
	/*0005a0*/ u32 unk0005a0;
	/*0005a4*/ u32 unk0005a4;
	/*0005a8*/ u32 unk0005a8;
	/*0005ac*/ u32 unk0005ac;
	/*0005b0*/ u32 unk0005b0;
	/*0005b4*/ u32 unk0005b4;
	/*0005b8*/ u32 unk0005b8;
	/*0005bc*/ u32 unk0005bc;
	/*0005c0*/ u32 unk0005c0;
	/*0005c4*/ u32 unk0005c4;
	/*0005c8*/ u32 unk0005c8;
	/*0005cc*/ u32 unk0005cc;
	/*0005d0*/ u32 unk0005d0;
	/*0005d4*/ u32 unk0005d4;
	/*0005d8*/ u32 unk0005d8;
	/*0005dc*/ u32 unk0005dc;
	/*0005e0*/ u32 unk0005e0;
	/*0005e4*/ u32 unk0005e4;
	/*0005e8*/ u32 unk0005e8;
	/*0005ec*/ u32 unk0005ec;
	/*0005f0*/ u32 unk0005f0;
	/*0005f4*/ u32 unk0005f4;
	/*0005f8*/ u32 unk0005f8;
	/*0005fc*/ u32 unk0005fc;
	/*000600*/ u32 unk000600;
	/*000604*/ u32 unk000604;
	/*000608*/ u32 unk000608;
	/*00060c*/ u32 unk00060c;
	/*000610*/ u32 unk000610;
	/*000614*/ u32 unk000614;
	/*000618*/ u32 unk000618;
	/*00061c*/ u32 unk00061c;
	/*000620*/ u32 unk000620;
	/*000624*/ u32 unk000624;
	/*000628*/ u32 unk000628;
	/*00062c*/ u32 unk00062c;
	/*000630*/ u32 unk000630;
	/*000634*/ u32 unk000634;
	/*000638*/ u32 unk000638;
	/*00063c*/ u32 unk00063c;
	/*000640*/ u32 unk000640;
	/*000644*/ u32 unk000644;
	/*000648*/ u32 unk000648;
	/*00064c*/ u32 unk00064c;
	/*000650*/ u32 unk000650;
	/*000654*/ u32 unk000654;
	/*000658*/ u32 unk000658;
	/*00065c*/ u32 unk00065c;
	/*000660*/ u32 unk000660;
	/*000664*/ u32 unk000664;
	/*000668*/ u32 unk000668;
	/*00066c*/ u32 unk00066c;
	/*000670*/ u32 unk000670;
	/*000674*/ u32 unk000674;
	/*000678*/ u32 unk000678;
	/*00067c*/ u32 unk00067c;
	/*000680*/ u32 unk000680;
	/*000684*/ u32 unk000684;
	/*000688*/ u32 unk000688;
	/*00068c*/ u32 unk00068c;
	/*000690*/ u32 unk000690;
	/*000694*/ u32 unk000694;
	/*000698*/ u32 unk000698;
	/*00069c*/ u32 unk00069c;
	/*0006a0*/ u32 unk0006a0;
	/*0006a4*/ u32 unk0006a4;
	/*0006a8*/ u32 unk0006a8;
	/*0006ac*/ u32 unk0006ac;
	/*0006b0*/ u32 unk0006b0;
	/*0006b4*/ u32 unk0006b4;
	/*0006b8*/ u32 unk0006b8;
	/*0006bc*/ u32 unk0006bc;
	/*0006c0*/ u32 unk0006c0;
	/*0006c4*/ u32 unk0006c4;
	/*0006c8*/ u32 unk0006c8;
	/*0006cc*/ u32 unk0006cc;
	/*0006d0*/ u32 unk0006d0;
	/*0006d4*/ u32 unk0006d4;
	/*0006d8*/ u32 unk0006d8;
	/*0006dc*/ u32 unk0006dc;
	/*0006e0*/ u32 unk0006e0;
	/*0006e4*/ u32 unk0006e4;
	/*0006e8*/ u32 unk0006e8;
	/*0006ec*/ u32 unk0006ec;
	/*0006f0*/ u32 unk0006f0;
	/*0006f4*/ u32 unk0006f4;
	/*0006f8*/ u32 unk0006f8;
	/*0006fc*/ u32 unk0006fc;
	/*000700*/ u32 unk000700;
	/*000704*/ u32 unk000704;
};

extern u32 var8008ae20;
extern struct g_vars g_Vars;

extern s32 g_NumTags;
extern struct tag **g_TagPtrs;

extern u32 var8008de24;
extern u32 var8008de38;
extern struct bootbufferthing var8008de48[3];
extern s32 var8008fa6c;
extern s32 var8008fa70;
extern s32 var8008fa74;
extern u32 var8009cac0;
extern u32 var8009cac4;
extern u32 var8009de24;

extern u32 g_EepromFlags;

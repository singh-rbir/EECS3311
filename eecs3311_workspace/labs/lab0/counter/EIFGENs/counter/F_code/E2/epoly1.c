#include "epoly1.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R28[880])();
void R28_init () {
	{long i; for (i = 0; i < 20; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 22; i < 24; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 25; i < 33; i++) R28[i] = (char *(*)()) F1_25;}
	R28[35] = (char *(*)()) F1_25;
	{long i; for (i = 38; i < 42; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 43; i < 48; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 48; i < 50; i++) R28[i] = (char *(*)()) F49_1399;}
	R28[52] = (char *(*)()) F49_1399;
	{long i; for (i = 54; i < 57; i++) R28[i] = (char *(*)()) F49_1399;}
	{long i; for (i = 58; i < 61; i++) R28[i] = (char *(*)()) F49_1399;}
	{long i; for (i = 62; i < 64; i++) R28[i] = (char *(*)()) F49_1399;}
	{long i; for (i = 66; i < 68; i++) R28[i] = (char *(*)()) F49_1399;}
	{long i; for (i = 69; i < 72; i++) R28[i] = (char *(*)()) F49_1399;}
	{long i; for (i = 73; i < 77; i++) R28[i] = (char *(*)()) F49_1399;}
	{long i; for (i = 78; i < 80; i++) R28[i] = (char *(*)()) F49_1399;}
	{long i; for (i = 81; i < 87; i++) R28[i] = (char *(*)()) F49_1399;}
	{long i; for (i = 88; i < 90; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 92; i < 110; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 112; i < 115; i++) R28[i] = (char *(*)()) F1_25;}
	R28[116] = (char *(*)()) F1_25;
	{long i; for (i = 119; i < 164; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 165; i < 191; i++) R28[i] = (char *(*)()) F1_25;}
	R28[206] = (char *(*)()) F1_25;
	{long i; for (i = 212; i < 214; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 465; i < 480; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 495; i < 511; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 571; i < 583; i++) R28[i] = (char *(*)()) F1_25;}
	R28[583] = (char *(*)()) F584_4063;
	{long i; for (i = 584; i < 599; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 614; i < 617; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 652; i < 675; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 690; i < 737; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 738; i < 740; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 742; i < 744; i++) R28[i] = (char *(*)()) F1_25;}
	R28[745] = (char *(*)()) F746_5264;
	R28[746] = (char *(*)()) F747_5305;
	R28[747] = (char *(*)()) F748_5305;
	R28[748] = (char *(*)()) F749_5305;
	R28[749] = (char *(*)()) F750_5305;
	R28[750] = (char *(*)()) F751_5305;
	R28[752] = (char *(*)()) F753_5305;
	R28[753] = (char *(*)()) F754_5305;
	R28[754] = (char *(*)()) F755_5305;
	R28[755] = (char *(*)()) F756_5305;
	R28[756] = (char *(*)()) F757_5305;
	R28[757] = (char *(*)()) F758_5305;
	R28[758] = (char *(*)()) F759_5305;
	R28[759] = (char *(*)()) F760_5305;
	R28[760] = (char *(*)()) F761_5305;
	R28[761] = (char *(*)()) F762_5305;
	R28[762] = (char *(*)()) F763_5305;
	R28[763] = (char *(*)()) F764_5305;
	R28[764] = (char *(*)()) F765_5305;
	R28[765] = (char *(*)()) F766_5305;
	R28[766] = (char *(*)()) F767_5305;
	R28[767] = (char *(*)()) F768_5305;
	R28[768] = (char *(*)()) F769_5305;
	R28[769] = (char *(*)()) F770_5305;
	R28[770] = (char *(*)()) F771_5305;
	R28[771] = (char *(*)()) F772_5305;
	R28[772] = (char *(*)()) F773_5305;
	R28[773] = (char *(*)()) F774_5305;
	R28[774] = (char *(*)()) F775_5305;
	R28[775] = (char *(*)()) F776_5305;
	R28[776] = (char *(*)()) F777_5305;
	R28[777] = (char *(*)()) F778_5305;
	R28[778] = (char *(*)()) F779_5305;
	R28[779] = (char *(*)()) F780_5305;
	R28[780] = (char *(*)()) F781_5305;
	R28[781] = (char *(*)()) F782_5305;
	R28[782] = (char *(*)()) F783_5305;
	R28[783] = (char *(*)()) F784_5305;
	R28[784] = (char *(*)()) F785_5305;
	R28[785] = (char *(*)()) F786_5305;
	R28[786] = (char *(*)()) F787_5305;
	R28[787] = (char *(*)()) F788_5305;
	R28[788] = (char *(*)()) F789_5305;
	R28[789] = (char *(*)()) F790_5305;
	R28[790] = (char *(*)()) F791_5305;
	R28[791] = (char *(*)()) F792_5305;
	R28[792] = (char *(*)()) F1_25;
	{long i; for (i = 793; i < 796; i++) R28[i] = (char *(*)()) F794_5510;}
	{long i; for (i = 796; i < 799; i++) R28[i] = (char *(*)()) F797_5555;}
	{long i; for (i = 799; i < 802; i++) R28[i] = (char *(*)()) F800_5594;}
	{long i; for (i = 802; i < 805; i++) R28[i] = (char *(*)()) F803_5690;}
	{long i; for (i = 805; i < 808; i++) R28[i] = (char *(*)()) F806_5733;}
	R28[808] = (char *(*)()) F809_5781;
	R28[809] = (char *(*)()) F810_5806;
	R28[810] = (char *(*)()) F811_5806;
	{long i; for (i = 811; i < 814; i++) R28[i] = (char *(*)()) F812_5870;}
	R28[814] = (char *(*)()) F815_5938;
	R28[815] = (char *(*)()) F816_5963;
	R28[816] = (char *(*)()) F817_5963;
	{long i; for (i = 817; i < 820; i++) R28[i] = (char *(*)()) F818_6029;}
	{long i; for (i = 820; i < 823; i++) R28[i] = (char *(*)()) F821_6121;}
	{long i; for (i = 823; i < 826; i++) R28[i] = (char *(*)()) F824_6212;}
	{long i; for (i = 826; i < 829; i++) R28[i] = (char *(*)()) F827_6305;}
	{long i; for (i = 829; i < 832; i++) R28[i] = (char *(*)()) F830_6397;}
	{long i; for (i = 832; i < 863; i++) R28[i] = (char *(*)()) F833_6443;}
	R28[863] = (char *(*)()) F864_6456;
	R28[864] = (char *(*)()) F865_6456;
	{long i; for (i = 866; i < 870; i++) R28[i] = (char *(*)()) F1_25;}
	R28[873] = (char *(*)()) F872_6648;
	R28[875] = (char *(*)()) F875_6889;
	R28[877] = (char *(*)()) F872_6648;
	R28[878] = (char *(*)()) F875_6889;
	R28[879] = (char *(*)()) F1_25;
}

char *(*R1287[39])();
void R1287_init () {
	R1287[0] = (char *(*)()) F49_1386;
	R1287[1] = (char *(*)()) F50_1410;
	R1287[4] = (char *(*)()) F53_1412;
	R1287[6] = (char *(*)()) F55_1416;
	R1287[7] = (char *(*)()) F56_1433;
	R1287[8] = (char *(*)()) F57_1437;
	R1287[10] = (char *(*)()) F59_1441;
	R1287[11] = (char *(*)()) F60_1443;
	R1287[12] = (char *(*)()) F61_1445;
	R1287[14] = (char *(*)()) F63_1447;
	R1287[15] = (char *(*)()) F64_1451;
	R1287[18] = (char *(*)()) F67_1453;
	R1287[19] = (char *(*)()) F68_1455;
	R1287[21] = (char *(*)()) F70_1459;
	R1287[22] = (char *(*)()) F71_1461;
	R1287[23] = (char *(*)()) F72_1463;
	R1287[25] = (char *(*)()) F74_1469;
	R1287[26] = (char *(*)()) F75_1471;
	R1287[27] = (char *(*)()) F76_1475;
	R1287[28] = (char *(*)()) F77_1479;
	R1287[30] = (char *(*)()) F79_1481;
	R1287[31] = (char *(*)()) F80_1483;
	R1287[33] = (char *(*)()) F82_1485;
	R1287[34] = (char *(*)()) F83_1487;
	R1287[35] = (char *(*)()) F84_1489;
	R1287[36] = (char *(*)()) F85_1491;
	R1287[37] = (char *(*)()) F86_1493;
	R1287[38] = (char *(*)()) F87_1495;
}

char *(*R1357[134])();
void R1357_init () {
	R1357[0] = (char *(*)()) F746_5259;
	R1357[48] = (char *(*)()) F794_5453;
	R1357[49] = (char *(*)()) F795_5512_1357_2;
	R1357[50] = (char *(*)()) F796_5512_1357_2;
	{long i; for (i = 51; i < 54; i++) R1357[i] = (char *(*)()) F797_5547;}
	{long i; for (i = 54; i < 57; i++) R1357[i] = (char *(*)()) F800_5586;}
	R1357[57] = (char *(*)()) F803_5634;
	R1357[58] = (char *(*)()) F804_5692_1357_2;
	R1357[59] = (char *(*)()) F805_5692_1357_2;
	R1357[63] = (char *(*)()) F809_5753;
	R1357[64] = (char *(*)()) F810_5783_1357_2;
	R1357[65] = (char *(*)()) F811_5783_1357_2;
	R1357[66] = (char *(*)()) F812_5815;
	R1357[67] = (char *(*)()) F813_5871_1357_2;
	R1357[68] = (char *(*)()) F814_5871_1357_2;
	R1357[69] = (char *(*)()) F815_5910;
	R1357[70] = (char *(*)()) F816_5940_1357_2;
	R1357[71] = (char *(*)()) F817_5940_1357_2;
	R1357[72] = (char *(*)()) F818_5972;
	R1357[73] = (char *(*)()) F819_6031_1357_2;
	R1357[74] = (char *(*)()) F820_6031_1357_2;
	R1357[75] = (char *(*)()) F821_6067;
	R1357[76] = (char *(*)()) F822_6122_1357_2;
	R1357[77] = (char *(*)()) F823_6122_1357_2;
	R1357[78] = (char *(*)()) F824_6157;
	R1357[79] = (char *(*)()) F825_6213_1357_2;
	R1357[80] = (char *(*)()) F826_6213_1357_2;
	R1357[81] = (char *(*)()) F827_6248;
	R1357[82] = (char *(*)()) F828_6307_1357_2;
	R1357[83] = (char *(*)()) F829_6307_1357_2;
	R1357[84] = (char *(*)()) F830_6343;
	R1357[85] = (char *(*)()) F831_6398_1357_2;
	R1357[86] = (char *(*)()) F832_6398_1357_2;
	R1357[128] = (char *(*)()) F872_6634;
	R1357[130] = (char *(*)()) F875_6875;
	R1357[132] = (char *(*)()) F872_6634;
	R1357[133] = (char *(*)()) F875_6875;
}
static EIF_BOOLEAN F795_5512_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F795_5512(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F796_5512_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F796_5512(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F804_5692_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F804_5692(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F805_5692_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F805_5692(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F810_5783_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F810_5783(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F811_5783_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F811_5783(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F813_5871_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F813_5871(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F814_5871_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F814_5871(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F816_5940_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F816_5940(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F817_5940_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F817_5940(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F819_6031_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F819_6031(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F820_6031_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F820_6031(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F822_6122_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F822_6122(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F823_6122_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F823_6122(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F825_6213_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F825_6213(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F826_6213_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F826_6213(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F828_6307_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F828_6307(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F829_6307_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F829_6307(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F831_6398_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F831_6398(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F832_6398_1357_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F832_6398(Current, *(EIF_NATURAL_64 *)arg1);
}

char *(*R1421[2])();
void R1421_init () {
	R1421[0] = (char *(*)()) F93_1593;
	R1421[1] = (char *(*)()) F94_1604;
}

char *(*R1427[2])();
void R1427_init () {
	R1427[0] = (char *(*)()) F93_1599;
	R1427[1] = (char *(*)()) F94_1610;
}

char *(*R1430[2])();
void R1430_init () {
	R1430[0] = (char *(*)()) F93_1602;
	R1430[1] = (char *(*)()) F94_1613;
}

char *(*R1718[8])();
void R1718_init () {
	R1718[0] = (char *(*)()) F100_1933;
	R1718[1] = (char *(*)()) F101_1933_1718_1;
	R1718[2] = (char *(*)()) F102_1933_1718_1;
	R1718[3] = (char *(*)()) F103_1933_1718_1;
	R1718[4] = (char *(*)()) F104_1933_1718_1;
	R1718[5] = (char *(*)()) F100_1933;
	R1718[6] = (char *(*)()) F103_1933_1718_1;
	R1718[7] = (char *(*)()) F104_1933_1718_1;
}
static EIF_REFERENCE F101_1933_1718_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F101_1933(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(831, 0x00).id, 831, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F102_1933_1718_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F102_1933(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F103_1933_1718_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F103_1933(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(828, 0x00).id, 828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F104_1933_1718_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F104_1933(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(807, 0x00).id, 807, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R1719[8])();
void R1719_init () {
	R1719[0] = (char *(*)()) F100_1934;
	R1719[1] = (char *(*)()) F101_1934_1719_4;
	R1719[2] = (char *(*)()) F102_1934_1719_4;
	R1719[3] = (char *(*)()) F103_1934_1719_4;
	R1719[4] = (char *(*)()) F104_1934_1719_4;
	R1719[5] = (char *(*)()) F100_1934;
	R1719[6] = (char *(*)()) F103_1934_1719_4;
	R1719[7] = (char *(*)()) F104_1934_1719_4;
}
static void F101_1934_1719_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F101_1934(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F102_1934_1719_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F102_1934(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F103_1934_1719_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F103_1934(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F104_1934_1719_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F104_1934(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R1723[3])();
void R1723_init () {
	R1723[0] = (char *(*)()) F105_1937;
	R1723[1] = (char *(*)()) F106_1937;
	R1723[2] = (char *(*)()) F107_1937;
}

char *(*R2079[15])();
void R2079_init () {
	R2079[0] = (char *(*)()) F466_3215;
	R2079[1] = (char *(*)()) F467_3215;
	R2079[2] = (char *(*)()) F468_3215;
	R2079[3] = (char *(*)()) F469_3215;
	R2079[4] = (char *(*)()) F470_3215;
	R2079[5] = (char *(*)()) F471_3215;
	R2079[6] = (char *(*)()) F472_3215;
	R2079[7] = (char *(*)()) F473_3215;
	R2079[8] = (char *(*)()) F474_3215;
	R2079[9] = (char *(*)()) F475_3215;
	R2079[10] = (char *(*)()) F476_3215;
	R2079[11] = (char *(*)()) F477_3215;
	R2079[12] = (char *(*)()) F478_3215;
	R2079[13] = (char *(*)()) F479_3215;
	R2079[14] = (char *(*)()) F480_3215;
}

char *(*R2080[15])();
void R2080_init () {
	R2080[0] = (char *(*)()) F466_3216;
	R2080[1] = (char *(*)()) F467_3216;
	R2080[2] = (char *(*)()) F468_3216;
	R2080[3] = (char *(*)()) F469_3216;
	R2080[4] = (char *(*)()) F470_3216;
	R2080[5] = (char *(*)()) F471_3216;
	R2080[6] = (char *(*)()) F472_3216;
	R2080[7] = (char *(*)()) F473_3216;
	R2080[8] = (char *(*)()) F474_3216;
	R2080[9] = (char *(*)()) F475_3216;
	R2080[10] = (char *(*)()) F476_3216;
	R2080[11] = (char *(*)()) F477_3216;
	R2080[12] = (char *(*)()) F478_3216;
	R2080[13] = (char *(*)()) F479_3216;
	R2080[14] = (char *(*)()) F480_3216;
}

char *(*R2149[3])();
void R2149_init () {
	R2149[0] = (char *(*)()) F169_2398;
	R2149[1] = (char *(*)()) F170_2398;
	R2149[2] = (char *(*)()) F171_2398;
}

char *(*R2154[705])();
void R2154_init () {
	R2154[0] = (char *(*)()) F172_2405;
	R2154[1] = (char *(*)()) F173_2405;
	R2154[2] = (char *(*)()) F174_2405;
	R2154[3] = (char *(*)()) F175_2405;
	R2154[4] = (char *(*)()) F176_2405;
	R2154[5] = (char *(*)()) F177_2405;
	R2154[6] = (char *(*)()) F178_2405;
	R2154[7] = (char *(*)()) F179_2405;
	R2154[8] = (char *(*)()) F180_2405;
	R2154[9] = (char *(*)()) F181_2405;
	R2154[10] = (char *(*)()) F182_2405;
	R2154[11] = (char *(*)()) F183_2405;
	R2154[12] = (char *(*)()) F184_2405;
	R2154[13] = (char *(*)()) F185_2405;
	R2154[14] = (char *(*)()) F186_2405;
	{long i; for (i = 18; i < 20; i++) R2154[i] = (char *(*)()) F178_2405;}
	R2154[325] = (char *(*)()) F172_2405;
	R2154[326] = (char *(*)()) F173_2405;
	R2154[327] = (char *(*)()) F174_2405;
	R2154[328] = (char *(*)()) F175_2405;
	R2154[329] = (char *(*)()) F176_2405;
	R2154[330] = (char *(*)()) F177_2405;
	R2154[331] = (char *(*)()) F178_2405;
	R2154[332] = (char *(*)()) F179_2405;
	R2154[333] = (char *(*)()) F180_2405;
	R2154[334] = (char *(*)()) F181_2405;
	R2154[335] = (char *(*)()) F182_2405;
	R2154[336] = (char *(*)()) F183_2405;
	R2154[337] = (char *(*)()) F184_2405;
	R2154[338] = (char *(*)()) F185_2405;
	R2154[339] = (char *(*)()) F186_2405;
	R2154[413] = (char *(*)()) F172_2405;
	R2154[414] = (char *(*)()) F173_2405;
	R2154[415] = (char *(*)()) F174_2405;
	R2154[416] = (char *(*)()) F175_2405;
	R2154[417] = (char *(*)()) F176_2405;
	R2154[418] = (char *(*)()) F177_2405;
	R2154[419] = (char *(*)()) F178_2405;
	R2154[420] = (char *(*)()) F179_2405;
	R2154[421] = (char *(*)()) F180_2405;
	R2154[422] = (char *(*)()) F181_2405;
	R2154[423] = (char *(*)()) F182_2405;
	R2154[424] = (char *(*)()) F183_2405;
	R2154[425] = (char *(*)()) F184_2405;
	R2154[426] = (char *(*)()) F185_2405;
	R2154[427] = (char *(*)()) F186_2405;
	R2154[702] = (char *(*)()) F175_2405;
	R2154[704] = (char *(*)()) F185_2405;
}

char *(*R2155[705])();
void R2155_init () {
	R2155[0] = (char *(*)()) F172_2406;
	R2155[1] = (char *(*)()) F173_2406_2155_119;
	R2155[2] = (char *(*)()) F174_2406_2155_119;
	R2155[3] = (char *(*)()) F175_2406_2155_119;
	R2155[4] = (char *(*)()) F176_2406_2155_119;
	R2155[5] = (char *(*)()) F177_2406_2155_119;
	R2155[6] = (char *(*)()) F178_2406_2155_119;
	R2155[7] = (char *(*)()) F179_2406_2155_119;
	R2155[8] = (char *(*)()) F180_2406_2155_119;
	R2155[9] = (char *(*)()) F181_2406_2155_119;
	R2155[10] = (char *(*)()) F182_2406_2155_119;
	R2155[11] = (char *(*)()) F183_2406_2155_119;
	R2155[12] = (char *(*)()) F184_2406_2155_119;
	R2155[13] = (char *(*)()) F185_2406_2155_119;
	R2155[14] = (char *(*)()) F186_2406_2155_119;
	{long i; for (i = 18; i < 20; i++) R2155[i] = (char *(*)()) F178_2406_2155_119;}
	R2155[325] = (char *(*)()) F172_2406;
	R2155[326] = (char *(*)()) F173_2406_2155_119;
	R2155[327] = (char *(*)()) F174_2406_2155_119;
	R2155[328] = (char *(*)()) F175_2406_2155_119;
	R2155[329] = (char *(*)()) F176_2406_2155_119;
	R2155[330] = (char *(*)()) F177_2406_2155_119;
	R2155[331] = (char *(*)()) F178_2406_2155_119;
	R2155[332] = (char *(*)()) F179_2406_2155_119;
	R2155[333] = (char *(*)()) F180_2406_2155_119;
	R2155[334] = (char *(*)()) F181_2406_2155_119;
	R2155[335] = (char *(*)()) F182_2406_2155_119;
	R2155[336] = (char *(*)()) F183_2406_2155_119;
	R2155[337] = (char *(*)()) F184_2406_2155_119;
	R2155[338] = (char *(*)()) F185_2406_2155_119;
	R2155[339] = (char *(*)()) F186_2406_2155_119;
	R2155[413] = (char *(*)()) F172_2406;
	R2155[414] = (char *(*)()) F173_2406_2155_119;
	R2155[415] = (char *(*)()) F174_2406_2155_119;
	R2155[416] = (char *(*)()) F175_2406_2155_119;
	R2155[417] = (char *(*)()) F176_2406_2155_119;
	R2155[418] = (char *(*)()) F177_2406_2155_119;
	R2155[419] = (char *(*)()) F178_2406_2155_119;
	R2155[420] = (char *(*)()) F179_2406_2155_119;
	R2155[421] = (char *(*)()) F180_2406_2155_119;
	R2155[422] = (char *(*)()) F181_2406_2155_119;
	R2155[423] = (char *(*)()) F182_2406_2155_119;
	R2155[424] = (char *(*)()) F183_2406_2155_119;
	R2155[425] = (char *(*)()) F184_2406_2155_119;
	R2155[426] = (char *(*)()) F185_2406_2155_119;
	R2155[427] = (char *(*)()) F186_2406_2155_119;
	R2155[702] = (char *(*)()) F175_2406_2155_119;
	R2155[704] = (char *(*)()) F185_2406_2155_119;
}
static void F173_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F173_2406(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F174_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F174_2406(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F175_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F175_2406(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F176_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F176_2406(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F177_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F177_2406(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F178_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F178_2406(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F179_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F179_2406(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F180_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F180_2406(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F181_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F181_2406(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F182_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F182_2406(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F183_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F183_2406(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F184_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F184_2406(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F185_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F185_2406(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F186_2406_2155_119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F186_2406(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}

char *(*R2161[705])();
void R2161_init () {
	R2161[0] = (char *(*)()) F172_2412;
	R2161[1] = (char *(*)()) F173_2412;
	R2161[2] = (char *(*)()) F174_2412;
	R2161[3] = (char *(*)()) F175_2412;
	R2161[4] = (char *(*)()) F176_2412;
	R2161[5] = (char *(*)()) F177_2412;
	R2161[6] = (char *(*)()) F178_2412;
	R2161[7] = (char *(*)()) F179_2412;
	R2161[8] = (char *(*)()) F180_2412;
	R2161[9] = (char *(*)()) F181_2412;
	R2161[10] = (char *(*)()) F182_2412;
	R2161[11] = (char *(*)()) F183_2412;
	R2161[12] = (char *(*)()) F184_2412;
	R2161[13] = (char *(*)()) F185_2412;
	R2161[14] = (char *(*)()) F186_2412;
	{long i; for (i = 18; i < 20; i++) R2161[i] = (char *(*)()) F178_2412;}
	R2161[325] = (char *(*)()) F172_2412;
	R2161[326] = (char *(*)()) F173_2412;
	R2161[327] = (char *(*)()) F174_2412;
	R2161[328] = (char *(*)()) F175_2412;
	R2161[329] = (char *(*)()) F176_2412;
	R2161[330] = (char *(*)()) F177_2412;
	R2161[331] = (char *(*)()) F178_2412;
	R2161[332] = (char *(*)()) F179_2412;
	R2161[333] = (char *(*)()) F180_2412;
	R2161[334] = (char *(*)()) F181_2412;
	R2161[335] = (char *(*)()) F182_2412;
	R2161[336] = (char *(*)()) F183_2412;
	R2161[337] = (char *(*)()) F184_2412;
	R2161[338] = (char *(*)()) F185_2412;
	R2161[339] = (char *(*)()) F186_2412;
	R2161[413] = (char *(*)()) F172_2412;
	R2161[414] = (char *(*)()) F173_2412;
	R2161[415] = (char *(*)()) F174_2412;
	R2161[416] = (char *(*)()) F175_2412;
	R2161[417] = (char *(*)()) F176_2412;
	R2161[418] = (char *(*)()) F177_2412;
	R2161[419] = (char *(*)()) F178_2412;
	R2161[420] = (char *(*)()) F179_2412;
	R2161[421] = (char *(*)()) F180_2412;
	R2161[422] = (char *(*)()) F181_2412;
	R2161[423] = (char *(*)()) F182_2412;
	R2161[424] = (char *(*)()) F183_2412;
	R2161[425] = (char *(*)()) F184_2412;
	R2161[426] = (char *(*)()) F185_2412;
	R2161[427] = (char *(*)()) F186_2412;
	R2161[702] = (char *(*)()) F175_2412;
	R2161[704] = (char *(*)()) F185_2412;
}

static EIF_TYPE_INDEX Y2162_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype15[] = {813,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype16[] = {813,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype47[] = {801,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype48[] = {798,0xFFFF};
EIF_TYPE_INDEX *Y2162_gen_type [705];
EIF_TYPE_INDEX Y2162 [705];
void Y2162_init (void)
{
	egc_routines_types [2162] = Y2162;
	egc_routines_gen_types [2162] = Y2162_gen_type;
	egc_routines_offset [2162] = 171;
	Y2162_gen_type [0] = Y2162_pgtype0;
	Y2162_gen_type [1] = Y2162_pgtype1;
	Y2162_gen_type [2] = Y2162_pgtype2;
	Y2162_gen_type [3] = Y2162_pgtype3;
	Y2162_gen_type [4] = Y2162_pgtype4;
	Y2162_gen_type [5] = Y2162_pgtype5;
	Y2162_gen_type [6] = Y2162_pgtype6;
	Y2162_gen_type [7] = Y2162_pgtype7;
	Y2162_gen_type [8] = Y2162_pgtype8;
	Y2162_gen_type [9] = Y2162_pgtype9;
	Y2162_gen_type [10] = Y2162_pgtype10;
	Y2162_gen_type [11] = Y2162_pgtype11;
	Y2162_gen_type [12] = Y2162_pgtype12;
	Y2162_gen_type [13] = Y2162_pgtype13;
	Y2162_gen_type [14] = Y2162_pgtype14;
	Y2162_gen_type [18] = Y2162_pgtype15;
	Y2162_gen_type [19] = Y2162_pgtype16;
	Y2162_gen_type [325] = Y2162_pgtype17;
	Y2162_gen_type [326] = Y2162_pgtype18;
	Y2162_gen_type [327] = Y2162_pgtype19;
	Y2162_gen_type [328] = Y2162_pgtype20;
	Y2162_gen_type [329] = Y2162_pgtype21;
	Y2162_gen_type [330] = Y2162_pgtype22;
	Y2162_gen_type [331] = Y2162_pgtype23;
	Y2162_gen_type [332] = Y2162_pgtype24;
	Y2162_gen_type [333] = Y2162_pgtype25;
	Y2162_gen_type [334] = Y2162_pgtype26;
	Y2162_gen_type [335] = Y2162_pgtype27;
	Y2162_gen_type [336] = Y2162_pgtype28;
	Y2162_gen_type [337] = Y2162_pgtype29;
	Y2162_gen_type [338] = Y2162_pgtype30;
	Y2162_gen_type [339] = Y2162_pgtype31;
	Y2162_gen_type [413] = Y2162_pgtype32;
	Y2162_gen_type [414] = Y2162_pgtype33;
	Y2162_gen_type [415] = Y2162_pgtype34;
	Y2162_gen_type [416] = Y2162_pgtype35;
	Y2162_gen_type [417] = Y2162_pgtype36;
	Y2162_gen_type [418] = Y2162_pgtype37;
	Y2162_gen_type [419] = Y2162_pgtype38;
	Y2162_gen_type [420] = Y2162_pgtype39;
	Y2162_gen_type [421] = Y2162_pgtype40;
	Y2162_gen_type [422] = Y2162_pgtype41;
	Y2162_gen_type [423] = Y2162_pgtype42;
	Y2162_gen_type [424] = Y2162_pgtype43;
	Y2162_gen_type [425] = Y2162_pgtype44;
	Y2162_gen_type [426] = Y2162_pgtype45;
	Y2162_gen_type [427] = Y2162_pgtype46;
	Y2162_gen_type [702] = Y2162_pgtype47;
	Y2162_gen_type [704] = Y2162_pgtype48;
	{long i; for (i = 18; i < 20; i++) Y2162[i] = 813;};
	Y2162[702] = 801;
	Y2162[704] = 798;
}

char *(*R2280[8])();
void R2280_init () {
	R2280[0] = (char *(*)()) F577_3938;
	R2280[1] = (char *(*)()) F578_3938;
	R2280[2] = (char *(*)()) F579_3938;
	R2280[3] = (char *(*)()) F580_3938;
	R2280[4] = (char *(*)()) F581_3938;
	R2280[5] = (char *(*)()) F577_3938;
	R2280[6] = (char *(*)()) F580_3938;
	R2280[7] = (char *(*)()) F577_3938;
}

static EIF_TYPE_INDEX Y2281_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype15[] = {0xFF01,873,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype21[] = {0xFF01,878,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype22[] = {0xFF01,878,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype139[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype140[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype141[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype142[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype143[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype144[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype145[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype146[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype147[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype148[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype149[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype150[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype151[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype152[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype153[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype154[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype155[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype156[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype157[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype158[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype159[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype160[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype161[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype162[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype163[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype164[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype165[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype166[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype167[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype168[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype169[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype170[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype171[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype172[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype173[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype174[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype175[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype176[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype177[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype178[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype179[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype180[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype181[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype182[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype183[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype184[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype185[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype186[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype187[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype188[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype189[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype190[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype191[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype192[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype193[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype194[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype195[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype196[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype197[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype198[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype199[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype200[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype201[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype202[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype203[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype204[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype205[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype206[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype207[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype208[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype209[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype210[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype211[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype212[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype213[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype214[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype215[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype216[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype217[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype218[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype219[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype220[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype221[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype222[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype223[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype224[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype225[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype226[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype227[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype228[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype229[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype230[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype231[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype232[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype233[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype234[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype235[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype236[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype237[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype238[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype239[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype240[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype241[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype242[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype243[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype244[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype245[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype246[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype247[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype248[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype249[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype250[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype251[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype252[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype253[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype254[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype255[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype256[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype257[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype258[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype259[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype260[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype261[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype262[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype263[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype264[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype265[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype266[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype267[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype268[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype269[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype270[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype271[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype272[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype273[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype274[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype275[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype276[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype277[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype278[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype279[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype280[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype281[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype282[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype283[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype284[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype285[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype286[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype287[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype288[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype289[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype290[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype291[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype292[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype293[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype294[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype295[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype296[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype297[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype298[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype299[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype300[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype301[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype302[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype303[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype304[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype305[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype306[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype307[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype308[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype309[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype310[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype311[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype312[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype313[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype314[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype315[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype316[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype317[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype318[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype319[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype320[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype321[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype322[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype323[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype324[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype325[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype326[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype327[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype328[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype329[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype330[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype331[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype332[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype333[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype334[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype335[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype336[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype337[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype338[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype339[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype340[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype341[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype342[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype343[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype344[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype345[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype346[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype347[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype348[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype349[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype350[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype351[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype352[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype353[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype354[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype355[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype356[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype357[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype358[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype359[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype360[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype361[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype362[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype363[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype364[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype365[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype366[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype367[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype368[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype369[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype370[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype371[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype372[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype373[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype374[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype375[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype376[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype377[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype378[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype379[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype380[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype381[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype382[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype383[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype384[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype385[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype386[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype387[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype388[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype389[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype390[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype391[] = {0,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype392[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype393[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype394[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype395[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype396[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype397[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype398[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype399[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype400[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype401[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype402[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype403[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype404[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype405[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype406[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype407[] = {798,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype408[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype409[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype410[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype411[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype412[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype413[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype414[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype415[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype416[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype417[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype418[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype419[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype420[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype421[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype422[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype423[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype424[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype425[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype426[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype427[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype428[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype429[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype430[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype431[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype432[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype433[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype434[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype435[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype436[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype437[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype438[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype439[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype440[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype441[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype442[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype443[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype444[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype445[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype446[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype447[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype448[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype449[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype450[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype451[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype452[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype453[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype454[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype455[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype456[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype457[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype458[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype459[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype460[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype461[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype462[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype463[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype464[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype465[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype466[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype467[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype468[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype469[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype470[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype471[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype472[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype473[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype474[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype475[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype476[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype477[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype478[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype479[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype480[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype481[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype482[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype483[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype484[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype485[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype486[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype487[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype488[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype489[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype490[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype491[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype492[] = {798,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype493[] = {801,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype494[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype495[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype496[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype497[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype498[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype499[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype500[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype501[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype502[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype503[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype504[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype505[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype506[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype507[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype508[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype509[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype510[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype511[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype512[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype513[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype514[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype515[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype516[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype517[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype518[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype519[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype520[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype521[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype522[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype523[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype524[] = {801,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype525[] = {801,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype526[] = {801,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype527[] = {0xFF04,0,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype528[] = {801,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype529[] = {801,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype530[] = {798,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype531[] = {798,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype532[] = {801,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype533[] = {798,0xFFFF};
static EIF_TYPE_INDEX Y2281_pgtype534[] = {801,0xFFFF};
EIF_TYPE_INDEX *Y2281_gen_type [689];
EIF_TYPE_INDEX Y2281 [689];
void Y2281_init (void)
{
	egc_routines_types [2281] = Y2281;
	egc_routines_gen_types [2281] = Y2281_gen_type;
	egc_routines_offset [2281] = 191;
	Y2281_gen_type [0] = Y2281_pgtype0;
	Y2281_gen_type [1] = Y2281_pgtype1;
	Y2281_gen_type [2] = Y2281_pgtype2;
	Y2281_gen_type [3] = Y2281_pgtype3;
	Y2281_gen_type [4] = Y2281_pgtype4;
	Y2281_gen_type [5] = Y2281_pgtype5;
	Y2281_gen_type [6] = Y2281_pgtype6;
	Y2281_gen_type [7] = Y2281_pgtype7;
	Y2281_gen_type [8] = Y2281_pgtype8;
	Y2281_gen_type [9] = Y2281_pgtype9;
	Y2281_gen_type [10] = Y2281_pgtype10;
	Y2281_gen_type [11] = Y2281_pgtype11;
	Y2281_gen_type [12] = Y2281_pgtype12;
	Y2281_gen_type [13] = Y2281_pgtype13;
	Y2281_gen_type [14] = Y2281_pgtype14;
	Y2281_gen_type [15] = Y2281_pgtype15;
	Y2281_gen_type [16] = Y2281_pgtype16;
	Y2281_gen_type [17] = Y2281_pgtype17;
	Y2281_gen_type [18] = Y2281_pgtype18;
	Y2281_gen_type [19] = Y2281_pgtype19;
	Y2281_gen_type [20] = Y2281_pgtype20;
	Y2281_gen_type [21] = Y2281_pgtype21;
	Y2281_gen_type [22] = Y2281_pgtype22;
	Y2281_gen_type [23] = Y2281_pgtype23;
	Y2281_gen_type [24] = Y2281_pgtype24;
	Y2281_gen_type [25] = Y2281_pgtype25;
	Y2281_gen_type [26] = Y2281_pgtype26;
	Y2281_gen_type [27] = Y2281_pgtype27;
	Y2281_gen_type [28] = Y2281_pgtype28;
	Y2281_gen_type [29] = Y2281_pgtype29;
	Y2281_gen_type [30] = Y2281_pgtype30;
	Y2281_gen_type [31] = Y2281_pgtype31;
	Y2281_gen_type [32] = Y2281_pgtype32;
	Y2281_gen_type [33] = Y2281_pgtype33;
	Y2281_gen_type [34] = Y2281_pgtype34;
	Y2281_gen_type [35] = Y2281_pgtype35;
	Y2281_gen_type [36] = Y2281_pgtype36;
	Y2281_gen_type [37] = Y2281_pgtype37;
	Y2281_gen_type [38] = Y2281_pgtype38;
	Y2281_gen_type [39] = Y2281_pgtype39;
	Y2281_gen_type [40] = Y2281_pgtype40;
	Y2281_gen_type [41] = Y2281_pgtype41;
	Y2281_gen_type [42] = Y2281_pgtype42;
	Y2281_gen_type [43] = Y2281_pgtype43;
	Y2281_gen_type [44] = Y2281_pgtype44;
	Y2281_gen_type [45] = Y2281_pgtype45;
	Y2281_gen_type [46] = Y2281_pgtype46;
	Y2281_gen_type [47] = Y2281_pgtype47;
	Y2281_gen_type [48] = Y2281_pgtype48;
	Y2281_gen_type [49] = Y2281_pgtype49;
	Y2281_gen_type [50] = Y2281_pgtype50;
	Y2281_gen_type [51] = Y2281_pgtype51;
	Y2281_gen_type [52] = Y2281_pgtype52;
	Y2281_gen_type [53] = Y2281_pgtype53;
	Y2281_gen_type [54] = Y2281_pgtype54;
	Y2281_gen_type [55] = Y2281_pgtype55;
	Y2281_gen_type [56] = Y2281_pgtype56;
	Y2281_gen_type [57] = Y2281_pgtype57;
	Y2281_gen_type [58] = Y2281_pgtype58;
	Y2281_gen_type [59] = Y2281_pgtype59;
	Y2281_gen_type [60] = Y2281_pgtype60;
	Y2281_gen_type [61] = Y2281_pgtype61;
	Y2281_gen_type [62] = Y2281_pgtype62;
	Y2281_gen_type [63] = Y2281_pgtype63;
	Y2281_gen_type [64] = Y2281_pgtype64;
	Y2281_gen_type [65] = Y2281_pgtype65;
	Y2281_gen_type [66] = Y2281_pgtype66;
	Y2281_gen_type [67] = Y2281_pgtype67;
	Y2281_gen_type [68] = Y2281_pgtype68;
	Y2281_gen_type [69] = Y2281_pgtype69;
	Y2281_gen_type [70] = Y2281_pgtype70;
	Y2281_gen_type [71] = Y2281_pgtype71;
	Y2281_gen_type [72] = Y2281_pgtype72;
	Y2281_gen_type [73] = Y2281_pgtype73;
	Y2281_gen_type [74] = Y2281_pgtype74;
	Y2281_gen_type [75] = Y2281_pgtype75;
	Y2281_gen_type [76] = Y2281_pgtype76;
	Y2281_gen_type [77] = Y2281_pgtype77;
	Y2281_gen_type [78] = Y2281_pgtype78;
	Y2281_gen_type [79] = Y2281_pgtype79;
	Y2281_gen_type [80] = Y2281_pgtype80;
	Y2281_gen_type [81] = Y2281_pgtype81;
	Y2281_gen_type [82] = Y2281_pgtype82;
	Y2281_gen_type [83] = Y2281_pgtype83;
	Y2281_gen_type [84] = Y2281_pgtype84;
	Y2281_gen_type [85] = Y2281_pgtype85;
	Y2281_gen_type [86] = Y2281_pgtype86;
	Y2281_gen_type [87] = Y2281_pgtype87;
	Y2281_gen_type [88] = Y2281_pgtype88;
	Y2281_gen_type [89] = Y2281_pgtype89;
	Y2281_gen_type [90] = Y2281_pgtype90;
	Y2281_gen_type [91] = Y2281_pgtype91;
	Y2281_gen_type [92] = Y2281_pgtype92;
	Y2281_gen_type [93] = Y2281_pgtype93;
	Y2281_gen_type [94] = Y2281_pgtype94;
	Y2281_gen_type [95] = Y2281_pgtype95;
	Y2281_gen_type [96] = Y2281_pgtype96;
	Y2281_gen_type [97] = Y2281_pgtype97;
	Y2281_gen_type [98] = Y2281_pgtype98;
	Y2281_gen_type [99] = Y2281_pgtype99;
	Y2281_gen_type [100] = Y2281_pgtype100;
	Y2281_gen_type [101] = Y2281_pgtype101;
	Y2281_gen_type [102] = Y2281_pgtype102;
	Y2281_gen_type [103] = Y2281_pgtype103;
	Y2281_gen_type [104] = Y2281_pgtype104;
	Y2281_gen_type [105] = Y2281_pgtype105;
	Y2281_gen_type [106] = Y2281_pgtype106;
	Y2281_gen_type [107] = Y2281_pgtype107;
	Y2281_gen_type [108] = Y2281_pgtype108;
	Y2281_gen_type [109] = Y2281_pgtype109;
	Y2281_gen_type [110] = Y2281_pgtype110;
	Y2281_gen_type [111] = Y2281_pgtype111;
	Y2281_gen_type [112] = Y2281_pgtype112;
	Y2281_gen_type [113] = Y2281_pgtype113;
	Y2281_gen_type [114] = Y2281_pgtype114;
	Y2281_gen_type [115] = Y2281_pgtype115;
	Y2281_gen_type [116] = Y2281_pgtype116;
	Y2281_gen_type [117] = Y2281_pgtype117;
	Y2281_gen_type [118] = Y2281_pgtype118;
	Y2281_gen_type [119] = Y2281_pgtype119;
	Y2281_gen_type [120] = Y2281_pgtype120;
	Y2281_gen_type [121] = Y2281_pgtype121;
	Y2281_gen_type [122] = Y2281_pgtype122;
	Y2281_gen_type [123] = Y2281_pgtype123;
	Y2281_gen_type [124] = Y2281_pgtype124;
	Y2281_gen_type [125] = Y2281_pgtype125;
	Y2281_gen_type [126] = Y2281_pgtype126;
	Y2281_gen_type [127] = Y2281_pgtype127;
	Y2281_gen_type [128] = Y2281_pgtype128;
	Y2281_gen_type [129] = Y2281_pgtype129;
	Y2281_gen_type [130] = Y2281_pgtype130;
	Y2281_gen_type [131] = Y2281_pgtype131;
	Y2281_gen_type [132] = Y2281_pgtype132;
	Y2281_gen_type [133] = Y2281_pgtype133;
	Y2281_gen_type [134] = Y2281_pgtype134;
	Y2281_gen_type [135] = Y2281_pgtype135;
	Y2281_gen_type [136] = Y2281_pgtype136;
	Y2281_gen_type [137] = Y2281_pgtype137;
	Y2281_gen_type [138] = Y2281_pgtype138;
	Y2281_gen_type [139] = Y2281_pgtype139;
	Y2281_gen_type [140] = Y2281_pgtype140;
	Y2281_gen_type [141] = Y2281_pgtype141;
	Y2281_gen_type [142] = Y2281_pgtype142;
	Y2281_gen_type [143] = Y2281_pgtype143;
	Y2281_gen_type [144] = Y2281_pgtype144;
	Y2281_gen_type [145] = Y2281_pgtype145;
	Y2281_gen_type [146] = Y2281_pgtype146;
	Y2281_gen_type [147] = Y2281_pgtype147;
	Y2281_gen_type [148] = Y2281_pgtype148;
	Y2281_gen_type [149] = Y2281_pgtype149;
	Y2281_gen_type [150] = Y2281_pgtype150;
	Y2281_gen_type [151] = Y2281_pgtype151;
	Y2281_gen_type [152] = Y2281_pgtype152;
	Y2281_gen_type [153] = Y2281_pgtype153;
	Y2281_gen_type [154] = Y2281_pgtype154;
	Y2281_gen_type [155] = Y2281_pgtype155;
	Y2281_gen_type [156] = Y2281_pgtype156;
	Y2281_gen_type [157] = Y2281_pgtype157;
	Y2281_gen_type [158] = Y2281_pgtype158;
	Y2281_gen_type [159] = Y2281_pgtype159;
	Y2281_gen_type [160] = Y2281_pgtype160;
	Y2281_gen_type [161] = Y2281_pgtype161;
	Y2281_gen_type [162] = Y2281_pgtype162;
	Y2281_gen_type [163] = Y2281_pgtype163;
	Y2281_gen_type [164] = Y2281_pgtype164;
	Y2281_gen_type [165] = Y2281_pgtype165;
	Y2281_gen_type [166] = Y2281_pgtype166;
	Y2281_gen_type [167] = Y2281_pgtype167;
	Y2281_gen_type [168] = Y2281_pgtype168;
	Y2281_gen_type [169] = Y2281_pgtype169;
	Y2281_gen_type [170] = Y2281_pgtype170;
	Y2281_gen_type [171] = Y2281_pgtype171;
	Y2281_gen_type [172] = Y2281_pgtype172;
	Y2281_gen_type [173] = Y2281_pgtype173;
	Y2281_gen_type [174] = Y2281_pgtype174;
	Y2281_gen_type [175] = Y2281_pgtype175;
	Y2281_gen_type [176] = Y2281_pgtype176;
	Y2281_gen_type [177] = Y2281_pgtype177;
	Y2281_gen_type [178] = Y2281_pgtype178;
	Y2281_gen_type [179] = Y2281_pgtype179;
	Y2281_gen_type [180] = Y2281_pgtype180;
	Y2281_gen_type [181] = Y2281_pgtype181;
	Y2281_gen_type [182] = Y2281_pgtype182;
	Y2281_gen_type [183] = Y2281_pgtype183;
	Y2281_gen_type [184] = Y2281_pgtype184;
	Y2281_gen_type [185] = Y2281_pgtype185;
	Y2281_gen_type [186] = Y2281_pgtype186;
	Y2281_gen_type [187] = Y2281_pgtype187;
	Y2281_gen_type [188] = Y2281_pgtype188;
	Y2281_gen_type [189] = Y2281_pgtype189;
	Y2281_gen_type [190] = Y2281_pgtype190;
	Y2281_gen_type [191] = Y2281_pgtype191;
	Y2281_gen_type [192] = Y2281_pgtype192;
	Y2281_gen_type [193] = Y2281_pgtype193;
	Y2281_gen_type [194] = Y2281_pgtype194;
	Y2281_gen_type [195] = Y2281_pgtype195;
	Y2281_gen_type [196] = Y2281_pgtype196;
	Y2281_gen_type [197] = Y2281_pgtype197;
	Y2281_gen_type [198] = Y2281_pgtype198;
	Y2281_gen_type [199] = Y2281_pgtype199;
	Y2281_gen_type [200] = Y2281_pgtype200;
	Y2281_gen_type [201] = Y2281_pgtype201;
	Y2281_gen_type [202] = Y2281_pgtype202;
	Y2281_gen_type [203] = Y2281_pgtype203;
	Y2281_gen_type [204] = Y2281_pgtype204;
	Y2281_gen_type [205] = Y2281_pgtype205;
	Y2281_gen_type [206] = Y2281_pgtype206;
	Y2281_gen_type [207] = Y2281_pgtype207;
	Y2281_gen_type [208] = Y2281_pgtype208;
	Y2281_gen_type [209] = Y2281_pgtype209;
	Y2281_gen_type [210] = Y2281_pgtype210;
	Y2281_gen_type [211] = Y2281_pgtype211;
	Y2281_gen_type [212] = Y2281_pgtype212;
	Y2281_gen_type [213] = Y2281_pgtype213;
	Y2281_gen_type [214] = Y2281_pgtype214;
	Y2281_gen_type [215] = Y2281_pgtype215;
	Y2281_gen_type [216] = Y2281_pgtype216;
	Y2281_gen_type [217] = Y2281_pgtype217;
	Y2281_gen_type [218] = Y2281_pgtype218;
	Y2281_gen_type [219] = Y2281_pgtype219;
	Y2281_gen_type [220] = Y2281_pgtype220;
	Y2281_gen_type [221] = Y2281_pgtype221;
	Y2281_gen_type [222] = Y2281_pgtype222;
	Y2281_gen_type [223] = Y2281_pgtype223;
	Y2281_gen_type [224] = Y2281_pgtype224;
	Y2281_gen_type [225] = Y2281_pgtype225;
	Y2281_gen_type [226] = Y2281_pgtype226;
	Y2281_gen_type [227] = Y2281_pgtype227;
	Y2281_gen_type [228] = Y2281_pgtype228;
	Y2281_gen_type [229] = Y2281_pgtype229;
	Y2281_gen_type [230] = Y2281_pgtype230;
	Y2281_gen_type [231] = Y2281_pgtype231;
	Y2281_gen_type [232] = Y2281_pgtype232;
	Y2281_gen_type [233] = Y2281_pgtype233;
	Y2281_gen_type [234] = Y2281_pgtype234;
	Y2281_gen_type [235] = Y2281_pgtype235;
	Y2281_gen_type [236] = Y2281_pgtype236;
	Y2281_gen_type [237] = Y2281_pgtype237;
	Y2281_gen_type [238] = Y2281_pgtype238;
	Y2281_gen_type [239] = Y2281_pgtype239;
	Y2281_gen_type [240] = Y2281_pgtype240;
	Y2281_gen_type [241] = Y2281_pgtype241;
	Y2281_gen_type [242] = Y2281_pgtype242;
	Y2281_gen_type [243] = Y2281_pgtype243;
	Y2281_gen_type [244] = Y2281_pgtype244;
	Y2281_gen_type [245] = Y2281_pgtype245;
	Y2281_gen_type [246] = Y2281_pgtype246;
	Y2281_gen_type [247] = Y2281_pgtype247;
	Y2281_gen_type [248] = Y2281_pgtype248;
	Y2281_gen_type [249] = Y2281_pgtype249;
	Y2281_gen_type [250] = Y2281_pgtype250;
	Y2281_gen_type [251] = Y2281_pgtype251;
	Y2281_gen_type [252] = Y2281_pgtype252;
	Y2281_gen_type [253] = Y2281_pgtype253;
	Y2281_gen_type [254] = Y2281_pgtype254;
	Y2281_gen_type [255] = Y2281_pgtype255;
	Y2281_gen_type [256] = Y2281_pgtype256;
	Y2281_gen_type [257] = Y2281_pgtype257;
	Y2281_gen_type [258] = Y2281_pgtype258;
	Y2281_gen_type [259] = Y2281_pgtype259;
	Y2281_gen_type [260] = Y2281_pgtype260;
	Y2281_gen_type [261] = Y2281_pgtype261;
	Y2281_gen_type [262] = Y2281_pgtype262;
	Y2281_gen_type [263] = Y2281_pgtype263;
	Y2281_gen_type [264] = Y2281_pgtype264;
	Y2281_gen_type [265] = Y2281_pgtype265;
	Y2281_gen_type [266] = Y2281_pgtype266;
	Y2281_gen_type [267] = Y2281_pgtype267;
	Y2281_gen_type [268] = Y2281_pgtype268;
	Y2281_gen_type [269] = Y2281_pgtype269;
	Y2281_gen_type [270] = Y2281_pgtype270;
	Y2281_gen_type [271] = Y2281_pgtype271;
	Y2281_gen_type [272] = Y2281_pgtype272;
	Y2281_gen_type [273] = Y2281_pgtype273;
	Y2281_gen_type [274] = Y2281_pgtype274;
	Y2281_gen_type [275] = Y2281_pgtype275;
	Y2281_gen_type [276] = Y2281_pgtype276;
	Y2281_gen_type [277] = Y2281_pgtype277;
	Y2281_gen_type [278] = Y2281_pgtype278;
	Y2281_gen_type [279] = Y2281_pgtype279;
	Y2281_gen_type [280] = Y2281_pgtype280;
	Y2281_gen_type [281] = Y2281_pgtype281;
	Y2281_gen_type [282] = Y2281_pgtype282;
	Y2281_gen_type [283] = Y2281_pgtype283;
	Y2281_gen_type [284] = Y2281_pgtype284;
	Y2281_gen_type [285] = Y2281_pgtype285;
	Y2281_gen_type [286] = Y2281_pgtype286;
	Y2281_gen_type [287] = Y2281_pgtype287;
	Y2281_gen_type [288] = Y2281_pgtype288;
	Y2281_gen_type [289] = Y2281_pgtype289;
	Y2281_gen_type [290] = Y2281_pgtype290;
	Y2281_gen_type [291] = Y2281_pgtype291;
	Y2281_gen_type [292] = Y2281_pgtype292;
	Y2281_gen_type [293] = Y2281_pgtype293;
	Y2281_gen_type [294] = Y2281_pgtype294;
	Y2281_gen_type [295] = Y2281_pgtype295;
	Y2281_gen_type [296] = Y2281_pgtype296;
	Y2281_gen_type [297] = Y2281_pgtype297;
	Y2281_gen_type [298] = Y2281_pgtype298;
	Y2281_gen_type [299] = Y2281_pgtype299;
	Y2281_gen_type [300] = Y2281_pgtype300;
	Y2281_gen_type [301] = Y2281_pgtype301;
	Y2281_gen_type [302] = Y2281_pgtype302;
	Y2281_gen_type [303] = Y2281_pgtype303;
	Y2281_gen_type [304] = Y2281_pgtype304;
	Y2281_gen_type [305] = Y2281_pgtype305;
	Y2281_gen_type [306] = Y2281_pgtype306;
	Y2281_gen_type [307] = Y2281_pgtype307;
	Y2281_gen_type [308] = Y2281_pgtype308;
	Y2281_gen_type [309] = Y2281_pgtype309;
	Y2281_gen_type [310] = Y2281_pgtype310;
	Y2281_gen_type [311] = Y2281_pgtype311;
	Y2281_gen_type [312] = Y2281_pgtype312;
	Y2281_gen_type [313] = Y2281_pgtype313;
	Y2281_gen_type [314] = Y2281_pgtype314;
	Y2281_gen_type [315] = Y2281_pgtype315;
	Y2281_gen_type [316] = Y2281_pgtype316;
	Y2281_gen_type [317] = Y2281_pgtype317;
	Y2281_gen_type [318] = Y2281_pgtype318;
	Y2281_gen_type [319] = Y2281_pgtype319;
	Y2281_gen_type [320] = Y2281_pgtype320;
	Y2281_gen_type [321] = Y2281_pgtype321;
	Y2281_gen_type [322] = Y2281_pgtype322;
	Y2281_gen_type [323] = Y2281_pgtype323;
	Y2281_gen_type [324] = Y2281_pgtype324;
	Y2281_gen_type [325] = Y2281_pgtype325;
	Y2281_gen_type [326] = Y2281_pgtype326;
	Y2281_gen_type [327] = Y2281_pgtype327;
	Y2281_gen_type [328] = Y2281_pgtype328;
	Y2281_gen_type [329] = Y2281_pgtype329;
	Y2281_gen_type [330] = Y2281_pgtype330;
	Y2281_gen_type [331] = Y2281_pgtype331;
	Y2281_gen_type [332] = Y2281_pgtype332;
	Y2281_gen_type [333] = Y2281_pgtype333;
	Y2281_gen_type [334] = Y2281_pgtype334;
	Y2281_gen_type [335] = Y2281_pgtype335;
	Y2281_gen_type [336] = Y2281_pgtype336;
	Y2281_gen_type [337] = Y2281_pgtype337;
	Y2281_gen_type [338] = Y2281_pgtype338;
	Y2281_gen_type [339] = Y2281_pgtype339;
	Y2281_gen_type [340] = Y2281_pgtype340;
	Y2281_gen_type [341] = Y2281_pgtype341;
	Y2281_gen_type [342] = Y2281_pgtype342;
	Y2281_gen_type [343] = Y2281_pgtype343;
	Y2281_gen_type [344] = Y2281_pgtype344;
	Y2281_gen_type [345] = Y2281_pgtype345;
	Y2281_gen_type [346] = Y2281_pgtype346;
	Y2281_gen_type [347] = Y2281_pgtype347;
	Y2281_gen_type [348] = Y2281_pgtype348;
	Y2281_gen_type [349] = Y2281_pgtype349;
	Y2281_gen_type [350] = Y2281_pgtype350;
	Y2281_gen_type [351] = Y2281_pgtype351;
	Y2281_gen_type [352] = Y2281_pgtype352;
	Y2281_gen_type [353] = Y2281_pgtype353;
	Y2281_gen_type [354] = Y2281_pgtype354;
	Y2281_gen_type [355] = Y2281_pgtype355;
	Y2281_gen_type [356] = Y2281_pgtype356;
	Y2281_gen_type [357] = Y2281_pgtype357;
	Y2281_gen_type [358] = Y2281_pgtype358;
	Y2281_gen_type [359] = Y2281_pgtype359;
	Y2281_gen_type [360] = Y2281_pgtype360;
	Y2281_gen_type [361] = Y2281_pgtype361;
	Y2281_gen_type [362] = Y2281_pgtype362;
	Y2281_gen_type [363] = Y2281_pgtype363;
	Y2281_gen_type [364] = Y2281_pgtype364;
	Y2281_gen_type [365] = Y2281_pgtype365;
	Y2281_gen_type [366] = Y2281_pgtype366;
	Y2281_gen_type [367] = Y2281_pgtype367;
	Y2281_gen_type [368] = Y2281_pgtype368;
	Y2281_gen_type [369] = Y2281_pgtype369;
	Y2281_gen_type [370] = Y2281_pgtype370;
	Y2281_gen_type [371] = Y2281_pgtype371;
	Y2281_gen_type [372] = Y2281_pgtype372;
	Y2281_gen_type [373] = Y2281_pgtype373;
	Y2281_gen_type [374] = Y2281_pgtype374;
	Y2281_gen_type [375] = Y2281_pgtype375;
	Y2281_gen_type [376] = Y2281_pgtype376;
	Y2281_gen_type [377] = Y2281_pgtype377;
	Y2281_gen_type [378] = Y2281_pgtype378;
	Y2281_gen_type [379] = Y2281_pgtype379;
	Y2281_gen_type [380] = Y2281_pgtype380;
	Y2281_gen_type [381] = Y2281_pgtype381;
	Y2281_gen_type [382] = Y2281_pgtype382;
	Y2281_gen_type [384] = Y2281_pgtype383;
	Y2281_gen_type [385] = Y2281_pgtype384;
	Y2281_gen_type [386] = Y2281_pgtype385;
	Y2281_gen_type [387] = Y2281_pgtype386;
	Y2281_gen_type [388] = Y2281_pgtype387;
	Y2281_gen_type [389] = Y2281_pgtype388;
	Y2281_gen_type [390] = Y2281_pgtype389;
	Y2281_gen_type [391] = Y2281_pgtype390;
	Y2281_gen_type [392] = Y2281_pgtype391;
	Y2281_gen_type [393] = Y2281_pgtype392;
	Y2281_gen_type [394] = Y2281_pgtype393;
	Y2281_gen_type [395] = Y2281_pgtype394;
	Y2281_gen_type [396] = Y2281_pgtype395;
	Y2281_gen_type [397] = Y2281_pgtype396;
	Y2281_gen_type [398] = Y2281_pgtype397;
	Y2281_gen_type [399] = Y2281_pgtype398;
	Y2281_gen_type [400] = Y2281_pgtype399;
	Y2281_gen_type [401] = Y2281_pgtype400;
	Y2281_gen_type [402] = Y2281_pgtype401;
	Y2281_gen_type [403] = Y2281_pgtype402;
	Y2281_gen_type [404] = Y2281_pgtype403;
	Y2281_gen_type [405] = Y2281_pgtype404;
	Y2281_gen_type [406] = Y2281_pgtype405;
	Y2281_gen_type [407] = Y2281_pgtype406;
	Y2281_gen_type [423] = Y2281_pgtype407;
	Y2281_gen_type [424] = Y2281_pgtype408;
	Y2281_gen_type [431] = Y2281_pgtype409;
	Y2281_gen_type [432] = Y2281_pgtype410;
	Y2281_gen_type [433] = Y2281_pgtype411;
	Y2281_gen_type [434] = Y2281_pgtype412;
	Y2281_gen_type [435] = Y2281_pgtype413;
	Y2281_gen_type [436] = Y2281_pgtype414;
	Y2281_gen_type [437] = Y2281_pgtype415;
	Y2281_gen_type [438] = Y2281_pgtype416;
	Y2281_gen_type [439] = Y2281_pgtype417;
	Y2281_gen_type [440] = Y2281_pgtype418;
	Y2281_gen_type [441] = Y2281_pgtype419;
	Y2281_gen_type [442] = Y2281_pgtype420;
	Y2281_gen_type [443] = Y2281_pgtype421;
	Y2281_gen_type [444] = Y2281_pgtype422;
	Y2281_gen_type [445] = Y2281_pgtype423;
	Y2281_gen_type [446] = Y2281_pgtype424;
	Y2281_gen_type [447] = Y2281_pgtype425;
	Y2281_gen_type [448] = Y2281_pgtype426;
	Y2281_gen_type [449] = Y2281_pgtype427;
	Y2281_gen_type [450] = Y2281_pgtype428;
	Y2281_gen_type [451] = Y2281_pgtype429;
	Y2281_gen_type [452] = Y2281_pgtype430;
	Y2281_gen_type [453] = Y2281_pgtype431;
	Y2281_gen_type [454] = Y2281_pgtype432;
	Y2281_gen_type [455] = Y2281_pgtype433;
	Y2281_gen_type [456] = Y2281_pgtype434;
	Y2281_gen_type [457] = Y2281_pgtype435;
	Y2281_gen_type [458] = Y2281_pgtype436;
	Y2281_gen_type [459] = Y2281_pgtype437;
	Y2281_gen_type [460] = Y2281_pgtype438;
	Y2281_gen_type [461] = Y2281_pgtype439;
	Y2281_gen_type [462] = Y2281_pgtype440;
	Y2281_gen_type [463] = Y2281_pgtype441;
	Y2281_gen_type [464] = Y2281_pgtype442;
	Y2281_gen_type [465] = Y2281_pgtype443;
	Y2281_gen_type [466] = Y2281_pgtype444;
	Y2281_gen_type [467] = Y2281_pgtype445;
	Y2281_gen_type [468] = Y2281_pgtype446;
	Y2281_gen_type [469] = Y2281_pgtype447;
	Y2281_gen_type [470] = Y2281_pgtype448;
	Y2281_gen_type [471] = Y2281_pgtype449;
	Y2281_gen_type [472] = Y2281_pgtype450;
	Y2281_gen_type [473] = Y2281_pgtype451;
	Y2281_gen_type [474] = Y2281_pgtype452;
	Y2281_gen_type [475] = Y2281_pgtype453;
	Y2281_gen_type [476] = Y2281_pgtype454;
	Y2281_gen_type [477] = Y2281_pgtype455;
	Y2281_gen_type [478] = Y2281_pgtype456;
	Y2281_gen_type [479] = Y2281_pgtype457;
	Y2281_gen_type [480] = Y2281_pgtype458;
	Y2281_gen_type [481] = Y2281_pgtype459;
	Y2281_gen_type [482] = Y2281_pgtype460;
	Y2281_gen_type [483] = Y2281_pgtype461;
	Y2281_gen_type [484] = Y2281_pgtype462;
	Y2281_gen_type [485] = Y2281_pgtype463;
	Y2281_gen_type [486] = Y2281_pgtype464;
	Y2281_gen_type [487] = Y2281_pgtype465;
	Y2281_gen_type [488] = Y2281_pgtype466;
	Y2281_gen_type [489] = Y2281_pgtype467;
	Y2281_gen_type [490] = Y2281_pgtype468;
	Y2281_gen_type [491] = Y2281_pgtype469;
	Y2281_gen_type [492] = Y2281_pgtype470;
	Y2281_gen_type [493] = Y2281_pgtype471;
	Y2281_gen_type [494] = Y2281_pgtype472;
	Y2281_gen_type [495] = Y2281_pgtype473;
	Y2281_gen_type [496] = Y2281_pgtype474;
	Y2281_gen_type [497] = Y2281_pgtype475;
	Y2281_gen_type [498] = Y2281_pgtype476;
	Y2281_gen_type [499] = Y2281_pgtype477;
	Y2281_gen_type [500] = Y2281_pgtype478;
	Y2281_gen_type [501] = Y2281_pgtype479;
	Y2281_gen_type [502] = Y2281_pgtype480;
	Y2281_gen_type [503] = Y2281_pgtype481;
	Y2281_gen_type [504] = Y2281_pgtype482;
	Y2281_gen_type [505] = Y2281_pgtype483;
	Y2281_gen_type [506] = Y2281_pgtype484;
	Y2281_gen_type [507] = Y2281_pgtype485;
	Y2281_gen_type [508] = Y2281_pgtype486;
	Y2281_gen_type [509] = Y2281_pgtype487;
	Y2281_gen_type [510] = Y2281_pgtype488;
	Y2281_gen_type [511] = Y2281_pgtype489;
	Y2281_gen_type [512] = Y2281_pgtype490;
	Y2281_gen_type [513] = Y2281_pgtype491;
	Y2281_gen_type [514] = Y2281_pgtype492;
	Y2281_gen_type [515] = Y2281_pgtype493;
	Y2281_gen_type [516] = Y2281_pgtype494;
	Y2281_gen_type [517] = Y2281_pgtype495;
	Y2281_gen_type [518] = Y2281_pgtype496;
	Y2281_gen_type [519] = Y2281_pgtype497;
	Y2281_gen_type [520] = Y2281_pgtype498;
	Y2281_gen_type [521] = Y2281_pgtype499;
	Y2281_gen_type [522] = Y2281_pgtype500;
	Y2281_gen_type [523] = Y2281_pgtype501;
	Y2281_gen_type [524] = Y2281_pgtype502;
	Y2281_gen_type [525] = Y2281_pgtype503;
	Y2281_gen_type [526] = Y2281_pgtype504;
	Y2281_gen_type [527] = Y2281_pgtype505;
	Y2281_gen_type [528] = Y2281_pgtype506;
	Y2281_gen_type [529] = Y2281_pgtype507;
	Y2281_gen_type [530] = Y2281_pgtype508;
	Y2281_gen_type [531] = Y2281_pgtype509;
	Y2281_gen_type [532] = Y2281_pgtype510;
	Y2281_gen_type [533] = Y2281_pgtype511;
	Y2281_gen_type [534] = Y2281_pgtype512;
	Y2281_gen_type [535] = Y2281_pgtype513;
	Y2281_gen_type [536] = Y2281_pgtype514;
	Y2281_gen_type [537] = Y2281_pgtype515;
	Y2281_gen_type [538] = Y2281_pgtype516;
	Y2281_gen_type [539] = Y2281_pgtype517;
	Y2281_gen_type [540] = Y2281_pgtype518;
	Y2281_gen_type [541] = Y2281_pgtype519;
	Y2281_gen_type [542] = Y2281_pgtype520;
	Y2281_gen_type [543] = Y2281_pgtype521;
	Y2281_gen_type [544] = Y2281_pgtype522;
	Y2281_gen_type [545] = Y2281_pgtype523;
	Y2281_gen_type [550] = Y2281_pgtype524;
	Y2281_gen_type [551] = Y2281_pgtype525;
	Y2281_gen_type [552] = Y2281_pgtype526;
	Y2281_gen_type [601] = Y2281_pgtype527;
	Y2281_gen_type [680] = Y2281_pgtype528;
	Y2281_gen_type [682] = Y2281_pgtype529;
	Y2281_gen_type [683] = Y2281_pgtype530;
	Y2281_gen_type [684] = Y2281_pgtype531;
	Y2281_gen_type [686] = Y2281_pgtype532;
	Y2281_gen_type [687] = Y2281_pgtype533;
	Y2281_gen_type [688] = Y2281_pgtype534;
	Y2281[15] = 873;
	{long i; for (i = 21; i < 23; i++) Y2281[i] = 878;};
	Y2281[304] = 828;
	Y2281[392] = 0;
	Y2281[423] = 798;
	Y2281[424] = 828;
	Y2281[514] = 798;
	Y2281[515] = 801;
	{long i; for (i = 550; i < 553; i++) Y2281[i] = 801;};
	Y2281[601] = 0;
	Y2281[680] = 801;
	Y2281[682] = 801;
	{long i; for (i = 683; i < 685; i++) Y2281[i] = 798;};
	Y2281[686] = 801;
	Y2281[687] = 798;
	Y2281[688] = 801;
}

char *(*R2327[381])();
void R2327_init () {
	R2327[0] = (char *(*)()) F331_2657;
	R2327[1] = (char *(*)()) F326_2657;
	R2327[2] = (char *(*)()) F327_2657;
	R2327[3] = (char *(*)()) F328_2657;
	R2327[4] = (char *(*)()) F329_2657;
	R2327[5] = (char *(*)()) F330_2657;
	R2327[6] = (char *(*)()) F331_2657;
	R2327[7] = (char *(*)()) F333_2657;
	R2327[8] = (char *(*)()) F334_2657;
	R2327[9] = (char *(*)()) F335_2657;
	R2327[10] = (char *(*)()) F336_2657;
	R2327[11] = (char *(*)()) F337_2657;
	R2327[12] = (char *(*)()) F338_2657;
	R2327[13] = (char *(*)()) F339_2657;
	R2327[14] = (char *(*)()) F332_2657;
	R2327[15] = (char *(*)()) F340_2657;
	R2327[76] = (char *(*)()) F326_2657;
	R2327[77] = (char *(*)()) F331_2657;
	R2327[78] = (char *(*)()) F339_2657;
	{long i; for (i = 81; i < 83; i++) R2327[i] = (char *(*)()) F326_2657;}
	R2327[83] = (char *(*)()) F336_2657;
	{long i; for (i = 84; i < 86; i++) R2327[i] = (char *(*)()) F331_2657;}
	R2327[86] = (char *(*)()) F326_2657;
	R2327[87] = (char *(*)()) F331_2657;
	{long i; for (i = 88; i < 90; i++) R2327[i] = (char *(*)()) F326_2657;}
	R2327[90] = (char *(*)()) F327_2657;
	R2327[91] = (char *(*)()) F328_2657;
	R2327[92] = (char *(*)()) F329_2657;
	R2327[93] = (char *(*)()) F330_2657;
	R2327[94] = (char *(*)()) F331_2657;
	R2327[95] = (char *(*)()) F333_2657;
	R2327[96] = (char *(*)()) F334_2657;
	R2327[97] = (char *(*)()) F335_2657;
	R2327[98] = (char *(*)()) F336_2657;
	R2327[99] = (char *(*)()) F337_2657;
	R2327[100] = (char *(*)()) F338_2657;
	R2327[101] = (char *(*)()) F339_2657;
	R2327[102] = (char *(*)()) F332_2657;
	R2327[103] = (char *(*)()) F340_2657;
	{long i; for (i = 247; i < 249; i++) R2327[i] = (char *(*)()) F329_2657;}
	R2327[378] = (char *(*)()) F329_2657;
	R2327[380] = (char *(*)()) F332_2657;
}

char *(*R2331[385])();
void R2331_init () {
	R2331[0] = (char *(*)()) F220_2585;
	R2331[1] = (char *(*)()) F215_2585;
	R2331[2] = (char *(*)()) F216_2585;
	R2331[3] = (char *(*)()) F217_2585;
	R2331[4] = (char *(*)()) F218_2585;
	R2331[5] = (char *(*)()) F219_2585;
	R2331[6] = (char *(*)()) F220_2585;
	R2331[7] = (char *(*)()) F222_2585;
	R2331[8] = (char *(*)()) F223_2585;
	R2331[9] = (char *(*)()) F224_2585;
	R2331[10] = (char *(*)()) F225_2585;
	R2331[11] = (char *(*)()) F226_2585;
	R2331[12] = (char *(*)()) F227_2585;
	R2331[13] = (char *(*)()) F228_2585;
	R2331[14] = (char *(*)()) F221_2585;
	R2331[15] = (char *(*)()) F229_2585;
	R2331[76] = (char *(*)()) F215_2585;
	R2331[77] = (char *(*)()) F220_2585;
	R2331[78] = (char *(*)()) F228_2585;
	{long i; for (i = 80; i < 83; i++) R2331[i] = (char *(*)()) F215_2585;}
	R2331[83] = (char *(*)()) F225_2585;
	{long i; for (i = 84; i < 86; i++) R2331[i] = (char *(*)()) F220_2585;}
	R2331[86] = (char *(*)()) F215_2585;
	R2331[87] = (char *(*)()) F220_2585;
	{long i; for (i = 88; i < 90; i++) R2331[i] = (char *(*)()) F215_2585;}
	R2331[90] = (char *(*)()) F216_2585;
	R2331[91] = (char *(*)()) F217_2585;
	R2331[92] = (char *(*)()) F218_2585;
	R2331[93] = (char *(*)()) F219_2585;
	R2331[94] = (char *(*)()) F220_2585;
	R2331[95] = (char *(*)()) F222_2585;
	R2331[96] = (char *(*)()) F223_2585;
	R2331[97] = (char *(*)()) F224_2585;
	R2331[98] = (char *(*)()) F225_2585;
	R2331[99] = (char *(*)()) F226_2585;
	R2331[100] = (char *(*)()) F227_2585;
	R2331[101] = (char *(*)()) F228_2585;
	R2331[102] = (char *(*)()) F221_2585;
	R2331[103] = (char *(*)()) F229_2585;
	R2331[120] = (char *(*)()) F220_2585;
	{long i; for (i = 247; i < 249; i++) R2331[i] = (char *(*)()) F218_2585;}
	R2331[378] = (char *(*)()) F218_2585;
	R2331[380] = (char *(*)()) F221_2585;
	R2331[384] = (char *(*)()) F218_2585;
}

char *(*R2339[305])();
void R2339_init () {
	R2339[0] = (char *(*)()) F572_3662;
	R2339[1] = (char *(*)()) F573_3662_2339_4;
	R2339[2] = (char *(*)()) F574_3662_2339_4;
	R2339[302] = (char *(*)()) F874_6746_2339_4;
	R2339[304] = (char *(*)()) F876_6953_2339_4;
}
static void F573_3662_2339_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F573_3662(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F574_3662_2339_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F574_3662(Current, *(EIF_BOOLEAN *)arg1);
}
static void F874_6746_2339_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F874_6746(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F876_6953_2339_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F876_6953(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2369[380])();
void R2369_init () {
	R2369[0] = (char *(*)()) F497_3311_2369_5;
	R2369[1] = (char *(*)()) F498_3311_2369_5;
	R2369[2] = (char *(*)()) F499_3311_2369_5;
	R2369[3] = (char *(*)()) F500_3311_2369_5;
	R2369[4] = (char *(*)()) F501_3311_2369_5;
	R2369[5] = (char *(*)()) F502_3311_2369_5;
	R2369[6] = (char *(*)()) F503_3311_2369_5;
	R2369[7] = (char *(*)()) F504_3311_2369_5;
	R2369[8] = (char *(*)()) F505_3311_2369_5;
	R2369[9] = (char *(*)()) F506_3311_2369_5;
	R2369[10] = (char *(*)()) F507_3311_2369_5;
	R2369[11] = (char *(*)()) F508_3311_2369_5;
	R2369[12] = (char *(*)()) F509_3311_2369_5;
	R2369[13] = (char *(*)()) F510_3311_2369_5;
	R2369[14] = (char *(*)()) F511_3311_2369_5;
	R2369[88] = (char *(*)()) F585_4079_2369_5;
	R2369[89] = (char *(*)()) F586_4079_2369_5;
	R2369[90] = (char *(*)()) F587_4079_2369_5;
	R2369[91] = (char *(*)()) F588_4079_2369_5;
	R2369[92] = (char *(*)()) F589_4079_2369_5;
	R2369[93] = (char *(*)()) F590_4079_2369_5;
	R2369[94] = (char *(*)()) F591_4079_2369_5;
	R2369[95] = (char *(*)()) F592_4079_2369_5;
	R2369[96] = (char *(*)()) F593_4079_2369_5;
	R2369[97] = (char *(*)()) F594_4079_2369_5;
	R2369[98] = (char *(*)()) F595_4079_2369_5;
	R2369[99] = (char *(*)()) F596_4079_2369_5;
	R2369[100] = (char *(*)()) F597_4079_2369_5;
	R2369[101] = (char *(*)()) F598_4079_2369_5;
	R2369[102] = (char *(*)()) F599_4079_2369_5;
	R2369[379] = (char *(*)()) F876_6904_2369_5;
}
static EIF_REFERENCE F497_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F497_3311(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F498_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F498_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(864, 0x00).id, 864, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F499_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F499_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(816, 0x00).id, 816, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F500_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F500_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(801, 0x00).id, 801, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F501_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F501_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(810, 0x00).id, 810, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F502_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F502_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(828, 0x00).id, 828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F503_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F503_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(813, 0x00).id, 813, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F504_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F504_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(825, 0x00).id, 825, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F505_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F505_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(795, 0x00).id, 795, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F506_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F506_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(822, 0x00).id, 822, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F507_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F507_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(831, 0x00).id, 831, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F508_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F508_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(804, 0x00).id, 804, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F509_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F509_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(807, 0x00).id, 807, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F510_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F510_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F511_3311_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F511_3311(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(819, 0x00).id, 819, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F585_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F585_4079(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F586_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F586_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(864, 0x00).id, 864, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F587_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F587_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(816, 0x00).id, 816, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F588_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F588_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(801, 0x00).id, 801, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F589_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F589_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(810, 0x00).id, 810, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F590_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F590_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(828, 0x00).id, 828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F591_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F591_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(813, 0x00).id, 813, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F592_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F592_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(825, 0x00).id, 825, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F593_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F593_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(795, 0x00).id, 795, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F594_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F594_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(822, 0x00).id, 822, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F595_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F595_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(831, 0x00).id, 831, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F596_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F596_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(804, 0x00).id, 804, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F597_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F597_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(807, 0x00).id, 807, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F598_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F598_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F599_4079_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F599_4079(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(819, 0x00).id, 819, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F876_6904_2369_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F876_6904(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R2372[378])();
void R2372_init () {
	R2372[0] = (char *(*)()) F497_3330_2372_8;
	R2372[1] = (char *(*)()) F498_3330_2372_8;
	R2372[2] = (char *(*)()) F499_3330_2372_8;
	R2372[3] = (char *(*)()) F500_3330_2372_8;
	R2372[4] = (char *(*)()) F501_3330_2372_8;
	R2372[5] = (char *(*)()) F502_3330_2372_8;
	R2372[6] = (char *(*)()) F503_3330_2372_8;
	R2372[7] = (char *(*)()) F504_3330_2372_8;
	R2372[8] = (char *(*)()) F505_3330_2372_8;
	R2372[9] = (char *(*)()) F506_3330_2372_8;
	R2372[10] = (char *(*)()) F507_3330_2372_8;
	R2372[11] = (char *(*)()) F508_3330_2372_8;
	R2372[12] = (char *(*)()) F509_3330_2372_8;
	R2372[13] = (char *(*)()) F510_3330_2372_8;
	R2372[14] = (char *(*)()) F511_3330_2372_8;
	R2372[80] = (char *(*)()) F577_3970;
	R2372[81] = (char *(*)()) F578_3970_2372_8;
	R2372[82] = (char *(*)()) F579_3970_2372_8;
	R2372[83] = (char *(*)()) F580_3970_2372_8;
	R2372[84] = (char *(*)()) F581_3970_2372_8;
	R2372[85] = (char *(*)()) F577_3970;
	R2372[86] = (char *(*)()) F580_3970_2372_8;
	R2372[87] = (char *(*)()) F577_3970;
	R2372[377] = (char *(*)()) F874_6718_2372_8;
}
static void F497_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F497_3330(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F498_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F498_3330(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F499_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F499_3330(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F500_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F500_3330(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F501_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F501_3330(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F502_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F502_3330(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F503_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F503_3330(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F504_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F504_3330(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F505_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F505_3330(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F506_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F506_3330(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F507_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F507_3330(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F508_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F508_3330(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F509_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F509_3330(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F510_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F510_3330(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F511_3330_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F511_3330(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F578_3970_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F578_3970(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F579_3970_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F579_3970(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_POINTER *)arg2);
}
static void F580_3970_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F580_3970(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F581_3970_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F581_3970(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F874_6718_2372_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F874_6718(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

static EIF_TYPE_INDEX Y2374_pgtype0[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype1[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype2[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype3[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype4[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype5[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype6[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype7[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype8[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype9[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype10[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype11[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype12[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype13[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype14[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype15[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype16[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype17[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype18[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype19[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype20[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype21[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype22[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype23[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype24[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype25[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype26[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype27[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype28[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype29[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype30[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype31[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype32[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype33[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype34[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype35[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype36[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype37[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype38[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype39[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype40[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype41[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype42[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype43[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype44[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype45[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype46[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype47[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype48[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype49[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype50[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype51[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype52[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype53[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype54[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype55[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype56[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype57[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype58[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype59[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype60[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype61[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype62[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype63[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype64[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype65[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype66[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype67[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype68[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype69[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype70[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype71[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype72[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype73[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype74[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype75[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype76[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype77[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype78[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype79[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype80[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype81[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype82[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype83[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype84[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype85[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype86[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype87[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype88[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype89[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype90[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype91[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype92[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype93[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype94[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype95[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype96[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype97[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype98[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype99[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype100[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype101[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype102[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype103[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype104[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype105[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype106[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype107[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype108[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype109[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype110[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype111[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype112[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype113[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype114[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype115[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype116[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype117[] = {0xFF01,870,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype118[] = {0xFF01,870,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype119[] = {0xFF01,873,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype120[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype121[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype122[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype123[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype124[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype125[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype126[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype127[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype128[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype129[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype130[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype131[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype132[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype133[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype134[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype135[] = {828,0xFFFF};
static EIF_TYPE_INDEX Y2374_pgtype136[] = {828,0xFFFF};
EIF_TYPE_INDEX *Y2374_gen_type [616];
EIF_TYPE_INDEX Y2374 [616];
void Y2374_init (void)
{
	egc_routines_types [2374] = Y2374;
	egc_routines_gen_types [2374] = Y2374_gen_type;
	egc_routines_offset [2374] = 260;
	Y2374_gen_type [0] = Y2374_pgtype0;
	Y2374_gen_type [1] = Y2374_pgtype1;
	Y2374_gen_type [2] = Y2374_pgtype2;
	Y2374_gen_type [3] = Y2374_pgtype3;
	Y2374_gen_type [4] = Y2374_pgtype4;
	Y2374_gen_type [5] = Y2374_pgtype5;
	Y2374_gen_type [6] = Y2374_pgtype6;
	Y2374_gen_type [7] = Y2374_pgtype7;
	Y2374_gen_type [8] = Y2374_pgtype8;
	Y2374_gen_type [9] = Y2374_pgtype9;
	Y2374_gen_type [10] = Y2374_pgtype10;
	Y2374_gen_type [11] = Y2374_pgtype11;
	Y2374_gen_type [12] = Y2374_pgtype12;
	Y2374_gen_type [13] = Y2374_pgtype13;
	Y2374_gen_type [14] = Y2374_pgtype14;
	Y2374_gen_type [15] = Y2374_pgtype15;
	Y2374_gen_type [16] = Y2374_pgtype16;
	Y2374_gen_type [17] = Y2374_pgtype17;
	Y2374_gen_type [220] = Y2374_pgtype18;
	Y2374_gen_type [221] = Y2374_pgtype19;
	Y2374_gen_type [222] = Y2374_pgtype20;
	Y2374_gen_type [223] = Y2374_pgtype21;
	Y2374_gen_type [224] = Y2374_pgtype22;
	Y2374_gen_type [225] = Y2374_pgtype23;
	Y2374_gen_type [226] = Y2374_pgtype24;
	Y2374_gen_type [227] = Y2374_pgtype25;
	Y2374_gen_type [228] = Y2374_pgtype26;
	Y2374_gen_type [229] = Y2374_pgtype27;
	Y2374_gen_type [230] = Y2374_pgtype28;
	Y2374_gen_type [231] = Y2374_pgtype29;
	Y2374_gen_type [232] = Y2374_pgtype30;
	Y2374_gen_type [233] = Y2374_pgtype31;
	Y2374_gen_type [234] = Y2374_pgtype32;
	Y2374_gen_type [235] = Y2374_pgtype33;
	Y2374_gen_type [236] = Y2374_pgtype34;
	Y2374_gen_type [237] = Y2374_pgtype35;
	Y2374_gen_type [238] = Y2374_pgtype36;
	Y2374_gen_type [239] = Y2374_pgtype37;
	Y2374_gen_type [240] = Y2374_pgtype38;
	Y2374_gen_type [241] = Y2374_pgtype39;
	Y2374_gen_type [242] = Y2374_pgtype40;
	Y2374_gen_type [243] = Y2374_pgtype41;
	Y2374_gen_type [244] = Y2374_pgtype42;
	Y2374_gen_type [245] = Y2374_pgtype43;
	Y2374_gen_type [246] = Y2374_pgtype44;
	Y2374_gen_type [247] = Y2374_pgtype45;
	Y2374_gen_type [248] = Y2374_pgtype46;
	Y2374_gen_type [249] = Y2374_pgtype47;
	Y2374_gen_type [250] = Y2374_pgtype48;
	Y2374_gen_type [251] = Y2374_pgtype49;
	Y2374_gen_type [252] = Y2374_pgtype50;
	Y2374_gen_type [253] = Y2374_pgtype51;
	Y2374_gen_type [254] = Y2374_pgtype52;
	Y2374_gen_type [255] = Y2374_pgtype53;
	Y2374_gen_type [256] = Y2374_pgtype54;
	Y2374_gen_type [257] = Y2374_pgtype55;
	Y2374_gen_type [258] = Y2374_pgtype56;
	Y2374_gen_type [259] = Y2374_pgtype57;
	Y2374_gen_type [260] = Y2374_pgtype58;
	Y2374_gen_type [261] = Y2374_pgtype59;
	Y2374_gen_type [262] = Y2374_pgtype60;
	Y2374_gen_type [263] = Y2374_pgtype61;
	Y2374_gen_type [264] = Y2374_pgtype62;
	Y2374_gen_type [265] = Y2374_pgtype63;
	Y2374_gen_type [266] = Y2374_pgtype64;
	Y2374_gen_type [267] = Y2374_pgtype65;
	Y2374_gen_type [268] = Y2374_pgtype66;
	Y2374_gen_type [269] = Y2374_pgtype67;
	Y2374_gen_type [270] = Y2374_pgtype68;
	Y2374_gen_type [271] = Y2374_pgtype69;
	Y2374_gen_type [272] = Y2374_pgtype70;
	Y2374_gen_type [273] = Y2374_pgtype71;
	Y2374_gen_type [274] = Y2374_pgtype72;
	Y2374_gen_type [275] = Y2374_pgtype73;
	Y2374_gen_type [276] = Y2374_pgtype74;
	Y2374_gen_type [277] = Y2374_pgtype75;
	Y2374_gen_type [278] = Y2374_pgtype76;
	Y2374_gen_type [279] = Y2374_pgtype77;
	Y2374_gen_type [280] = Y2374_pgtype78;
	Y2374_gen_type [281] = Y2374_pgtype79;
	Y2374_gen_type [282] = Y2374_pgtype80;
	Y2374_gen_type [283] = Y2374_pgtype81;
	Y2374_gen_type [284] = Y2374_pgtype82;
	Y2374_gen_type [285] = Y2374_pgtype83;
	Y2374_gen_type [286] = Y2374_pgtype84;
	Y2374_gen_type [287] = Y2374_pgtype85;
	Y2374_gen_type [288] = Y2374_pgtype86;
	Y2374_gen_type [289] = Y2374_pgtype87;
	Y2374_gen_type [290] = Y2374_pgtype88;
	Y2374_gen_type [291] = Y2374_pgtype89;
	Y2374_gen_type [292] = Y2374_pgtype90;
	Y2374_gen_type [293] = Y2374_pgtype91;
	Y2374_gen_type [294] = Y2374_pgtype92;
	Y2374_gen_type [295] = Y2374_pgtype93;
	Y2374_gen_type [296] = Y2374_pgtype94;
	Y2374_gen_type [297] = Y2374_pgtype95;
	Y2374_gen_type [298] = Y2374_pgtype96;
	Y2374_gen_type [299] = Y2374_pgtype97;
	Y2374_gen_type [300] = Y2374_pgtype98;
	Y2374_gen_type [301] = Y2374_pgtype99;
	Y2374_gen_type [302] = Y2374_pgtype100;
	Y2374_gen_type [303] = Y2374_pgtype101;
	Y2374_gen_type [304] = Y2374_pgtype102;
	Y2374_gen_type [305] = Y2374_pgtype103;
	Y2374_gen_type [306] = Y2374_pgtype104;
	Y2374_gen_type [307] = Y2374_pgtype105;
	Y2374_gen_type [308] = Y2374_pgtype106;
	Y2374_gen_type [309] = Y2374_pgtype107;
	Y2374_gen_type [310] = Y2374_pgtype108;
	Y2374_gen_type [311] = Y2374_pgtype109;
	Y2374_gen_type [312] = Y2374_pgtype110;
	Y2374_gen_type [313] = Y2374_pgtype111;
	Y2374_gen_type [316] = Y2374_pgtype112;
	Y2374_gen_type [317] = Y2374_pgtype113;
	Y2374_gen_type [318] = Y2374_pgtype114;
	Y2374_gen_type [319] = Y2374_pgtype115;
	Y2374_gen_type [320] = Y2374_pgtype116;
	Y2374_gen_type [321] = Y2374_pgtype117;
	Y2374_gen_type [322] = Y2374_pgtype118;
	Y2374_gen_type [323] = Y2374_pgtype119;
	Y2374_gen_type [324] = Y2374_pgtype120;
	Y2374_gen_type [325] = Y2374_pgtype121;
	Y2374_gen_type [326] = Y2374_pgtype122;
	Y2374_gen_type [327] = Y2374_pgtype123;
	Y2374_gen_type [328] = Y2374_pgtype124;
	Y2374_gen_type [329] = Y2374_pgtype125;
	Y2374_gen_type [330] = Y2374_pgtype126;
	Y2374_gen_type [331] = Y2374_pgtype127;
	Y2374_gen_type [332] = Y2374_pgtype128;
	Y2374_gen_type [333] = Y2374_pgtype129;
	Y2374_gen_type [334] = Y2374_pgtype130;
	Y2374_gen_type [335] = Y2374_pgtype131;
	Y2374_gen_type [336] = Y2374_pgtype132;
	Y2374_gen_type [337] = Y2374_pgtype133;
	Y2374_gen_type [338] = Y2374_pgtype134;
	Y2374_gen_type [613] = Y2374_pgtype135;
	Y2374_gen_type [615] = Y2374_pgtype136;
	{long i; for (i = 220; i < 314; i++) Y2374[i] = 828;};
	{long i; for (i = 321; i < 323; i++) Y2374[i] = 870;};
	Y2374[323] = 873;
	{long i; for (i = 324; i < 339; i++) Y2374[i] = 828;};
	Y2374[613] = 828;
	Y2374[615] = 828;
}

char *(*R2375[28])();
void R2375_init () {
	R2375[0] = (char *(*)()) F572_3637;
	R2375[1] = (char *(*)()) F573_3637_2375_1;
	R2375[2] = (char *(*)()) F574_3637_2375_1;
	R2375[13] = (char *(*)()) F585_4078;
	R2375[14] = (char *(*)()) F586_4078_2375_1;
	R2375[15] = (char *(*)()) F587_4078_2375_1;
	R2375[16] = (char *(*)()) F588_4078_2375_1;
	R2375[17] = (char *(*)()) F589_4078_2375_1;
	R2375[18] = (char *(*)()) F590_4078_2375_1;
	R2375[19] = (char *(*)()) F591_4078_2375_1;
	R2375[20] = (char *(*)()) F592_4078_2375_1;
	R2375[21] = (char *(*)()) F593_4078_2375_1;
	R2375[22] = (char *(*)()) F594_4078_2375_1;
	R2375[23] = (char *(*)()) F595_4078_2375_1;
	R2375[24] = (char *(*)()) F596_4078_2375_1;
	R2375[25] = (char *(*)()) F597_4078_2375_1;
	R2375[26] = (char *(*)()) F598_4078_2375_1;
	R2375[27] = (char *(*)()) F599_4078_2375_1;
}
static EIF_REFERENCE F573_3637_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F573_3637(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(828, 0x00).id, 828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F574_3637_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F574_3637(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(807, 0x00).id, 807, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F586_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F586_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(864, 0x00).id, 864, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F587_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F587_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(816, 0x00).id, 816, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F588_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F588_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(801, 0x00).id, 801, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F589_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F589_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(810, 0x00).id, 810, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F590_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F590_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(828, 0x00).id, 828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F591_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F591_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(813, 0x00).id, 813, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F592_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F592_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(825, 0x00).id, 825, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F593_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F593_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(795, 0x00).id, 795, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F594_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F594_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(822, 0x00).id, 822, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F595_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F595_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(831, 0x00).id, 831, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F596_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F596_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(804, 0x00).id, 804, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F597_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F597_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(807, 0x00).id, 807, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F598_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F598_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F599_4078_2375_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F599_4078(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(819, 0x00).id, 819, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}

static EIF_TYPE_INDEX Y2375_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2375_pgtype128[] = {0xFFF8,1,0xFFFF};
EIF_TYPE_INDEX *Y2375_gen_type [602];
EIF_TYPE_INDEX Y2375 [602];
void Y2375_init (void)
{
	egc_routines_types [2375] = Y2375;
	egc_routines_gen_types [2375] = Y2375_gen_type;
	egc_routines_offset [2375] = 278;
	Y2375_gen_type [0] = Y2375_pgtype0;
	Y2375_gen_type [1] = Y2375_pgtype1;
	Y2375_gen_type [2] = Y2375_pgtype2;
	Y2375_gen_type [3] = Y2375_pgtype3;
	Y2375_gen_type [4] = Y2375_pgtype4;
	Y2375_gen_type [5] = Y2375_pgtype5;
	Y2375_gen_type [6] = Y2375_pgtype6;
	Y2375_gen_type [7] = Y2375_pgtype7;
	Y2375_gen_type [8] = Y2375_pgtype8;
	Y2375_gen_type [9] = Y2375_pgtype9;
	Y2375_gen_type [10] = Y2375_pgtype10;
	Y2375_gen_type [11] = Y2375_pgtype11;
	Y2375_gen_type [12] = Y2375_pgtype12;
	Y2375_gen_type [13] = Y2375_pgtype13;
	Y2375_gen_type [14] = Y2375_pgtype14;
	Y2375_gen_type [15] = Y2375_pgtype15;
	Y2375_gen_type [16] = Y2375_pgtype16;
	Y2375_gen_type [17] = Y2375_pgtype17;
	Y2375_gen_type [18] = Y2375_pgtype18;
	Y2375_gen_type [19] = Y2375_pgtype19;
	Y2375_gen_type [20] = Y2375_pgtype20;
	Y2375_gen_type [21] = Y2375_pgtype21;
	Y2375_gen_type [22] = Y2375_pgtype22;
	Y2375_gen_type [23] = Y2375_pgtype23;
	Y2375_gen_type [24] = Y2375_pgtype24;
	Y2375_gen_type [25] = Y2375_pgtype25;
	Y2375_gen_type [26] = Y2375_pgtype26;
	Y2375_gen_type [27] = Y2375_pgtype27;
	Y2375_gen_type [28] = Y2375_pgtype28;
	Y2375_gen_type [29] = Y2375_pgtype29;
	Y2375_gen_type [77] = Y2375_pgtype30;
	Y2375_gen_type [78] = Y2375_pgtype31;
	Y2375_gen_type [79] = Y2375_pgtype32;
	Y2375_gen_type [80] = Y2375_pgtype33;
	Y2375_gen_type [156] = Y2375_pgtype34;
	Y2375_gen_type [157] = Y2375_pgtype35;
	Y2375_gen_type [158] = Y2375_pgtype36;
	Y2375_gen_type [159] = Y2375_pgtype37;
	Y2375_gen_type [160] = Y2375_pgtype38;
	Y2375_gen_type [161] = Y2375_pgtype39;
	Y2375_gen_type [162] = Y2375_pgtype40;
	Y2375_gen_type [163] = Y2375_pgtype41;
	Y2375_gen_type [164] = Y2375_pgtype42;
	Y2375_gen_type [165] = Y2375_pgtype43;
	Y2375_gen_type [166] = Y2375_pgtype44;
	Y2375_gen_type [167] = Y2375_pgtype45;
	Y2375_gen_type [168] = Y2375_pgtype46;
	Y2375_gen_type [169] = Y2375_pgtype47;
	Y2375_gen_type [170] = Y2375_pgtype48;
	Y2375_gen_type [171] = Y2375_pgtype49;
	Y2375_gen_type [233] = Y2375_pgtype50;
	Y2375_gen_type [234] = Y2375_pgtype51;
	Y2375_gen_type [235] = Y2375_pgtype52;
	Y2375_gen_type [236] = Y2375_pgtype53;
	Y2375_gen_type [237] = Y2375_pgtype54;
	Y2375_gen_type [238] = Y2375_pgtype55;
	Y2375_gen_type [239] = Y2375_pgtype56;
	Y2375_gen_type [240] = Y2375_pgtype57;
	Y2375_gen_type [241] = Y2375_pgtype58;
	Y2375_gen_type [242] = Y2375_pgtype59;
	Y2375_gen_type [243] = Y2375_pgtype60;
	Y2375_gen_type [244] = Y2375_pgtype61;
	Y2375_gen_type [245] = Y2375_pgtype62;
	Y2375_gen_type [246] = Y2375_pgtype63;
	Y2375_gen_type [247] = Y2375_pgtype64;
	Y2375_gen_type [248] = Y2375_pgtype65;
	Y2375_gen_type [249] = Y2375_pgtype66;
	Y2375_gen_type [250] = Y2375_pgtype67;
	Y2375_gen_type [251] = Y2375_pgtype68;
	Y2375_gen_type [252] = Y2375_pgtype69;
	Y2375_gen_type [253] = Y2375_pgtype70;
	Y2375_gen_type [254] = Y2375_pgtype71;
	Y2375_gen_type [255] = Y2375_pgtype72;
	Y2375_gen_type [256] = Y2375_pgtype73;
	Y2375_gen_type [257] = Y2375_pgtype74;
	Y2375_gen_type [258] = Y2375_pgtype75;
	Y2375_gen_type [259] = Y2375_pgtype76;
	Y2375_gen_type [260] = Y2375_pgtype77;
	Y2375_gen_type [261] = Y2375_pgtype78;
	Y2375_gen_type [262] = Y2375_pgtype79;
	Y2375_gen_type [263] = Y2375_pgtype80;
	Y2375_gen_type [264] = Y2375_pgtype81;
	Y2375_gen_type [265] = Y2375_pgtype82;
	Y2375_gen_type [266] = Y2375_pgtype83;
	Y2375_gen_type [267] = Y2375_pgtype84;
	Y2375_gen_type [268] = Y2375_pgtype85;
	Y2375_gen_type [269] = Y2375_pgtype86;
	Y2375_gen_type [270] = Y2375_pgtype87;
	Y2375_gen_type [271] = Y2375_pgtype88;
	Y2375_gen_type [272] = Y2375_pgtype89;
	Y2375_gen_type [273] = Y2375_pgtype90;
	Y2375_gen_type [274] = Y2375_pgtype91;
	Y2375_gen_type [275] = Y2375_pgtype92;
	Y2375_gen_type [276] = Y2375_pgtype93;
	Y2375_gen_type [277] = Y2375_pgtype94;
	Y2375_gen_type [278] = Y2375_pgtype95;
	Y2375_gen_type [279] = Y2375_pgtype96;
	Y2375_gen_type [280] = Y2375_pgtype97;
	Y2375_gen_type [281] = Y2375_pgtype98;
	Y2375_gen_type [282] = Y2375_pgtype99;
	Y2375_gen_type [283] = Y2375_pgtype100;
	Y2375_gen_type [284] = Y2375_pgtype101;
	Y2375_gen_type [285] = Y2375_pgtype102;
	Y2375_gen_type [286] = Y2375_pgtype103;
	Y2375_gen_type [287] = Y2375_pgtype104;
	Y2375_gen_type [288] = Y2375_pgtype105;
	Y2375_gen_type [289] = Y2375_pgtype106;
	Y2375_gen_type [290] = Y2375_pgtype107;
	Y2375_gen_type [291] = Y2375_pgtype108;
	Y2375_gen_type [292] = Y2375_pgtype109;
	Y2375_gen_type [293] = Y2375_pgtype110;
	Y2375_gen_type [294] = Y2375_pgtype111;
	Y2375_gen_type [295] = Y2375_pgtype112;
	Y2375_gen_type [297] = Y2375_pgtype113;
	Y2375_gen_type [306] = Y2375_pgtype114;
	Y2375_gen_type [307] = Y2375_pgtype115;
	Y2375_gen_type [308] = Y2375_pgtype116;
	Y2375_gen_type [309] = Y2375_pgtype117;
	Y2375_gen_type [310] = Y2375_pgtype118;
	Y2375_gen_type [311] = Y2375_pgtype119;
	Y2375_gen_type [312] = Y2375_pgtype120;
	Y2375_gen_type [313] = Y2375_pgtype121;
	Y2375_gen_type [314] = Y2375_pgtype122;
	Y2375_gen_type [315] = Y2375_pgtype123;
	Y2375_gen_type [316] = Y2375_pgtype124;
	Y2375_gen_type [317] = Y2375_pgtype125;
	Y2375_gen_type [318] = Y2375_pgtype126;
	Y2375_gen_type [319] = Y2375_pgtype127;
	Y2375_gen_type [320] = Y2375_pgtype128;
	Y2375[337] = 828;
	{long i; for (i = 463; i < 466; i++) Y2375[i] = 801;};
	Y2375[601] = 801;
}

char *(*R2381[28])();
void R2381_init () {
	R2381[0] = (char *(*)()) F572_3641;
	R2381[1] = (char *(*)()) F573_3641;
	R2381[2] = (char *(*)()) F574_3641;
	R2381[13] = (char *(*)()) F585_4084;
	R2381[14] = (char *(*)()) F586_4084;
	R2381[15] = (char *(*)()) F587_4084;
	R2381[16] = (char *(*)()) F588_4084;
	R2381[17] = (char *(*)()) F589_4084;
	R2381[18] = (char *(*)()) F590_4084;
	R2381[19] = (char *(*)()) F591_4084;
	R2381[20] = (char *(*)()) F592_4084;
	R2381[21] = (char *(*)()) F593_4084;
	R2381[22] = (char *(*)()) F594_4084;
	R2381[23] = (char *(*)()) F595_4084;
	R2381[24] = (char *(*)()) F596_4084;
	R2381[25] = (char *(*)()) F597_4084;
	R2381[26] = (char *(*)()) F598_4084;
	R2381[27] = (char *(*)()) F599_4084;
}

static EIF_TYPE_INDEX Y2381_pgtype0[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype1[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype2[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype3[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype4[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype5[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype6[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype7[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype8[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype9[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype10[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype11[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype12[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype13[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype14[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype15[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype16[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype17[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype18[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype19[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype20[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype21[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype22[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype23[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype24[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype25[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype26[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype27[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype28[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype29[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype30[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype31[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype32[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype33[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype34[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype35[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype36[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype37[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype38[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype39[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype40[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype41[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype42[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype43[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype44[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype45[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype46[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype47[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype48[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype49[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype50[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype51[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype52[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype53[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype54[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype55[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype56[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype57[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype58[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype59[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype60[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype61[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype62[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype63[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype64[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype65[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype66[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype67[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype68[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype69[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype70[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype71[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype72[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype73[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype74[] = {0xFF01,165,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype75[] = {0xFF01,168,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype76[] = {0xFF01,169,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype77[] = {0xFF01,170,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype78[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype79[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype80[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype81[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype82[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype83[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype84[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype85[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype86[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype87[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype88[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype89[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype90[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype91[] = {0xFF01,167,0xFFFF};
static EIF_TYPE_INDEX Y2381_pgtype92[] = {0xFF01,167,0xFFFF};
EIF_TYPE_INDEX *Y2381_gen_type [306];
EIF_TYPE_INDEX Y2381 [306];
void Y2381_init (void)
{
	egc_routines_types [2381] = Y2381;
	egc_routines_gen_types [2381] = Y2381_gen_type;
	egc_routines_offset [2381] = 293;
	Y2381_gen_type [0] = Y2381_pgtype0;
	Y2381_gen_type [1] = Y2381_pgtype1;
	Y2381_gen_type [2] = Y2381_pgtype2;
	Y2381_gen_type [3] = Y2381_pgtype3;
	Y2381_gen_type [4] = Y2381_pgtype4;
	Y2381_gen_type [5] = Y2381_pgtype5;
	Y2381_gen_type [6] = Y2381_pgtype6;
	Y2381_gen_type [7] = Y2381_pgtype7;
	Y2381_gen_type [8] = Y2381_pgtype8;
	Y2381_gen_type [9] = Y2381_pgtype9;
	Y2381_gen_type [10] = Y2381_pgtype10;
	Y2381_gen_type [11] = Y2381_pgtype11;
	Y2381_gen_type [12] = Y2381_pgtype12;
	Y2381_gen_type [13] = Y2381_pgtype13;
	Y2381_gen_type [14] = Y2381_pgtype14;
	Y2381_gen_type [218] = Y2381_pgtype15;
	Y2381_gen_type [219] = Y2381_pgtype16;
	Y2381_gen_type [220] = Y2381_pgtype17;
	Y2381_gen_type [221] = Y2381_pgtype18;
	Y2381_gen_type [222] = Y2381_pgtype19;
	Y2381_gen_type [223] = Y2381_pgtype20;
	Y2381_gen_type [224] = Y2381_pgtype21;
	Y2381_gen_type [225] = Y2381_pgtype22;
	Y2381_gen_type [226] = Y2381_pgtype23;
	Y2381_gen_type [227] = Y2381_pgtype24;
	Y2381_gen_type [228] = Y2381_pgtype25;
	Y2381_gen_type [229] = Y2381_pgtype26;
	Y2381_gen_type [230] = Y2381_pgtype27;
	Y2381_gen_type [231] = Y2381_pgtype28;
	Y2381_gen_type [232] = Y2381_pgtype29;
	Y2381_gen_type [233] = Y2381_pgtype30;
	Y2381_gen_type [234] = Y2381_pgtype31;
	Y2381_gen_type [235] = Y2381_pgtype32;
	Y2381_gen_type [236] = Y2381_pgtype33;
	Y2381_gen_type [237] = Y2381_pgtype34;
	Y2381_gen_type [238] = Y2381_pgtype35;
	Y2381_gen_type [239] = Y2381_pgtype36;
	Y2381_gen_type [240] = Y2381_pgtype37;
	Y2381_gen_type [241] = Y2381_pgtype38;
	Y2381_gen_type [242] = Y2381_pgtype39;
	Y2381_gen_type [243] = Y2381_pgtype40;
	Y2381_gen_type [244] = Y2381_pgtype41;
	Y2381_gen_type [245] = Y2381_pgtype42;
	Y2381_gen_type [246] = Y2381_pgtype43;
	Y2381_gen_type [247] = Y2381_pgtype44;
	Y2381_gen_type [248] = Y2381_pgtype45;
	Y2381_gen_type [249] = Y2381_pgtype46;
	Y2381_gen_type [250] = Y2381_pgtype47;
	Y2381_gen_type [251] = Y2381_pgtype48;
	Y2381_gen_type [252] = Y2381_pgtype49;
	Y2381_gen_type [253] = Y2381_pgtype50;
	Y2381_gen_type [254] = Y2381_pgtype51;
	Y2381_gen_type [255] = Y2381_pgtype52;
	Y2381_gen_type [256] = Y2381_pgtype53;
	Y2381_gen_type [257] = Y2381_pgtype54;
	Y2381_gen_type [258] = Y2381_pgtype55;
	Y2381_gen_type [259] = Y2381_pgtype56;
	Y2381_gen_type [260] = Y2381_pgtype57;
	Y2381_gen_type [261] = Y2381_pgtype58;
	Y2381_gen_type [262] = Y2381_pgtype59;
	Y2381_gen_type [263] = Y2381_pgtype60;
	Y2381_gen_type [264] = Y2381_pgtype61;
	Y2381_gen_type [265] = Y2381_pgtype62;
	Y2381_gen_type [266] = Y2381_pgtype63;
	Y2381_gen_type [267] = Y2381_pgtype64;
	Y2381_gen_type [268] = Y2381_pgtype65;
	Y2381_gen_type [269] = Y2381_pgtype66;
	Y2381_gen_type [270] = Y2381_pgtype67;
	Y2381_gen_type [271] = Y2381_pgtype68;
	Y2381_gen_type [272] = Y2381_pgtype69;
	Y2381_gen_type [273] = Y2381_pgtype70;
	Y2381_gen_type [274] = Y2381_pgtype71;
	Y2381_gen_type [275] = Y2381_pgtype72;
	Y2381_gen_type [276] = Y2381_pgtype73;
	Y2381_gen_type [277] = Y2381_pgtype74;
	Y2381_gen_type [278] = Y2381_pgtype75;
	Y2381_gen_type [279] = Y2381_pgtype76;
	Y2381_gen_type [280] = Y2381_pgtype77;
	Y2381_gen_type [291] = Y2381_pgtype78;
	Y2381_gen_type [292] = Y2381_pgtype79;
	Y2381_gen_type [293] = Y2381_pgtype80;
	Y2381_gen_type [294] = Y2381_pgtype81;
	Y2381_gen_type [295] = Y2381_pgtype82;
	Y2381_gen_type [296] = Y2381_pgtype83;
	Y2381_gen_type [297] = Y2381_pgtype84;
	Y2381_gen_type [298] = Y2381_pgtype85;
	Y2381_gen_type [299] = Y2381_pgtype86;
	Y2381_gen_type [300] = Y2381_pgtype87;
	Y2381_gen_type [301] = Y2381_pgtype88;
	Y2381_gen_type [302] = Y2381_pgtype89;
	Y2381_gen_type [303] = Y2381_pgtype90;
	Y2381_gen_type [304] = Y2381_pgtype91;
	Y2381_gen_type [305] = Y2381_pgtype92;
	{long i; for (i = 0; i < 15; i++) Y2381[i] = 165;};
	{long i; for (i = 218; i < 278; i++) Y2381[i] = 165;};
	Y2381[278] = 168;
	Y2381[279] = 169;
	Y2381[280] = 170;
	{long i; for (i = 291; i < 306; i++) Y2381[i] = 167;};
}

char *(*R2383[28])();
void R2383_init () {
	R2383[0] = (char *(*)()) F572_3660;
	R2383[1] = (char *(*)()) F573_3660;
	R2383[2] = (char *(*)()) F574_3660;
	R2383[13] = (char *(*)()) F585_4109;
	R2383[14] = (char *(*)()) F586_4109;
	R2383[15] = (char *(*)()) F587_4109;
	R2383[16] = (char *(*)()) F588_4109;
	R2383[17] = (char *(*)()) F589_4109;
	R2383[18] = (char *(*)()) F590_4109;
	R2383[19] = (char *(*)()) F591_4109;
	R2383[20] = (char *(*)()) F592_4109;
	R2383[21] = (char *(*)()) F593_4109;
	R2383[22] = (char *(*)()) F594_4109;
	R2383[23] = (char *(*)()) F595_4109;
	R2383[24] = (char *(*)()) F596_4109;
	R2383[25] = (char *(*)()) F597_4109;
	R2383[26] = (char *(*)()) F598_4109;
	R2383[27] = (char *(*)()) F599_4109;
}

char *(*R2386[385])();
void R2386_init () {
	R2386[0] = (char *(*)()) F496_3269;
	R2386[1] = (char *(*)()) F497_3318;
	R2386[2] = (char *(*)()) F498_3318;
	R2386[3] = (char *(*)()) F499_3318;
	R2386[4] = (char *(*)()) F500_3318;
	R2386[5] = (char *(*)()) F501_3318;
	R2386[6] = (char *(*)()) F502_3318;
	R2386[7] = (char *(*)()) F503_3318;
	R2386[8] = (char *(*)()) F504_3318;
	R2386[9] = (char *(*)()) F505_3318;
	R2386[10] = (char *(*)()) F506_3318;
	R2386[11] = (char *(*)()) F507_3318;
	R2386[12] = (char *(*)()) F508_3318;
	R2386[13] = (char *(*)()) F509_3318;
	R2386[14] = (char *(*)()) F510_3318;
	R2386[15] = (char *(*)()) F511_3318;
	R2386[76] = (char *(*)()) F572_3644;
	R2386[77] = (char *(*)()) F573_3644;
	R2386[78] = (char *(*)()) F574_3644;
	R2386[80] = (char *(*)()) F576_3895;
	R2386[81] = (char *(*)()) F577_3941;
	R2386[82] = (char *(*)()) F578_3941;
	R2386[83] = (char *(*)()) F579_3941;
	R2386[84] = (char *(*)()) F580_3941;
	R2386[85] = (char *(*)()) F581_3941;
	R2386[86] = (char *(*)()) F577_3941;
	R2386[87] = (char *(*)()) F580_3941;
	R2386[88] = (char *(*)()) F577_3941;
	R2386[89] = (char *(*)()) F585_4094;
	R2386[90] = (char *(*)()) F586_4094;
	R2386[91] = (char *(*)()) F587_4094;
	R2386[92] = (char *(*)()) F588_4094;
	R2386[93] = (char *(*)()) F589_4094;
	R2386[94] = (char *(*)()) F590_4094;
	R2386[95] = (char *(*)()) F591_4094;
	R2386[96] = (char *(*)()) F592_4094;
	R2386[97] = (char *(*)()) F593_4094;
	R2386[98] = (char *(*)()) F594_4094;
	R2386[99] = (char *(*)()) F595_4094;
	R2386[100] = (char *(*)()) F596_4094;
	R2386[101] = (char *(*)()) F597_4094;
	R2386[102] = (char *(*)()) F598_4094;
	R2386[103] = (char *(*)()) F599_4094;
	{long i; for (i = 247; i < 249; i++) R2386[i] = (char *(*)()) F742_4931;}
	R2386[378] = (char *(*)()) F872_6626;
	R2386[380] = (char *(*)()) F875_6867;
	R2386[384] = (char *(*)()) F880_7036;
}

char *(*R2389[381])();
void R2389_init () {
	R2389[0] = (char *(*)()) F496_3268;
	R2389[1] = (char *(*)()) F497_3319;
	R2389[2] = (char *(*)()) F498_3319;
	R2389[3] = (char *(*)()) F499_3319;
	R2389[4] = (char *(*)()) F500_3319;
	R2389[5] = (char *(*)()) F501_3319;
	R2389[6] = (char *(*)()) F502_3319;
	R2389[7] = (char *(*)()) F503_3319;
	R2389[8] = (char *(*)()) F504_3319;
	R2389[9] = (char *(*)()) F505_3319;
	R2389[10] = (char *(*)()) F506_3319;
	R2389[11] = (char *(*)()) F507_3319;
	R2389[12] = (char *(*)()) F508_3319;
	R2389[13] = (char *(*)()) F509_3319;
	R2389[14] = (char *(*)()) F510_3319;
	R2389[15] = (char *(*)()) F511_3319;
	R2389[80] = (char *(*)()) F576_3896;
	R2389[89] = (char *(*)()) F585_4095;
	R2389[90] = (char *(*)()) F586_4095;
	R2389[91] = (char *(*)()) F587_4095;
	R2389[92] = (char *(*)()) F588_4095;
	R2389[93] = (char *(*)()) F589_4095;
	R2389[94] = (char *(*)()) F590_4095;
	R2389[95] = (char *(*)()) F591_4095;
	R2389[96] = (char *(*)()) F592_4095;
	R2389[97] = (char *(*)()) F593_4095;
	R2389[98] = (char *(*)()) F594_4095;
	R2389[99] = (char *(*)()) F595_4095;
	R2389[100] = (char *(*)()) F596_4095;
	R2389[101] = (char *(*)()) F597_4095;
	R2389[102] = (char *(*)()) F598_4095;
	R2389[103] = (char *(*)()) F599_4095;
	R2389[378] = (char *(*)()) F872_6625;
	R2389[380] = (char *(*)()) F875_6866;
}

char *(*R2408[3])();
void R2408_init () {
	R2408[0] = (char *(*)()) F572_3648;
	R2408[1] = (char *(*)()) F573_3648;
	R2408[2] = (char *(*)()) F574_3648;
}

char *(*R2409[28])();
void R2409_init () {
	R2409[0] = (char *(*)()) F572_3654;
	R2409[1] = (char *(*)()) F573_3654;
	R2409[2] = (char *(*)()) F574_3654;
	R2409[13] = (char *(*)()) F585_4104;
	R2409[14] = (char *(*)()) F586_4104;
	R2409[15] = (char *(*)()) F587_4104;
	R2409[16] = (char *(*)()) F588_4104;
	R2409[17] = (char *(*)()) F589_4104;
	R2409[18] = (char *(*)()) F590_4104;
	R2409[19] = (char *(*)()) F591_4104;
	R2409[20] = (char *(*)()) F592_4104;
	R2409[21] = (char *(*)()) F593_4104;
	R2409[22] = (char *(*)()) F594_4104;
	R2409[23] = (char *(*)()) F595_4104;
	R2409[24] = (char *(*)()) F596_4104;
	R2409[25] = (char *(*)()) F597_4104;
	R2409[26] = (char *(*)()) F598_4104;
	R2409[27] = (char *(*)()) F599_4104;
}

char *(*R2419[45])();
void R2419_init () {
	R2419[0] = (char *(*)()) F572_3640;
	R2419[1] = (char *(*)()) F573_3640;
	R2419[2] = (char *(*)()) F574_3640;
	R2419[13] = (char *(*)()) F585_4083;
	R2419[14] = (char *(*)()) F586_4083;
	R2419[15] = (char *(*)()) F587_4083;
	R2419[16] = (char *(*)()) F588_4083;
	R2419[17] = (char *(*)()) F589_4083;
	R2419[18] = (char *(*)()) F590_4083;
	R2419[19] = (char *(*)()) F591_4083;
	R2419[20] = (char *(*)()) F592_4083;
	R2419[21] = (char *(*)()) F593_4083;
	R2419[22] = (char *(*)()) F594_4083;
	R2419[23] = (char *(*)()) F595_4083;
	R2419[24] = (char *(*)()) F596_4083;
	R2419[25] = (char *(*)()) F597_4083;
	R2419[26] = (char *(*)()) F598_4083;
	R2419[27] = (char *(*)()) F599_4083;
	R2419[44] = (char *(*)()) F450_2876;
}

char *(*R2423[45])();
void R2423_init () {
	R2423[0] = (char *(*)()) F572_3646;
	R2423[1] = (char *(*)()) F573_3646;
	R2423[2] = (char *(*)()) F574_3646;
	R2423[13] = (char *(*)()) F542_3452;
	R2423[14] = (char *(*)()) F543_3452;
	R2423[15] = (char *(*)()) F544_3452;
	R2423[16] = (char *(*)()) F545_3452;
	R2423[17] = (char *(*)()) F546_3452;
	R2423[18] = (char *(*)()) F547_3452;
	R2423[19] = (char *(*)()) F548_3452;
	R2423[20] = (char *(*)()) F549_3452;
	R2423[21] = (char *(*)()) F550_3452;
	R2423[22] = (char *(*)()) F551_3452;
	R2423[23] = (char *(*)()) F552_3452;
	R2423[24] = (char *(*)()) F553_3452;
	R2423[25] = (char *(*)()) F554_3452;
	R2423[26] = (char *(*)()) F555_3452;
	R2423[27] = (char *(*)()) F556_3452;
	R2423[44] = (char *(*)()) F450_2878;
}

char *(*R2424[3])();
void R2424_init () {
	R2424[0] = (char *(*)()) F572_3655;
	R2424[1] = (char *(*)()) F573_3655;
	R2424[2] = (char *(*)()) F574_3655;
}

char *(*R2425[45])();
void R2425_init () {
	R2425[0] = (char *(*)()) F572_3656;
	R2425[1] = (char *(*)()) F573_3656;
	R2425[2] = (char *(*)()) F574_3656;
	R2425[13] = (char *(*)()) F585_4106;
	R2425[14] = (char *(*)()) F586_4106;
	R2425[15] = (char *(*)()) F587_4106;
	R2425[16] = (char *(*)()) F588_4106;
	R2425[17] = (char *(*)()) F589_4106;
	R2425[18] = (char *(*)()) F590_4106;
	R2425[19] = (char *(*)()) F591_4106;
	R2425[20] = (char *(*)()) F592_4106;
	R2425[21] = (char *(*)()) F593_4106;
	R2425[22] = (char *(*)()) F594_4106;
	R2425[23] = (char *(*)()) F595_4106;
	R2425[24] = (char *(*)()) F596_4106;
	R2425[25] = (char *(*)()) F597_4106;
	R2425[26] = (char *(*)()) F598_4106;
	R2425[27] = (char *(*)()) F599_4106;
	R2425[44] = (char *(*)()) F450_2884;
}

char *(*R2673[414])();
void R2673_init () {
	R2673[0] = (char *(*)()) F466_3205;
	R2673[1] = (char *(*)()) F467_3205_2673_47;
	R2673[2] = (char *(*)()) F468_3205_2673_47;
	R2673[3] = (char *(*)()) F469_3205_2673_47;
	R2673[4] = (char *(*)()) F470_3205_2673_47;
	R2673[5] = (char *(*)()) F471_3205_2673_47;
	R2673[6] = (char *(*)()) F472_3205_2673_47;
	R2673[7] = (char *(*)()) F473_3205_2673_47;
	R2673[8] = (char *(*)()) F474_3205_2673_47;
	R2673[9] = (char *(*)()) F475_3205_2673_47;
	R2673[10] = (char *(*)()) F476_3205_2673_47;
	R2673[11] = (char *(*)()) F477_3205_2673_47;
	R2673[12] = (char *(*)()) F478_3205_2673_47;
	R2673[13] = (char *(*)()) F479_3205_2673_47;
	R2673[14] = (char *(*)()) F480_3205_2673_47;
	R2673[31] = (char *(*)()) F497_3311;
	R2673[32] = (char *(*)()) F498_3311_2673_47;
	R2673[33] = (char *(*)()) F499_3311_2673_47;
	R2673[34] = (char *(*)()) F500_3311_2673_47;
	R2673[35] = (char *(*)()) F501_3311_2673_47;
	R2673[36] = (char *(*)()) F502_3311_2673_47;
	R2673[37] = (char *(*)()) F503_3311_2673_47;
	R2673[38] = (char *(*)()) F504_3311_2673_47;
	R2673[39] = (char *(*)()) F505_3311_2673_47;
	R2673[40] = (char *(*)()) F506_3311_2673_47;
	R2673[41] = (char *(*)()) F507_3311_2673_47;
	R2673[42] = (char *(*)()) F508_3311_2673_47;
	R2673[43] = (char *(*)()) F509_3311_2673_47;
	R2673[44] = (char *(*)()) F510_3311_2673_47;
	R2673[45] = (char *(*)()) F511_3311_2673_47;
	R2673[119] = (char *(*)()) F585_4079;
	R2673[120] = (char *(*)()) F586_4079_2673_47;
	R2673[121] = (char *(*)()) F587_4079_2673_47;
	R2673[122] = (char *(*)()) F588_4079_2673_47;
	R2673[123] = (char *(*)()) F589_4079_2673_47;
	R2673[124] = (char *(*)()) F590_4079_2673_47;
	R2673[125] = (char *(*)()) F591_4079_2673_47;
	R2673[126] = (char *(*)()) F592_4079_2673_47;
	R2673[127] = (char *(*)()) F593_4079_2673_47;
	R2673[128] = (char *(*)()) F594_4079_2673_47;
	R2673[129] = (char *(*)()) F595_4079_2673_47;
	R2673[130] = (char *(*)()) F596_4079_2673_47;
	R2673[131] = (char *(*)()) F597_4079_2673_47;
	R2673[132] = (char *(*)()) F598_4079_2673_47;
	R2673[133] = (char *(*)()) F599_4079_2673_47;
	R2673[327] = (char *(*)()) F793_5317;
	R2673[410] = (char *(*)()) F876_6904_2673_47;
	R2673[413] = (char *(*)()) F879_7015_2673_47;
}
static EIF_REFERENCE F467_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F467_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(864, 0x00).id, 864, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F468_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F468_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(816, 0x00).id, 816, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F469_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F469_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(801, 0x00).id, 801, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F470_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F470_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(810, 0x00).id, 810, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F471_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F471_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(828, 0x00).id, 828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F472_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F472_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(813, 0x00).id, 813, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F473_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F473_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(825, 0x00).id, 825, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F474_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F474_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(795, 0x00).id, 795, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F475_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F475_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(822, 0x00).id, 822, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F476_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F476_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(831, 0x00).id, 831, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F477_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F477_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(804, 0x00).id, 804, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F478_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F478_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(807, 0x00).id, 807, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F479_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F479_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F480_3205_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F480_3205(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(819, 0x00).id, 819, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F498_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F498_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(864, 0x00).id, 864, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F499_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F499_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(816, 0x00).id, 816, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F500_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F500_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(801, 0x00).id, 801, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F501_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F501_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(810, 0x00).id, 810, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F502_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F502_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(828, 0x00).id, 828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F503_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F503_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(813, 0x00).id, 813, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F504_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F504_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(825, 0x00).id, 825, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F505_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F505_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(795, 0x00).id, 795, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F506_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F506_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(822, 0x00).id, 822, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F507_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F507_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(831, 0x00).id, 831, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F508_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F508_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(804, 0x00).id, 804, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F509_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F509_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(807, 0x00).id, 807, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F510_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F510_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F511_3311_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F511_3311(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(819, 0x00).id, 819, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F586_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F586_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(864, 0x00).id, 864, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F587_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F587_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(816, 0x00).id, 816, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F588_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F588_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(801, 0x00).id, 801, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F589_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F589_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(810, 0x00).id, 810, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F590_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F590_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(828, 0x00).id, 828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F591_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F591_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(813, 0x00).id, 813, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F592_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F592_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(825, 0x00).id, 825, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F593_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F593_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(795, 0x00).id, 795, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F594_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F594_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(822, 0x00).id, 822, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F595_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F595_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(831, 0x00).id, 831, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F596_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F596_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(804, 0x00).id, 804, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F597_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F597_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(807, 0x00).id, 807, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F598_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F598_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F599_4079_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F599_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(819, 0x00).id, 819, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F876_6904_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F876_6904(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F879_7015_2673_47 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F879_7015(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(798, 0x00).id, 798, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R2674[414])();
void R2674_init () {
	R2674[0] = (char *(*)()) F466_3213;
	R2674[1] = (char *(*)()) F467_3213;
	R2674[2] = (char *(*)()) F468_3213;
	R2674[3] = (char *(*)()) F469_3213;
	R2674[4] = (char *(*)()) F470_3213;
	R2674[5] = (char *(*)()) F471_3213;
	R2674[6] = (char *(*)()) F472_3213;
	R2674[7] = (char *(*)()) F473_3213;
	R2674[8] = (char *(*)()) F474_3213;
	R2674[9] = (char *(*)()) F475_3213;
	R2674[10] = (char *(*)()) F476_3213;
	R2674[11] = (char *(*)()) F477_3213;
	R2674[12] = (char *(*)()) F478_3213;
	R2674[13] = (char *(*)()) F479_3213;
	R2674[14] = (char *(*)()) F480_3213;
	R2674[30] = (char *(*)()) F496_3260;
	R2674[31] = (char *(*)()) F497_3316;
	R2674[32] = (char *(*)()) F498_3316;
	R2674[33] = (char *(*)()) F499_3316;
	R2674[34] = (char *(*)()) F500_3316;
	R2674[35] = (char *(*)()) F501_3316;
	R2674[36] = (char *(*)()) F502_3316;
	R2674[37] = (char *(*)()) F503_3316;
	R2674[38] = (char *(*)()) F504_3316;
	R2674[39] = (char *(*)()) F505_3316;
	R2674[40] = (char *(*)()) F506_3316;
	R2674[41] = (char *(*)()) F507_3316;
	R2674[42] = (char *(*)()) F508_3316;
	R2674[43] = (char *(*)()) F509_3316;
	R2674[44] = (char *(*)()) F510_3316;
	R2674[45] = (char *(*)()) F511_3316;
	R2674[106] = (char *(*)()) F512_3382;
	R2674[107] = (char *(*)()) F517_3382;
	R2674[108] = (char *(*)()) F524_3382;
	R2674[111] = (char *(*)()) F577_3944;
	R2674[112] = (char *(*)()) F578_3944;
	R2674[113] = (char *(*)()) F579_3944;
	R2674[114] = (char *(*)()) F580_3944;
	R2674[115] = (char *(*)()) F581_3944;
	R2674[116] = (char *(*)()) F577_3944;
	R2674[117] = (char *(*)()) F580_3944;
	R2674[118] = (char *(*)()) F577_3944;
	R2674[119] = (char *(*)()) F512_3382;
	R2674[120] = (char *(*)()) F513_3382;
	R2674[121] = (char *(*)()) F514_3382;
	R2674[122] = (char *(*)()) F515_3382;
	R2674[123] = (char *(*)()) F516_3382;
	R2674[124] = (char *(*)()) F517_3382;
	R2674[125] = (char *(*)()) F518_3382;
	R2674[126] = (char *(*)()) F519_3382;
	R2674[127] = (char *(*)()) F520_3382;
	R2674[128] = (char *(*)()) F521_3382;
	R2674[129] = (char *(*)()) F522_3382;
	R2674[130] = (char *(*)()) F523_3382;
	R2674[131] = (char *(*)()) F524_3382;
	R2674[132] = (char *(*)()) F525_3382;
	R2674[133] = (char *(*)()) F526_3382;
	R2674[327] = (char *(*)()) F793_5347;
	R2674[408] = (char *(*)()) F872_6628;
	R2674[410] = (char *(*)()) F875_6869;
	R2674[412] = (char *(*)()) F872_6628;
	R2674[413] = (char *(*)()) F875_6869;
}

EIF_TYPE_INDEX *Y2674_gen_type [429];
EIF_TYPE_INDEX Y2674 [429];
void Y2674_init (void)
{
	egc_routines_types [2674] = Y2674;
	egc_routines_gen_types [2674] = Y2674_gen_type;
	egc_routines_offset [2674] = 450;
	{long i; for (i = 0; i < 124; i++) Y2674[i] = 828;};
	{long i; for (i = 126; i < 149; i++) Y2674[i] = 828;};
	Y2674[342] = 828;
	Y2674[421] = 828;
	{long i; for (i = 423; i < 426; i++) Y2674[i] = 828;};
	{long i; for (i = 427; i < 429; i++) Y2674[i] = 828;};
}


#ifdef __cplusplus
}
#endif

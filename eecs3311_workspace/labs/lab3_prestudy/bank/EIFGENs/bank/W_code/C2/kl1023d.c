/*
 * Class KL_ANY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1023 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1023 [] = {0xFF01,245,1022,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1023 [] = {0xFF01,1022,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1023 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1023 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1023 [] = {0xFF01,1022,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1023 [] = {0xFF01,1022,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1023 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1023 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1023 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1023 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1023 [] = {0xFF01,25,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1023 [] = {0xFF01,1022,0xFFFF};


static const struct desc_info desc_1023[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1023), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1023), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1023), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1023), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1023), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1023), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1023), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1023), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1023), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1023), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1023), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1023), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07FD /*1022*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1023), 30, 0xFFFFFFFF},
};
void Init1023(void)
{
	IDSC(desc_1023, 0, 1022);
	IDSC(desc_1023 + 1, 1, 1022);
}


#ifdef __cplusplus
}
#endif

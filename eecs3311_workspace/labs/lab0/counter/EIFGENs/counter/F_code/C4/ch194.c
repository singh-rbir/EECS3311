/*
 * Code for class CHARACTER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch194.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHARACTER_8_REF}.natural_32_code */
EIF_NATURAL_32 F800_5581 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.hash_code */
EIF_INTEGER_32 F800_5582 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (F800_5581(Current))));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_less */
EIF_BOOLEAN F800_5586 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tu4_1 = F800_5581(Current);
	tu4_2 = F800_5581(RTCW(arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_equal */
EIF_BOOLEAN F800_5587 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	tc2 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.plus */
EIF_CHARACTER_8 F800_5588 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 + arg1);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.minus */
EIF_CHARACTER_8 F800_5589 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 - arg1);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.set_item */
void F800_5593 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_) = (EIF_CHARACTER_8) arg1;
}

/* {CHARACTER_8_REF}.out */
EIF_REFERENCE F800_5594 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(873, 0x01).id, 873, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F872_6605(RTCW(Result), ((EIF_INTEGER_32) 1L));
	F874_6745(RTCW(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.to_character_32 */
EIF_CHARACTER_32 F800_5598 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_32) tc1;
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_hexa_digit */
EIF_BOOLEAN F800_5607 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F800_5614(Current, ti4_1);
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 64U),((EIF_NATURAL_8) 4U));
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.character_types */
EIF_NATURAL_8 F800_5614 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))) {
		tr1 = RTOUCR(36,F800_5615, (Current));
		/* INLINED CODE (SPECIAL.item) */
		tu1_2 = *((EIF_NATURAL_8 *)RTCW(tr1) + (arg1));
		/* END INLINED CODE */
		Result = tu1_2;
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.internal_character_types */
static EIF_REFERENCE F800_5615_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(36)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,471,813,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 256L),sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	Result = (EIF_REFERENCE) tr1;
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F472_3222(RTCW(Result), tu1_1);
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 8U),((EIF_NATURAL_8) 128U));
	F472_3222(RTCW(Result), tu1_1);
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F472_3222(RTCW(Result), tu1_1);
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F472_3222(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F472_3224(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 128L), ((EIF_INTEGER_32) 255L));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F800_5615 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(36,F800_5615_body,(Current));
}

void EIF_Minit194 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

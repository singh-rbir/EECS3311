/*
 * Code for class INTEGER_64_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in197.h"
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

/* {INTEGER_64_REF}.hash_code */
EIF_INTEGER_32 F803_5627 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_1 = eif_bit_and(ti8_1,(EIF_INTEGER_64) ((EIF_INTEGER_32) 2147483647L));
	Result = (EIF_INTEGER_32) ti8_1;
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.is_less */
EIF_BOOLEAN F803_5634 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti8_1 < ti8_2);
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.is_equal */
EIF_BOOLEAN F803_5635 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_1 == ti8_2);
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.set_item */
void F803_5636 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) = (EIF_INTEGER_64) arg1;
}

/* {INTEGER_64_REF}.plus */
EIF_REFERENCE F803_5644 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F803_5636(RTCW(Result), (EIF_INTEGER_64) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) + ti8_1));
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.opposite */
EIF_REFERENCE F803_5649 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	F803_5636(RTCW(Result), (EIF_INTEGER_64) -*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_));
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.integer_quotient */
EIF_REFERENCE F803_5650 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F803_5636(RTCW(Result), (EIF_INTEGER_64) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) / ti8_1));
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.integer_remainder */
EIF_REFERENCE F803_5651 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F803_5636(RTCW(Result), (EIF_INTEGER_64) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) % ti8_1));
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.as_natural_64 */
EIF_NATURAL_64 F803_5659 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_NATURAL_64) ti8_1;
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.as_integer_32 */
EIF_INTEGER_32 F803_5662 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) ti8_1;
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.to_natural_64 */
EIF_NATURAL_64 F803_5667 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R4164[Dtype(Current)-802])(Current);
}

/* {INTEGER_64_REF}.to_integer_32 */
EIF_INTEGER_32 F803_5671 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4167[Dtype(Current)-802])(Current);
}

/* {INTEGER_64_REF}.to_character_8 */
EIF_CHARACTER_8 F803_5678 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_CHARACTER_8) ti8_1;
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.bit_and */
EIF_REFERENCE F803_5680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_1 = eif_bit_and(ti8_1,ti8_2);
	F803_5636(RTCW(Result), ti8_1);
	RTLE;
	return Result;
}

/* {INTEGER_64_REF}.out */
EIF_REFERENCE F803_5690 (EIF_REFERENCE Current)
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
	F872_6605(RTCW(Result), ((EIF_INTEGER_32) 20L));
	F874_6738(RTCW(Result), *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit197 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

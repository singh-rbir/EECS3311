/*
 * Code for class REAL_64_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re203.h"
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_64_REF}.hash_code */
EIF_INTEGER_32 F809_5742 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4223[Dtype(Current)-808])(Current);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.is_less */
EIF_BOOLEAN F809_5753 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_less_real_64 (tr8_1, tr8_2);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.is_equal */
EIF_BOOLEAN F809_5754 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, tr8_2);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.set_item */
void F809_5755 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) = (EIF_REAL_64) arg1;
}

/* {REAL_64_REF}.truncated_to_integer */
EIF_INTEGER_32 F809_5764 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {REAL_64_REF}.plus */
EIF_REFERENCE F809_5774 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
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
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F809_5755(RTCW(Result), (EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) + tr8_1));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.minus */
EIF_REFERENCE F809_5775 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
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
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F809_5755(RTCW(Result), (EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) - tr8_1));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.product */
EIF_REFERENCE F809_5776 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
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
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F809_5755(RTCW(Result), (EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) * tr8_1));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.quotient */
EIF_REFERENCE F809_5777 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
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
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F809_5755(RTCW(Result), (EIF_REAL_64) ((EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_)) /  (EIF_REAL_64) (tr8_1)));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.out */
EIF_REFERENCE F809_5781 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = c_outr64(tr8_1);
	RTLE;
	return Result;
}

void EIF_Minit203 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

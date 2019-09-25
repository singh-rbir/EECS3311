/*
 * Code for class ANY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "an1.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ANY}.generating_type */
EIF_REFERENCE F1_5 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("generating_type", 0, Current, 0, 0, 1);
	Result = (EIF_REFERENCE) eif_builtin_ANY_generating_type (Current);
	if (!Result) {RTEC(EN_FAIL);}
	RTLE;
	RTEE;
	return Result;
}

/* {ANY}.is_equal */
EIF_BOOLEAN F1_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	Result = (EIF_BOOLEAN) eif_builtin_ANY_is_equal (Current, arg1);
	RTLE;
	return Result;
}

/* {ANY}.twin */
EIF_REFERENCE F1_14 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	RTLE;
	return Result;
}

/* {ANY}.copy */
void F1_15 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	eif_builtin_ANY_copy (Current, arg1);
	RTLE;
}

/* {ANY}.standard_copy */
void F1_16 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	eif_builtin_ANY_standard_copy (Current, arg1);
	RTLE;
}

/* {ANY}.internal_correct_mismatch */
void F1_23 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc3 = RTCCL(Current);
	loc3 = RTRV(eif_new_type(574, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2934[Dtype(loc3)-574])(loc3);
	} else {
		loc1 = RTLNS(eif_new_type(873, 0x01).id, 873, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr1 = RTMS_EX_H("Mismatch: ",10,1538098208);
		F872_6607(RTCW(loc1), tr1);
		loc2 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr1 = F1_5(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3875[Dtype(RTCW(tr1))-746])(tr1);
		F874_6731(RTCW(loc1), tr1);
		F48_1363(RTCW(loc2), loc1);
	}
	RTLE;
}

/* {ANY}.io */
static EIF_REFERENCE F1_24_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(0)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(23, 0x01).id, 23, _OBJSIZ_1_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	F24_268(RTCW(Result));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1_24 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(0,F1_24_body,(Current));
}

/* {ANY}.out */
EIF_REFERENCE F1_25 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1_26(Current);
}

/* {ANY}.tagged_out */
EIF_REFERENCE F1_26 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("tagged_out", 0, Current, 0, 0, 22);
	Result = (EIF_REFERENCE) eif_builtin_ANY_tagged_out (Current);
	if (!Result) {RTEC(EN_FAIL);}
	RTLE;
	RTEE;
	return Result;
}

/* {ANY}.print */
void F1_27 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = RTOUCR(0,F1_24, (Current));
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(arg1))-0])(arg1);
		F24_271(RTCW(tr1), tr2);
	}
	RTLE;
}

/* {ANY}.default_create */
void F1_29 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ANY}.default_rescue */
void F1_30 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ANY}.do_nothing */
void F1_31 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ANY}.default_pointer */
EIF_POINTER F1_33 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_POINTER) 0;
}

void EIF_Minit1 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st233.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_8}.character_32_item */
EIF_CHARACTER_32 F874_6698 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = F874_6699(Current, arg1);
	Result = (EIF_CHARACTER_32) tu4_1;
	RTLE;
	return Result;
}

/* {STRING_8}.code */
EIF_NATURAL_32 F874_6699 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {STRING_8}.put */
void F874_6718 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = arg1;
	/* END INLINED CODE */
	;
	F873_6659(Current);
	RTLE;
}

/* {STRING_8}.put_code */
void F874_6719 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (EIF_CHARACTER_8) arg1;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = tc1;
	/* END INLINED CODE */
	;
	F873_6659(Current);
	RTLE;
}

/* {STRING_8}.append_string_general */
void F874_6730 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(871, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		F874_6731(Current, loc1);
	} else {
		F873_6672(Current, arg1);
	}
	RTLE;
}

/* {STRING_8}.append */
void F874_6731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-871]);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		if ((EIF_BOOLEAN) (loc3 > F872_6625(Current))) {
			ti4_1 = F378_2676(Current);
			F874_6762(Current, (EIF_INTEGER_32) (loc3 + ti4_1));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4766[Dtype(RTCW(arg1))-873])(arg1);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)RTCW(tr1) + (loc1),(EIF_CHARACTER_8 *)tr2 + ti4_1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), loc1 + loc2);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc3;
		F873_6659(Current);
	}
	RTLE;
}

/* {STRING_8}.plus */
EIF_REFERENCE F874_6733 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-873])(arg1);
	Result = F874_6781(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2));
	F874_6731(RTCW(Result), Current);
	F874_6730(RTCW(Result), arg1);
	RTLE;
	return Result;
}

/* {STRING_8}.append_string */
void F874_6734 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F874_6731(Current, arg1);
	}
	RTLE;
}

/* {STRING_8}.append_integer */
void F874_6735 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		F874_6745(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			F874_6745(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0x80000000L))) {
				F874_6745(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 10L));
			} else {
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_32) arg1;
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 10L)) + ((EIF_INTEGER_32) 48L)));
			F874_6745(Current, tc1);
			loc1 /= ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_integer_8 */
void F874_6736 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_INTEGER_8 loc1 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) {
		F874_6745(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) {
			F874_6745(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_8) -128L))) {
				F874_6745(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -((EIF_INTEGER_8) (arg1 / (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L)));
			} else {
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_8) arg1;
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_8) (((EIF_INTEGER_8) (loc1 % (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L))) + (EIF_INTEGER_8) ((EIF_INTEGER_32) 48L)));
			F874_6745(Current, tc1);
			loc1 /= (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_integer_16 */
void F874_6737 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_INTEGER_16 loc1 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
		F874_6745(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
			F874_6745(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_16) -32768L))) {
				F874_6745(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -((EIF_INTEGER_16) (arg1 / (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L)));
			} else {
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_16) arg1;
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_16) (((EIF_INTEGER_16) (loc1 % (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L))) + (EIF_INTEGER_16) ((EIF_INTEGER_32) 48L)));
			F874_6745(Current, tc1);
			loc1 /= (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_integer_64 */
void F874_6738 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		F874_6745(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			F874_6745(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_64) RTI64C(0x8000000000000000)))) {
				F874_6745(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -((EIF_INTEGER_64) (arg1 / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L)));
			} else {
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_64) arg1;
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_64) (((EIF_INTEGER_64) (loc1 % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L))) + (EIF_INTEGER_64) ((EIF_INTEGER_32) 48L)));
			F874_6745(Current, tc1);
			loc1 /= (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_8 */
void F874_6739 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
		F874_6745(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_8) arg1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_8) (((EIF_NATURAL_8) (loc1 % (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_8) ((EIF_INTEGER_32) 48L)));
			F874_6745(Current, tc1);
			loc1 /= (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_16 */
void F874_6740 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) {
		F874_6745(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_16) arg1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_16) (((EIF_NATURAL_16) (loc1 % (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_16) ((EIF_INTEGER_32) 48L)));
			F874_6745(Current, tc1);
			loc1 /= (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_32 */
void F874_6741 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		F874_6745(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_32) arg1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) (((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L)));
			F874_6745(Current, tc1);
			loc1 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_64 */
void F874_6742 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
		F874_6745(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_64) arg1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_64) (((EIF_NATURAL_64) (loc1 % (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_64) ((EIF_INTEGER_32) 48L)));
			F874_6745(Current, tc1);
			loc1 /= (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_character */
void F874_6745 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc1 == F872_6625(Current))) {
		ti4_1 = F378_2676(Current);
		F874_6762(Current, (EIF_INTEGER_32) (loc1 + ti4_1));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(tr1) + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	F873_6659(Current);
	RTLE;
}

/* {STRING_8}.extend */
void F874_6746 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc1 == F872_6625(Current))) {
		ti4_1 = F378_2676(Current);
		F874_6762(Current, (EIF_INTEGER_32) (loc1 + ti4_1));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(tr1) + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	F873_6659(Current);
	RTLE;
}

/* {STRING_8}.resize */
void F874_6762 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = F469_3238(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STRING_8}.grow */
void F874_6763 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > F872_6625(Current))) {
		F874_6762(Current, arg1);
	}
	RTLE;
}

/* {STRING_8}.substring */
EIF_REFERENCE F874_6777 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)))) {
		Result = F874_6781(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)RTCW(tr1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)*(EIF_REFERENCE *)(Current) + (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
		F874_6779(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
	} else {
		Result = F874_6781(Current, ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {STRING_8}.set_count */
void F874_6779 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
	F873_6659(Current);
	RTLE;
}

/* {STRING_8}.correct_mismatch */
void F874_6780 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {STRING_8}.new_string */
EIF_REFERENCE F874_6781 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F872_6605(RTCW(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit233 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

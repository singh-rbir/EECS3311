/*
 * Code for class HASH_TABLE [INTEGER_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha857.h"
#include "eif_built_in.h"
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

/* {HASH_TABLE}.make */
void F580_3924 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(615, 0x01).id, 615, _OBJSIZ_0_1_0_1_0_0_0_0_);
	loc4 = eif_max_int32 (arg1,((EIF_INTEGER_32) 2L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	ti4_1 = F616_4274(RTCW(loc1), loc4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O2982[dtype-576]) = (EIF_INTEGER_32) loc4;
	tr1 = RTLNSP2(eif_final_id(Y3010,Y3010_gen_type,dftype,576).id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSP2(eif_final_id(Y3011,Y3011_gen_type,dftype,576).id,EO_REF,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,477,807,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_BOOLEAN), EIF_TRUE);
	}
	F478_3203(RTCW(tr1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,470,828,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	F471_3203(RTCW(tr1), ((EIF_INTEGER_32) -1L), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current + O3016[dtype-576]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current + O3060[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O3020[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_32 *)(Current + O3019[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O2973[dtype-576]) = (EIF_INTEGER_32) loc2;
	*(EIF_BOOLEAN *)(Current + O3015[dtype-576]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current + O3014[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O3024[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	*(EIF_INTEGER_32 *)(Current + O3025[dtype-576]) = (EIF_INTEGER_32) loc2;
	tr1 = RTCCL(loc3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3026[dtype-576]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {HASH_TABLE}.accommodate */
void F580_3926 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
	ti4_1 = eif_max_int32 (ti4_1,arg1);
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3008[dtype-576])(Current, ti4_1);
	loc4 = *(EIF_REFERENCE *)(Current);
	loc5 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(loc5))-465])(loc5);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3028[dtype-576])(Current, loc1)) {
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc4) + (loc1));
			/* END INLINED CODE */
			ti4_1 = ti4_2;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2673[Dtype(RTCW(loc5))-465])(loc5, loc1);
			tr2 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2372[Dtype(RTCW(loc3))-496])(loc3, (EIF_REFERENCE) &ti4_1, tr2);
		}
		loc1++;
	}
	if (*(EIF_BOOLEAN *)(Current + O3015[dtype-576])) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O2982[dtype-576])));
		/* END INLINED CODE */
		loc1 = ti4_3;
		/* INLINED CODE (SPECIAL.item) */
		ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc4) + (loc1));
		/* END INLINED CODE */
		ti4_1 = ti4_2;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2673[Dtype(RTCW(tr1))-465])(tr1, loc1);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2372[Dtype(RTCW(loc3))-496])(loc3, (EIF_REFERENCE) &ti4_1, tr2);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3031[dtype-576])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3033[dtype-576])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3034[dtype-576])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3035[dtype-576])(Current, tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3) + O2982[Dtype(loc3)-576]);
	*(EIF_INTEGER_32 *)(Current + O2982[dtype-576]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3) + O3016[Dtype(loc3)-576]);
	*(EIF_INTEGER_32 *)(Current + O3016[dtype-576]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.found_item */
EIF_INTEGER_32 F580_3927 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2973[Dtype(Current)-576]);
}


/* {HASH_TABLE}.item */
EIF_INTEGER_32 F580_3929 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc9);
	RTLR(6,loc10);
	RTLR(7,loc11);
	RTLR(8,loc12);
	RTLIU(9);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		if (*(EIF_BOOLEAN *)(Current + O3015[dtype-576])) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr2) + (*(EIF_INTEGER_32 *)(Current + O2982[dtype-576])));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (ti4_1));
			/* END INLINED CODE */
			Result = ti4_3;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2982[dtype-576]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2981[dtype-576])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2673[Dtype(RTCW(loc9))-465])(loc9, loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2983[dtype-576])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					tr1 = *(EIF_REFERENCE *)(Current);
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc4));
					/* END INLINED CODE */
					Result = ti4_2;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has */
EIF_BOOLEAN F580_3931 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,tr1);
	RTLR(7,loc12);
	RTLR(8,tr2);
	RTLIU(9);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		if (*(EIF_BOOLEAN *)(Current + O3015[dtype-576])) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2982[dtype-576]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2981[dtype-576])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2673[Dtype(RTCW(loc9))-465])(loc9, loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2983[dtype-576])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.item_for_iteration */
EIF_INTEGER_32 F580_3935 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O3016[Dtype(Current)-576])));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.key_for_iteration */
EIF_REFERENCE F580_3936 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2673[Dtype(RTCW(tr1))-465])(tr1, *(EIF_INTEGER_32 *)(Current + O3016[Dtype(Current)-576]));
	RTLE;
	return Result;
}

/* {HASH_TABLE}.new_cursor */
EIF_REFERENCE F580_3938 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,670,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2281,Y2281_gen_type,Dftype(Current),191);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2374,Y2374_gen_type,Dftype(Current),260);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 670, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	F659_4331(RTCW(Result), Current);
	F659_4350(RTCW(Result));
	RTLE;
	return Result;
}

/* {HASH_TABLE}.hash_code_of */
EIF_INTEGER_32 F580_3940 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3816[Dtype(RTCW(arg1))-745])(arg1);
	return (EIF_INTEGER_32) ti4_1;
}

/* {HASH_TABLE}.count */
EIF_INTEGER_32 F580_3941 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3060[Dtype(Current)-576]);
}


/* {HASH_TABLE}.iteration_lower */
EIF_INTEGER_32 F580_3944 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3000[Dtype(Current)-576])(Current, ((EIF_INTEGER_32) -1L));
}

/* {HASH_TABLE}.iteration_upper */
EIF_INTEGER_32 F580_3945 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3001[Dtype(Current)-576])(Current, ti4_1);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_equal */
EIF_BOOLEAN F580_3946 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3060[Dtype(arg1)-576]);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3060[dtype-576]) == ti4_1)) {
		tb3 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2329[Dtype(arg1)-214]);
		tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2329[dtype-214]) == tb3);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(arg1) + O3015[Dtype(arg1)-576]);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3015[dtype-576]) == tb2);
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2280[dtype-576])(Current);
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc1)-614])(loc1);
			if (tb1) break;
			if ((EIF_BOOLEAN) !Result) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3198[Dtype(loc1)-667])(loc1);
			tr2 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2998[Dtype(RTCW(arg1))-576])(arg1, tr2);
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg1))-576])(arg1);
			if (tb2) {
				if (*(EIF_BOOLEAN *)(Current + O2329[dtype-214])) {
					ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc1)-667])(loc1));
					ti4_2 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2973[Dtype(RTCW(arg1))-576])(arg1));
					Result = (EIF_BOOLEAN) (ti4_1 == ti4_2);
				} else {
					ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc1)-667])(loc1));
					ti4_2 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2973[Dtype(RTCW(arg1))-576])(arg1));
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
				}
			} else {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc1)-614])(loc1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.same_keys */
EIF_BOOLEAN F580_3947 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	return (EIF_BOOLEAN) RTEQ(arg1, arg2);
}

/* {HASH_TABLE}.found */
EIF_BOOLEAN F580_3956 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3019[Dtype(Current)-576]) == ((EIF_INTEGER_32) 2L));
}

/* {HASH_TABLE}.not_found */
EIF_BOOLEAN F580_3957 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3019[Dtype(Current)-576]) == ((EIF_INTEGER_32) 8L));
}

/* {HASH_TABLE}.after */
EIF_BOOLEAN F580_3958 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3030[dtype-576])(Current, *(EIF_INTEGER_32 *)(Current + O3016[dtype-576]));
}

/* {HASH_TABLE}.valid_iteration_index */
EIF_BOOLEAN F580_3962 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3029[Dtype(Current)-576])(Current, arg1);
}

/* {HASH_TABLE}.start */
void F580_3963 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3000[dtype-576])(Current, ((EIF_INTEGER_32) -1L));
	*(EIF_INTEGER_32 *)(Current + O3016[dtype-576]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.forth */
void F580_3964 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3000[dtype-576])(Current, *(EIF_INTEGER_32 *)(Current + O3016[dtype-576]));
	*(EIF_INTEGER_32 *)(Current + O3016[dtype-576]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.search */
void F580_3966 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3014[dtype-576]);
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3039[dtype-576])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2989[dtype-576])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3017[dtype-576])(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O2973[dtype-576]) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current + O2973[dtype-576]) = (EIF_INTEGER_32) loc2;
	}
	*(EIF_INTEGER_32 *)(Current + O3014[dtype-576]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {HASH_TABLE}.next_iteration_position */
EIF_INTEGER_32 F580_3968 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result >= loc2)) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)RTCW(loc1) + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result++;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.previous_iteration_position */
EIF_INTEGER_32 F580_3969 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) -1L))) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)RTCW(loc1) + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result--;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.put */
void F580_3970 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3039[dtype-576])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2989[dtype-576])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3045[dtype-576])(Current);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3017[dtype-576])(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O2973[dtype-576]) = (EIF_INTEGER_32) ti4_1;
	} else {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3018[dtype-576])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3058[dtype-576])(Current);
			tr1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3039[dtype-576])(Current, tr1);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3020[dtype-576]) == ((EIF_INTEGER_32) -1L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
			loc3 = *(EIF_INTEGER_32 *)(Current + O3014[dtype-576]);
		} else {
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3027[dtype-576])(Current, *(EIF_INTEGER_32 *)(Current + O3020[dtype-576]));
			loc3 = *(EIF_INTEGER_32 *)(Current + O3020[dtype-576]);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F478_3221(RTCW(tr1), (EIF_BOOLEAN) 0, loc2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)RTCW(tr1) + (loc3)) = loc2;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current);
		F471_3221(RTCW(tr1), arg1, loc2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2690[Dtype(RTCW(tr1))-465])(tr1, tr2, loc2);
		if (RTCEQ(arg2, loc1)) {
			*(EIF_BOOLEAN *)(Current + O3015[dtype-576]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current + O3060[dtype-576]))++;
		*(EIF_INTEGER_32 *)(Current + O2973[dtype-576]) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current + O3019[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	}
	RTLE;
}

/* {HASH_TABLE}.force */
void F580_3971 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3039[dtype-576])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2990[dtype-576])(Current)) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3018[dtype-576])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3058[dtype-576])(Current);
			tr1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3039[dtype-576])(Current, tr1);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3020[dtype-576]) == ((EIF_INTEGER_32) -1L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
			loc4 = *(EIF_INTEGER_32 *)(Current + O3014[dtype-576]);
		} else {
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3027[dtype-576])(Current, *(EIF_INTEGER_32 *)(Current + O3020[dtype-576]));
			loc4 = *(EIF_INTEGER_32 *)(Current + O3020[dtype-576]);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F478_3221(RTCW(tr1), (EIF_BOOLEAN) 0, loc3);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)RTCW(tr1) + (loc4)) = loc3;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2690[Dtype(RTCW(tr1))-465])(tr1, tr2, loc3);
		if (RTCEQ(arg2, loc1)) {
			*(EIF_BOOLEAN *)(Current + O3015[dtype-576]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current + O3060[dtype-576]))++;
		*(EIF_INTEGER_32 *)(Current + O2973[dtype-576]) = (EIF_INTEGER_32) loc2;
	} else {
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3017[dtype-576])(Current);
		tr1 = *(EIF_REFERENCE *)(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O2973[dtype-576]) = (EIF_INTEGER_32) ti4_1;
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	F471_3221(RTCW(tr1), arg1, loc3);
	RTLE;
}

/* {HASH_TABLE}.wipe_out */
void F580_3978 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F471_3240(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2709[Dtype(RTCW(tr1))-465])(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = F478_3214(RTCW(tr2));
	F478_3224(RTCW(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 0L), ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F471_3224(RTCW(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current + O2982[dtype-576]));
	*(EIF_INTEGER_32 *)(Current + O2973[dtype-576]) = (EIF_INTEGER_32) loc1;
	*(EIF_INTEGER_32 *)(Current + O3060[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O3014[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
	*(EIF_INTEGER_32 *)(Current + O3016[dtype-576]) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O3019[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_BOOLEAN *)(Current + O3015[dtype-576]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {HASH_TABLE}.copy */
void F580_3981 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr1 = F1_14(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3031[dtype-576])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr1 = F1_14(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3033[dtype-576])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		tr1 = F1_14(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3034[dtype-576])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		tr1 = F1_14(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3035[dtype-576])(Current, tr1);
	}
	RTLE;
}

/* {HASH_TABLE}.empty_duplicate */
EIF_REFERENCE F580_3982 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2970[Dtype(RTCW(Result))-576])(Result, arg1);
	if (*(EIF_BOOLEAN *)(Current + O2329[Dtype(Current)-214])) {
		F220_2585(RTCW(Result));
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.correct_mismatch */
void F580_3983 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc5);
	RTLR(9,loc12);
	RTLR(10,loc7);
	RTLIU(11);
	
	RTGC;
	tr1 = RTOUCR(2,F575_3857, (Current));
	tr2 = RTMS_EX_H("hash_table_version_64",21,855604276);
	tb1 = F577_3931(RTCW(tr1), tr2);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTOUCR(2,F575_3857, (Current));
		tr2 = RTMS_EX_H("content",7,460700276);
		tr1 = F577_3929(RTCW(tr1), tr2);
		loc8 = RTCCL(tr1);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,501,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2281,Y2281_gen_type,dftype,191);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc8 = RTRV(typres0,loc8);
		}
		if (EIF_TEST(loc8)) {
			tr1 = *(EIF_REFERENCE *)(loc8);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOUCR(2,F575_3857, (Current));
		tr2 = RTMS_EX_H("keys",4,1801812339);
		tr1 = F577_3929(RTCW(tr1), tr2);
		loc9 = RTCCL(tr1);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,496,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2374,Y2374_gen_type,dftype,260);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc9 = RTRV(typres0,loc9);
		}
		if (EIF_TEST(loc9)) {
			tr1 = *(EIF_REFERENCE *)(loc9);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOUCR(2,F575_3857, (Current));
		tr2 = RTMS_EX_H("deleted_marks",13,2142169971);
		tr1 = F577_3929(RTCW(tr1), tr2);
		loc10 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,508,807,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(typres0,loc10);
		}
		if (EIF_TEST(loc10)) {
			tr1 = *(EIF_REFERENCE *)(loc10);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
		}
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL))) {
			tr1 = RTOUCR(2,F575_3857, (Current));
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			tb3 = F577_3931(RTCW(tr1), tr2);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr2))-465])(tr2);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,477,807,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSP2(typres0.id,0,ti4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
				RT_SPECIAL_COUNT(tr1) = 0;
			}
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_BOOLEAN *)RTCW(tr1) + (((EIF_INTEGER_32) 0L)),(EIF_BOOLEAN *)loc1 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)ti4_2);
			RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + ti4_2);
			/* END INLINED CODE */
			;
		}
		tr2 = RTOUCR(2,F575_3857, (Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr2 = F577_3929(RTCW(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(828, 0x00), tr1, loc11, tb1);
		if (tb1) {
			loc4 = (EIF_INTEGER_32) loc11;
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL))) {
			F575_3856(Current);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
			loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3008[dtype-576])(Current, loc4);
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2673[Dtype(RTCW(tr1))-465])(tr1, loc2);
				loc12 = RTCCL(tr1);
				if (EIF_TEST(loc12)) {
					tb1 = !RTCEQ(loc12, loc7);
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current);
					/* INLINED CODE (SPECIAL.item) */
					ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc2));
					/* END INLINED CODE */
					ti4_2 = ti4_3;
					tr1 = RTCCL(loc12);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2372[Dtype(RTCW(loc5))-496])(loc5, (EIF_REFERENCE) &ti4_2, tr1);
				}
				loc2++;
			}
			tb1 = '\0';
			tr2 = RTOUCR(2,F575_3857, (Current));
			tr3 = RTMS_EX_H("has_default",11,1777575796);
			tr2 = F577_3929(RTCW(tr2), tr3);
			tr1 = RTCCL(tr2);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(807, 0x00), tr1, loc13, tb2);
			if (tb2) {
				tb1 = loc13;
			}
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr2);
				/* INLINED CODE (SPECIAL.item) */
				ti4_4 = *((EIF_INTEGER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				ti4_2 = ti4_4;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2673[Dtype(RTCW(tr1))-465])(tr1, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2372[Dtype(RTCW(loc5))-496])(loc5, (EIF_REFERENCE) &ti4_2, tr2);
			}
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3031[dtype-576])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_1_);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3033[dtype-576])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_3_);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3034[dtype-576])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_2_);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3035[dtype-576])(Current, tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O2982[Dtype(loc5)-576]);
			*(EIF_INTEGER_32 *)(Current + O2982[dtype-576]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O3016[Dtype(loc5)-576]);
			*(EIF_INTEGER_32 *)(Current + O3016[dtype-576]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O3020[Dtype(loc5)-576]);
			*(EIF_INTEGER_32 *)(Current + O3020[dtype-576]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O3014[Dtype(loc5)-576]);
			*(EIF_INTEGER_32 *)(Current + O3014[dtype-576]) = (EIF_INTEGER_32) ti4_2;
			*(EIF_INTEGER_32 *)(Current + O3024[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
			*(EIF_INTEGER_32 *)(Current + O3025[dtype-576]) = (EIF_INTEGER_32) loc6;
			tr1 = RTCCL(loc7);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3026[dtype-576]) = (EIF_REFERENCE) tr1;
		}
		*(EIF_INTEGER_32 *)(Current + O3019[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {HASH_TABLE}.position */
EIF_INTEGER_32 F580_3992 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O3014[Dtype(Current)-576])));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.soon_full */
EIF_BOOLEAN F580_3993 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2080[Dtype(RTCW(tr1))-465])(tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.ht_deleted_item */
EIF_INTEGER_32 F580_4000 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3025[Dtype(Current)-576]);
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_REFERENCE F580_4001 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3026[Dtype(Current)-576]);
}


/* {HASH_TABLE}.deleted_position */
EIF_INTEGER_32 F580_4002 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (arg1));
	/* END INLINED CODE */
	Result = ti4_2;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -Result + ((EIF_INTEGER_32) -2L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
	ti4_1 = eif_min_int32 (Result,ti4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.occupied */
EIF_BOOLEAN F580_4003 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O3015[dtype-576])) {
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O2982[dtype-576])));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)RTCW(tr1) + (arg1));
			/* END INLINED CODE */
			tb1 = tb2;
			Result = (EIF_BOOLEAN) !tb1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		/* INLINED CODE (SPECIAL.item) */
		tb2 = *((EIF_BOOLEAN *)RTCW(tr1) + (arg1));
		/* END INLINED CODE */
		Result = tb2;
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.truly_occupied */
EIF_BOOLEAN F580_4004 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		Result = '\01';
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current + O3015[dtype-576])) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O2982[dtype-576])));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!(tb1)) {
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3028[dtype-576])(Current, arg1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_off_position */
EIF_BOOLEAN F580_4005 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-465])(tr1);
		Result = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.set_content */
void F580_4006 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_keys */
void F580_4008 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_deleted_marks */
void F580_4009 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_indexes_map */
void F580_4010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.internal_search */
void F580_4014 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,tr1);
	RTLR(7,loc12);
	RTLR(8,tr2);
	RTLIU(9);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		*(EIF_INTEGER_32 *)(Current + O3014[dtype-576]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O2982[dtype-576]);
		if (*(EIF_BOOLEAN *)(Current + O3015[dtype-576])) {
			*(EIF_INTEGER_32 *)(Current + O3019[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			*(EIF_INTEGER_32 *)(Current + O3019[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2982[dtype-576]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2981[dtype-576])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		*(EIF_INTEGER_32 *)(Current + O3019[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2673[Dtype(RTCW(loc9))-465])(loc9, loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2983[dtype-576])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					*(EIF_INTEGER_32 *)(Current + O3019[dtype-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
		*(EIF_INTEGER_32 *)(Current + O3014[dtype-576]) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current + O3020[dtype-576]) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.set_conflict */
void F580_4020 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3019[Dtype(Current)-576]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {HASH_TABLE}.add_space */
void F580_4033 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2972[dtype-576])(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3060[dtype-576]) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3060[dtype-576]) / ((EIF_INTEGER_32) 2L))));
}

void EIF_Minit857 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

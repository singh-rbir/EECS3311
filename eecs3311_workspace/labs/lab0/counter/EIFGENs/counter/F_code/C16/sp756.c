/*
 * Code for class SPECIAL [INTEGER_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sp756.h"
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

/* {SPECIAL}.make_empty */
void F477_3202 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {SPECIAL}.make_filled */
void F477_3203 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (SPECIAL.make_empty) */
		/* END INLINED CODE */
	}
	;
	F477_3224(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {SPECIAL}.item */
EIF_INTEGER_64 F477_3205 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	return *((EIF_INTEGER_64 *) Current + arg1);
}

EIF_REFERENCE F477_32051 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	EIF_REFERENCE Result;
	EIF_INTEGER_64 r = *((EIF_INTEGER_64 *) Current + arg1);
	Result = RTLNS(eif_new_type(804, 0x00).id, 804, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)Result = r;
	return Result;
}

/* {SPECIAL}.at */
EIF_INTEGER_64 F477_3206 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	return *((EIF_INTEGER_64 *) Current + arg1);
}

EIF_REFERENCE F477_32061 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	EIF_REFERENCE Result;
	EIF_INTEGER_64 r = *((EIF_INTEGER_64 *) Current + arg1);
	Result = RTLNS(eif_new_type(804, 0x00).id, 804, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)Result = r;
	return Result;
}

/* {SPECIAL}.item_address */
EIF_POINTER F477_3208 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	return (EIF_POINTER) (Current + (rt_uint_ptr) arg1 * (rt_uint_ptr)sizeof(EIF_INTEGER_64));
}

/* {SPECIAL}.base_address */
EIF_POINTER F477_3209 (EIF_REFERENCE Current)
{
	return (EIF_POINTER) Current;
}

/* {SPECIAL}.to_array */
EIF_REFERENCE F477_3211 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,507,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2281,Y2281_gen_type,Dftype(Current),191);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0.id, 507, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F508_3309(RTCW(tr1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {SPECIAL}.lower */
EIF_INTEGER_32 F477_3213 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

/* {SPECIAL}.upper */
EIF_INTEGER_32 F477_3214 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {SPECIAL}.count */
EIF_INTEGER_32 F477_3215 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
	return Result;
}

/* {SPECIAL}.capacity */
EIF_INTEGER_32 F477_3216 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (Current);
	return Result;
}

/* {SPECIAL}.same_items */
EIF_BOOLEAN F477_3218 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = (EIF_INTEGER_32) arg2;
		loc2 = (EIF_INTEGER_32) arg3;
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + arg4);
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			ti8_2 = *((EIF_INTEGER_64 *)RTCW(arg1) + (loc1));
			/* END INLINED CODE */
			ti8_1 = ti8_2;
			/* INLINED CODE (SPECIAL.item) */
			ti8_3 = *((EIF_INTEGER_64 *)Current + (loc2));
			/* END INLINED CODE */
			if ((EIF_BOOLEAN)(ti8_1 != ti8_3)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			loc1++;
			loc2++;
		}
	}
	RTLE;
	return Result;
}

/* {SPECIAL}.valid_index */
EIF_BOOLEAN F477_3219 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= arg1)) {
		Result = (EIF_BOOLEAN) (arg1 < (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current));
	}
	RTLE;
	return Result;
}

/* {SPECIAL}.put */
void F477_3220 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	*((EIF_INTEGER_64 *) Current + arg2) = arg1;
}

void F477_32202 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	*((EIF_INTEGER_64 *) Current + arg2) = *(EIF_INTEGER_64 *)arg1;
}

/* {SPECIAL}.force */
void F477_3221 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 arg3 = RT_SPECIAL_COUNT(Current);
	*((EIF_INTEGER_64 *) Current + arg2) = arg1;
	if (arg2 == arg3) { RT_SPECIAL_COUNT(Current) = arg3 + 1; }
}

void F477_32212 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	*((EIF_INTEGER_64 *) Current + arg2) = *(EIF_INTEGER_64 *)arg1;
}

/* {SPECIAL}.extend */
void F477_3222 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_INTEGER_32 arg2 = RT_SPECIAL_COUNT(Current);
	*((EIF_INTEGER_64 *) Current + arg2) = arg1;
	RT_SPECIAL_COUNT(Current) = arg2 + 1;
}

void F477_32222 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	
	EIF_INTEGER_32 arg2 = RT_SPECIAL_COUNT(Current);
	*((EIF_INTEGER_64 *) Current + arg2) = *(EIF_INTEGER_64 *)arg1;
	RT_SPECIAL_COUNT(Current) = arg2 + 1;
}

/* {SPECIAL}.fill_with */
void F477_3224 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 i;
	for (i = arg2; i <= arg3; i++) {
		*((EIF_INTEGER_64 *) Current + i) = arg1;
	}
	RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg3 + 1);
}

void F477_32242 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	EIF_INTEGER_32 i;
	EIF_INTEGER_64 arg1x = *(EIF_INTEGER_64 *)arg1;
	for (i = arg2; i < arg3; i++) {
	*((EIF_INTEGER_64 *) Current + i) = arg1x;
	}
	RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg3 + 1);
}

/* {SPECIAL}.copy_data */
void F477_3227 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		/* INLINED CODE (SPECIAL.overlapping_move) */
		memmove((EIF_INTEGER_64 *)Current + (arg3),(EIF_INTEGER_64 *)Current + arg2, (rt_uint_ptr)sizeof(EIF_INTEGER_64) * (rt_uint_ptr)arg4);
		RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg3 + arg4);
		/* END INLINED CODE */
		;
	} else {
		loc1 = (EIF_INTEGER_32) arg2;
		loc2 = (EIF_INTEGER_32) arg3;
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + arg4);
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			ti8_2 = *((EIF_INTEGER_64 *)RTCW(arg1) + (loc1));
			/* END INLINED CODE */
			ti8_1 = ti8_2;
			F477_3221(Current, ti8_1, loc2);
			loc1++;
			loc2++;
		}
	}
	RTLE;
}

/* {SPECIAL}.move_data */
void F477_3228 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
	} else {
		if ((EIF_BOOLEAN) (arg1 > arg2)) {
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg3) < arg1)) {
				/* INLINED CODE (SPECIAL.move_data) */
				memcpy((EIF_INTEGER_64 *)Current + (arg2),(EIF_INTEGER_64 *)Current + arg1, (rt_uint_ptr)sizeof(EIF_INTEGER_64) * (rt_uint_ptr)arg3);
				RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg2 + arg3);
				/* END INLINED CODE */
				;
			} else {
				/* INLINED CODE (SPECIAL.overlapping_move) */
				memmove((EIF_INTEGER_64 *)Current + (arg2),(EIF_INTEGER_64 *)Current + arg1, (rt_uint_ptr)sizeof(EIF_INTEGER_64) * (rt_uint_ptr)arg3);
				RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg2 + arg3);
				/* END INLINED CODE */
				;
			}
		} else {
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + arg3) < arg2)) {
				/* INLINED CODE (SPECIAL.move_data) */
				memcpy((EIF_INTEGER_64 *)Current + (arg2),(EIF_INTEGER_64 *)Current + arg1, (rt_uint_ptr)sizeof(EIF_INTEGER_64) * (rt_uint_ptr)arg3);
				RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg2 + arg3);
				/* END INLINED CODE */
				;
			} else {
				/* INLINED CODE (SPECIAL.overlapping_move) */
				memmove((EIF_INTEGER_64 *)Current + (arg2),(EIF_INTEGER_64 *)Current + arg1, (rt_uint_ptr)sizeof(EIF_INTEGER_64) * (rt_uint_ptr)arg3);
				RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg2 + arg3);
				/* END INLINED CODE */
				;
			}
		}
	}
	RTLE;
}

/* {SPECIAL}.overlapping_move */
void F477_3229 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < arg2)) {
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + arg3) - ((EIF_INTEGER_32) 1L));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - arg1);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg3) >= (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current))) {
			/* INLINED CODE (SPECIAL.item) */
			ti8_2 = *((EIF_INTEGER_64 *)Current + (arg1));
			/* END INLINED CODE */
			ti8_1 = ti8_2;
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
			F477_3224(Current, ti8_1, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg3) - ((EIF_INTEGER_32) 1L)));
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc2)) break;
			/* INLINED CODE (SPECIAL.item) */
			ti8_2 = *((EIF_INTEGER_64 *)Current + (loc1));
			/* END INLINED CODE */
			ti8_1 = ti8_2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_INTEGER_64 *)Current + ((EIF_INTEGER_32) (loc1 + loc3))) = ti8_1;
			/* END INLINED CODE */
			;
			loc1--;
		}
	} else {
		loc1 = (EIF_INTEGER_32) arg1;
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + arg3);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - arg2);
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc2)) break;
			/* INLINED CODE (SPECIAL.item) */
			ti8_2 = *((EIF_INTEGER_64 *)Current + (loc1));
			/* END INLINED CODE */
			ti8_1 = ti8_2;
			F477_3221(Current, ti8_1, (EIF_INTEGER_32) (loc1 - loc3));
			loc1++;
		}
	}
	RTLE;
}

/* {SPECIAL}.non_overlapping_move */
void F477_3230 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg1;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + arg3);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - arg1);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		/* INLINED CODE (SPECIAL.item) */
		ti8_2 = *((EIF_INTEGER_64 *)Current + (loc1));
		/* END INLINED CODE */
		ti8_1 = ti8_2;
		F477_3221(Current, ti8_1, (EIF_INTEGER_32) (loc1 + loc3));
		loc1++;
	}
	RTLE;
}

/* {SPECIAL}.resized_area */
EIF_REFERENCE F477_3235 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSP2(Dftype(Current),0,arg1,sizeof(EIF_INTEGER_64), EIF_TRUE);
	RT_SPECIAL_COUNT(Result) = 0;
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
	ti4_1 = eif_min_int32 (arg1,ti4_1);
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_INTEGER_64 *)RTCW(Result) + (((EIF_INTEGER_32) 0L)),(EIF_INTEGER_64 *)Current + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_INTEGER_64) * (rt_uint_ptr)ti4_1);
	RT_SPECIAL_COUNT(Result) = eif_max_int32(RT_SPECIAL_COUNT(Result), ((EIF_INTEGER_32) 0L) + ti4_1);
	/* END INLINED CODE */
	;
	RTLE;
	return Result;
}

/* {SPECIAL}.aliased_resized_area */
EIF_REFERENCE F477_3237 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	Result = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (Current, arg1);
	RTLE;
	return Result;
}

/* {SPECIAL}.aliased_resized_area_with_default */
EIF_REFERENCE F477_3238 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F477_3237(Current, arg2);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Result);
	F477_3224(RTCW(Result), arg1, ti4_1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {SPECIAL}.wipe_out */
void F477_3240 (EIF_REFERENCE Current)
{
	GTCX
	
	
	eif_builtin_SPECIAL_set_count (Current, ((EIF_INTEGER_32) 0L));
}

/* {SPECIAL}.clear_all */
void F477_3241 (EIF_REFERENCE Current)
{
	memset (Current, 0, RT_SPECIAL_VISIBLE_SIZE(Current));
}

/* {SPECIAL}.element_size */
EIF_INTEGER_32 F477_3249 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_element_size (Current);
	return Result;
}

/* {SPECIAL}.set_count */
void F477_3250 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	eif_builtin_SPECIAL_set_count (Current, arg1);
}

void EIF_Minit756 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class MANAGED_POINTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma172.h"
#include <string.h>
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

/* {MANAGED_POINTER}.make */
void F740_4468 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	{
		/* INLINED CODE (MANAGED_POINTER.increment_counter) */
		/* END INLINED CODE */
	}
	;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 1L));
	tp1 = calloc((size_t)ti4_1, (size_t) ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
		tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		F48_1362(RTCW(tr1), tr2);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {MANAGED_POINTER}.make_from_pointer */
void F740_4470 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	{
		/* INLINED CODE (MANAGED_POINTER.increment_counter) */
		/* END INLINED CODE */
	}
	;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (arg2,((EIF_INTEGER_32) 1L));
	tp1 = malloc((size_t)ti4_1);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
		tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		F48_1362(RTCW(tr1), tr2);
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	memcpy((void *)tp1, (const void *) arg1, (size_t) arg2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {MANAGED_POINTER}.share_from_pointer */
void F740_4471 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (MANAGED_POINTER.increment_counter) */
		/* END INLINED CODE */
	}
	;
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {MANAGED_POINTER}.set_from_pointer */
void F740_4473 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {MANAGED_POINTER}.is_equal */
EIF_BOOLEAN F740_4477 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ti4_1)) {
		Result = '\01';
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
		if (!((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1))) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
			tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
			tr1 = RTLNS(eif_new_type(864, 0x00).id, 864, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)tr1 = tp1;
			tb1 = F833_6429(RTCW(tr1), tp2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {MANAGED_POINTER}.copy */
void F740_4478 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		tb1 = '\01';
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
		}
		if (tb1) {
			tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
			F740_4470(Current, tp1, ti4_1);
		} else {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
			F740_4558(Current, ti4_1);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
			tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
			memcpy((void *)tp1, (const void *) tp2, (size_t) ti4_1);
		}
	}
	RTLE;
}

/* {MANAGED_POINTER}.read_into_special_character_8 */
void F740_4498 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	/* INLINED CODE (SPECIAL.item_address) */
	tp1 = RTCW(arg1) + (rt_uint_ptr)arg3 * sizeof(EIF_CHARACTER_8);
	/* END INLINED CODE */
	tp1 = tp1;
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp2,arg2);
	memcpy((void *)tp1, (const void *) tp2, (size_t) arg4);
	RTLE;
}

/* {MANAGED_POINTER}.put_natural_8 */
void F740_4499 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg2);
	memcpy((void *)tp1, (const void *) (EIF_NATURAL_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {MANAGED_POINTER}.put_natural_16 */
void F740_4500 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg2);
	memcpy((void *)tp1, (const void *) (EIF_NATURAL_16 *) &(arg1), (size_t) ((EIF_INTEGER_32) 2L));
	RTLE;
}

/* {MANAGED_POINTER}.resize */
void F740_4558 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 1L));
		tr1 = RTLNS(eif_new_type(864, 0x00).id, 864, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)tr1 = tp1;
		tp1 = F833_6441(RTCW(tr1), ti4_1);
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp1;
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
			tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("No more memory",14,904766585);
			F48_1362(RTCW(tr1), tr2);
		}
	}
	if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		tp1 = RTPOF(tp1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
		memset((void *)tp1, (int) ((EIF_INTEGER_32) 0L), (size_t) (EIF_INTEGER_32) (arg1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)));
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {MANAGED_POINTER}.dispose */
void F740_4559 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		free(tp1);
	}
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) loc1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {MANAGED_POINTER}.allocation_counter */
static EIF_REFERENCE F740_4560_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(35)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,100,831,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 100, _OBJSIZ_0_0_0_0_0_0_1_0_);
	}
	F101_1934(RTCW(tr1), (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F740_4560 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(35,F740_4560_body,(Current));
}

/* {MANAGED_POINTER}.increment_counter */
void F740_4562 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit172 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi182.h"
#include "eif_file.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE}.make_with_name */
void F742_4901 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F742_5062(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O3783[dtype-741]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3644[dtype-741]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_new_type(873, 1).id);
	F871_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.descriptor_available */
EIF_BOOLEAN F742_4916 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3792[Dtype(Current)-741]);
}


/* {FILE}.count */
EIF_INTEGER_32 F742_4931 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3549[dtype-742])(Current)) {
		if ((EIF_BOOLEAN) !F742_4962(Current)) {
			F742_5070(Current);
			Result = F190_2478(RTCV(RTOUCR(13,F742_5068, (Current))));
		} else {
			tp1 = *(EIF_POINTER *)(Current + O3644[dtype-741]);
			Result = (EIF_INTEGER_32) eif_file_size((FILE*) tp1);
			RTLE;
			return (EIF_INTEGER_32) Result;
		}
	}
	RTLE;
	return Result;
}

/* {FILE}.exists */
EIF_BOOLEAN F742_4936 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F742_4960(Current)) {
		tp1 = *(EIF_POINTER *)(RTCV(F742_5060(Current))+ _PTROFF_0_1_0_1_0_0_);
		Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) tp1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {FILE}.is_closed */
EIF_BOOLEAN F742_4960 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[Dtype(Current)-741]) == ((EIF_INTEGER_32) 0L));
}

/* {FILE}.is_open_write */
EIF_BOOLEAN F742_4962 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-741]) == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-741]) == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-741]) == ((EIF_INTEGER_32) 5L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-741]) == ((EIF_INTEGER_32) 3L)));
}

/* {FILE}.close */
void F742_4988 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R3726[dtype-742])(Current, *(EIF_POINTER *)(Current + O3644[dtype-741]));
	*(EIF_INTEGER_32 *)(Current + O3783[dtype-741]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3644[dtype-741]) = (EIF_POINTER) tp2;
	*(EIF_BOOLEAN *)(Current + O3792[dtype-741]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {FILE}.put_string */
void F742_5010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-741]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		eif_file_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {FILE}.file_close */
void F742_5058 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_close((FILE*) arg1);
	
}

/* {FILE}.internal_name_pointer */
EIF_REFERENCE F742_5060 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {FILE}.set_name */
void F742_5062 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTOUCR(13,F742_5068, (Current));
	tr1 = F190_2491(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current + _REFACS_2_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.buffered_file_info */
static EIF_REFERENCE F742_5068_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(13)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(189, 0x01).id, 189, _OBJSIZ_3_2_0_0_0_0_0_0_);
	F190_2474(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F742_5068 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(13,F742_5068_body,(Current));
}

/* {FILE}.set_buffer */
void F742_5070 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOUCR(13,F742_5068, (Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = F742_5060(Current);
	F190_2521(RTCW(tr1), tr2, tr3);
	RTLE;
}

/* {FILE}.file_size */
EIF_INTEGER_32 F742_5085 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_size((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_ps */
void F742_5097 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	eif_file_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {FILE}.file_exists */
EIF_BOOLEAN F742_5103 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) arg1));
	
	return Result;
}

/* {FILE}.set_write_mode */
void F742_5126 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3783[Dtype(Current)-741]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

void EIF_Minit182 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

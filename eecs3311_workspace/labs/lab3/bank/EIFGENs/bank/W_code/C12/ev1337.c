/*
 * Code for class EV_TIMEOUT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1337_12215(EIF_REFERENCE);
extern void F1337_12217(EIF_REFERENCE);
extern void F1337_12218(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1337_12219(EIF_REFERENCE);
static EIF_TYPED_VALUE F1337_12220_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1337_12220(EIF_REFERENCE);
extern void F1337_16474(EIF_REFERENCE, int);
extern void EIF_Minit1337(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TIMEOUT_I}.count */
EIF_TYPED_VALUE F1337_12215 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9339,Dtype(Current)));
	return r;
}


/* {EV_TIMEOUT_I}.reset_count */
void F1337_12217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset_count";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1336, Current, 0, 0, 18904);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1336, Current, 18904);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9339, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(9339, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_is_zero", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9339, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_TIMEOUT_I}.on_timeout */
void F1337_12218 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "on_timeout";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1336, Current, 0, 0, 18905);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1336, Current, 18905);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9338, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(9339, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9316, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb3) {
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(9343, dtype));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9338, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 9343, 0x04000000, 1); /* is_timeout_executing */
		*(EIF_BOOLEAN *)(Current + RTWA(9343, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9317, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8402, "actions", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr3))(tr3, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 9339, 0x10000000, 1); /* count */
		(*(EIF_INTEGER_32 *)(Current + RTWA(9339, dtype)))++;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 9343, 0x04000000, 1); /* is_timeout_executing */
		*(EIF_BOOLEAN *)(Current + RTWA(9343, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("count_incremented_or_reset", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9316, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb4) {
			tb4 = *(EIF_BOOLEAN *)(Current + RTWA(9343, dtype));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			RTCO(tr1);
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(9339, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(9339, dtype));
			tb1 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 1L)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {EV_TIMEOUT_I}.is_timeout_executing */
EIF_TYPED_VALUE F1337_12219 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9343,Dtype(Current)));
	return r;
}


/* {EV_TIMEOUT_I}.interface */
static EIF_TYPED_VALUE F1337_12220_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1336, Current, 0, 0, 18907);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1336, Current, 18907);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1337_12220 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9318,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(9318, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1337_12220_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9318,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_TIMEOUT_I}._invariant */
void F1337_16474 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1336, Current, 0, 16473);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("interval_not_negative", Current);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9338, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_not_negative", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9339, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit1337 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

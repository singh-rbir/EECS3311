/*
 * Code for class UC_IMPORTED_UTF32_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1051_9106(EIF_REFERENCE);
extern void EIF_Minit1051(void);

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

/* {UC_IMPORTED_UTF32_ROUTINES}.utf32 */
RTOID (F1051_9106)
EIF_TYPED_VALUE F1051_9106 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "utf32";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1051_9106);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1050, Current, 0, 0, 15384);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1050, Current, 15384);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80004A2, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1186, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("utf32_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit1051 (void)
{
	GTCX
	RTOTS (9106,F1051_9106)
}


#ifdef __cplusplus
}
#endif

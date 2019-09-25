/*
 * Code for class CELL [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce336.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CELL}.item */
EIF_REFERENCE F100_1933 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O1718[Dtype(Current)-99]);
}


/* {CELL}.put */
void F100_1934 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O1718[Dtype(Current)-99]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit336 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

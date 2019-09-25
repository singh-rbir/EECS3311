/*
 * Code for class CELL [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce949.h"

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
EIF_BOOLEAN F104_1933 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O1718[Dtype(Current)-99]);
}


/* {CELL}.put */
void F104_1934 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O1718[Dtype(Current)-99]) = (EIF_BOOLEAN) arg1;
}

void EIF_Minit949 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

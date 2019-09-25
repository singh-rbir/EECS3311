/*
 * Code for class CELL [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce444.h"

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
EIF_INTEGER_32 F103_1933 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O1718[Dtype(Current)-99]);
}


/* {CELL}.put */
void F103_1934 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O1718[Dtype(Current)-99]) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit444 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

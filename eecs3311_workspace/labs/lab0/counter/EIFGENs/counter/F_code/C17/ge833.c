/*
 * Code for class GENERAL_SPECIAL_ITERATION_CURSOR [CHARACTER_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ge833.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.after */
EIF_BOOLEAN F689_4380 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3228[dtype-675]) > *(EIF_INTEGER_32 *)(Current + O3230[dtype-675]));
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.forth */
void F689_4386 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O3228[dtype-675]))++;
}

void EIF_Minit833 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class GENERAL_SPECIAL_ITERATION_CURSOR [NATURAL_8, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ge589.h"

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
EIF_BOOLEAN F682_4380 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3228[dtype-675]) > *(EIF_INTEGER_32 *)(Current + O3230[dtype-675]));
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.forth */
void F682_4386 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O3228[dtype-675]))++;
}

void EIF_Minit589 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

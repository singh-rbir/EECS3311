/*
 * Code for class CHARACTER_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch195.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHARACTER_8}.code */
EIF_INTEGER_32 F802_5624 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = (EIF_INTEGER_32) F800_5581(Current);
	RTLE;
	return Result;
}

/* {CHARACTER_8}.to_character_32 */
EIF_CHARACTER_32 F802_5625 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F800_5598(Current);
}

void EIF_Minit195 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

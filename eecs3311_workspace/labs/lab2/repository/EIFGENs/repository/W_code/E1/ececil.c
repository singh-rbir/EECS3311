#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(864, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A139_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F139_7136)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A160_97 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2343, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A160_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3076, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A160_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3077, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* EXAMPLE_REPOSITORY_TESTS test_array_comparison */
EIF_TYPED_VALUE _A970_75 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5129, "test_array_comparison", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_REPOSITORY_TESTS test_hash_table_retrieval */
EIF_TYPED_VALUE _A970_76 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5130, "test_hash_table_retrieval", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_REPOSITORY_TESTS test_setup */
EIF_TYPED_VALUE _A970_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5132, "test_setup", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_REPOSITORY_TESTS test_matching_keys */
EIF_TYPED_VALUE _A970_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5134, "test_matching_keys", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_REPOSITORY_TESTS test_check_out */
EIF_TYPED_VALUE _A970_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5133, "test_check_out", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_REPOSITORY_TESTS test_iterable_repository */
EIF_TYPED_VALUE _A970_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5135, "test_iterable_repository", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_REPOSITORY_TESTS test_iteration_cursor */
EIF_TYPED_VALUE _A970_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5136, "test_iteration_cursor", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_REPOSITORY_TESTS test_another_cursor */
EIF_TYPED_VALUE _A970_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5137, "test_another_cursor", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t1_test_hashtable_system */
EIF_TYPED_VALUE _A971_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5140, "t1_test_hashtable_system", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t2_setup_testing */
EIF_TYPED_VALUE _A971_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5141, "t2_setup_testing", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t3_testing_repos_check_in */
EIF_TYPED_VALUE _A971_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "t3_testing_repos_check_in", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t4_testing_repos_check_in_data1 */
EIF_TYPED_VALUE _A971_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5143, "t4_testing_repos_check_in_data1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t5_testing_repos_check_in_data2 */
EIF_TYPED_VALUE _A971_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5144, "t5_testing_repos_check_in_data2", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t6_testing_repos_check_out_feature */
EIF_TYPED_VALUE _A971_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5145, "t6_testing_repos_check_out_feature", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t7_testing_repos_all_data_exists */
EIF_TYPED_VALUE _A971_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5146, "t7_testing_repos_all_data_exists", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t8_test_iterable */
EIF_TYPED_VALUE _A971_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5147, "t8_test_iterable", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t9_test_another_cursor */
EIF_TYPED_VALUE _A971_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5148, "t9_test_another_cursor", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TESTS t10_testing_repos_check_out_feature */
EIF_TYPED_VALUE _A971_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5149, "t10_testing_repos_check_out_feature", closed [1].it_r))(closed [1].it_r);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A160_97,
(fnptr)A160_161,
(fnptr)A160_162,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif

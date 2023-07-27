#ifndef SCP_MATRIX_TESTS_H
#define SCP_MATRIX_TESTS_H

#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../scp_utils.h"

#define PRE_TEST_HEADER "\033[33m**"
#define POST_TEST_HEADER "**\033[0m"

#define INV_MATRIX matrix_t inv_matrix = {NULL, -1, -1};

Suite *suite_scp_eq_matrix(void);
Suite *suite_scp_create_matrix(void);
Suite *suite_scp_sum_matrix(void);
Suite *suite_scp_sub_matrix(void);
Suite *suite_scp_mult_number_matrix(void);
Suite *suite_scp_mult_matrix(void);
Suite *suite_scp_transpose_matrix(void);
Suite *suite_scp_calc_complements(void);
Suite *suite_scp_determinant(void);
Suite *suite_scp_inverse_matrix(void);

Suite *scp_determinant_tests(void);
Suite *scp_eq_matrix_tests(void);
Suite *scp_inverse_matrix_tests(void);
Suite *scp_mult_matrix_tests(void);
Suite *scp_mult_number_matrix_tests(void);
Suite *scp_sub_matrix_tests(void);
Suite *scp_sum_matrix_tests(void);
Suite *scp_transpose_matrix_tests(void);

double get_rand(double min, double max);
#endif  //  SCP_MATRIX_TESTS_H

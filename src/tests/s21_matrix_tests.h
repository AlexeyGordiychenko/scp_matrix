#ifndef S21_MATRIX_TESTS_H
#define S21_MATRIX_TESTS_H

#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../s21_utils.h"

#define PRE_TEST_HEADER "\033[33m**"
#define POST_TEST_HEADER "**\033[0m"

#define INV_MATRIX matrix_t inv_matrix = {NULL, -1, -1};

Suite *suite_s21_eq_matrix(void);
Suite *suite_s21_create_matrix(void);
Suite *suite_s21_sum_matrix(void);
Suite *suite_s21_sub_matrix(void);
Suite *suite_s21_mult_number_matrix(void);
Suite *suite_s21_mult_matrix(void);
Suite *suite_s21_transpose_matrix(void);
Suite *suite_s21_calc_complements(void);
Suite *suite_s21_determinant(void);
Suite *suite_s21_inverse_matrix(void);

Suite *s21_determinant_tests(void);
Suite *s21_eq_matrix_tests(void);
Suite *s21_inverse_matrix_tests(void);
Suite *s21_mult_matrix_tests(void);
Suite *s21_mult_number_matrix_tests(void);
Suite *s21_sub_matrix_tests(void);
Suite *s21_sum_matrix_tests(void);
Suite *s21_transpose_matrix_tests(void);

double get_rand(double min, double max);
#endif  //  S21_MATRIX_TESTS_H

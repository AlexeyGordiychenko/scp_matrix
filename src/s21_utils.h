#ifndef SRC_S21_UTILS_H
#define SRC_S21_UTILS_H

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_matrix.h"

enum { S21_OK, S21_ERROR, S21_CALC_ERROR };
enum { S21_FAILURE, S21_SUCCESS };

#define S21_EPS 1e-7

bool s21_is_valid_matrix(matrix_t* A);
bool s21_identical_size(matrix_t* A, matrix_t* B);
bool s21_is_square_matrix(matrix_t* A);
int s21_matrix_sum_sub(matrix_t* A, matrix_t* B, matrix_t* result, int sign);
int s21_minor_matrix(matrix_t* A, matrix_t* result, int row, int column);
#endif
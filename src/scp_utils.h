#ifndef SRC_SCP_UTILS_H
#define SRC_SCP_UTILS_H

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "scp_matrix.h"

enum { SCP_OK, SCP_ERROR, SCP_CALC_ERROR };
enum { SCP_FAILURE, SCP_SUCCESS };

#define SCP_EPS 1e-7

bool scp_is_valid_matrix(matrix_t* A);
bool scp_identical_size(matrix_t* A, matrix_t* B);
bool scp_is_square_matrix(matrix_t* A);
int scp_matrix_sum_sub(matrix_t* A, matrix_t* B, matrix_t* result, int sign);
int scp_minor_matrix(matrix_t* A, matrix_t* result, int row, int column);
#endif
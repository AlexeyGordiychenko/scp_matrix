#include "scp_utils.h"

bool scp_is_valid_matrix(matrix_t *A) {
  return !(A == NULL || A->matrix == NULL || A->rows <= 0 || A->columns <= 0);
}

bool scp_identical_size(matrix_t *A, matrix_t *B) {
  return A->rows == B->rows && A->columns == B->columns;
}

bool scp_is_square_matrix(matrix_t *A) { return A->columns == A->rows; }

int scp_matrix_sum_sub(matrix_t *A, matrix_t *B, matrix_t *result, int sign) {
  if (!scp_is_valid_matrix(A) || !scp_is_valid_matrix(B)) return SCP_ERROR;
  if (!scp_identical_size(A, B)) return SCP_CALC_ERROR;

  scp_create_matrix(A->rows, A->columns, result);
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j] * sign;
    }
  }

  return SCP_OK;
}

int scp_minor_matrix(matrix_t *A, matrix_t *result, int row, int column) {
  if (!scp_is_valid_matrix(A)) return SCP_ERROR;

  int res = SCP_OK;
  if (scp_is_square_matrix(A)) {
    int res = scp_create_matrix(A->rows - 1, A->columns - 1, result);
    if (res == SCP_OK) {
      for (int i = 0, k = 0; i < result->rows; i++, k++) {
        k += i == row;
        for (int j = 0, m = 0; j < result->columns; j++, m++) {
          m += j == column;
          result->matrix[i][j] = A->matrix[k][m];
        }
      }
    }
  } else
    res = SCP_CALC_ERROR;

  return res;
}

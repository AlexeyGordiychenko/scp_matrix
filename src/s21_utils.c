#include "s21_utils.h"

bool s21_is_valid_matrix(matrix_t *A) {
  return !(A == NULL || A->matrix == NULL || A->rows <= 0 || A->columns <= 0);
}

bool s21_identical_size(matrix_t *A, matrix_t *B) {
  return A->rows == B->rows && A->columns == B->columns;
}

bool s21_is_square_matrix(matrix_t *A) { return A->columns == A->rows; }

int s21_matrix_sum_sub(matrix_t *A, matrix_t *B, matrix_t *result, int sign) {
  if (!s21_is_valid_matrix(A) || !s21_is_valid_matrix(B)) return S21_ERROR;
  if (!s21_identical_size(A, B)) return S21_CALC_ERROR;

  s21_create_matrix(A->rows, A->columns, result);
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j] * sign;
    }
  }

  return S21_OK;
}

int s21_minor_matrix(matrix_t *A, matrix_t *result, int row, int column) {
  if (!s21_is_valid_matrix(A)) return S21_ERROR;

  int res = S21_OK;
  if (s21_is_square_matrix(A)) {
    int res = s21_create_matrix(A->rows - 1, A->columns - 1, result);
    if (res == S21_OK) {
      for (int i = 0, k = 0; i < result->rows; i++, k++) {
        k += i == row;
        for (int j = 0, m = 0; j < result->columns; j++, m++) {
          m += j == column;
          result->matrix[i][j] = A->matrix[k][m];
        }
      }
    }
  } else
    res = S21_CALC_ERROR;

  return res;
}

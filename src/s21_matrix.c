#include "s21_utils.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  if (rows <= 0 || columns <= 0 || result == NULL) return S21_ERROR;

  result->matrix = (double **)calloc(rows, sizeof(double *));
  for (int i = 0; i < rows; i++) {
    result->matrix[i] = (double *)calloc(columns, sizeof(double));
  }
  result->rows = rows;
  result->columns = columns;

  return S21_OK;
}

void s21_remove_matrix(matrix_t *A) {
  if (A == NULL) return;
  for (int i = 0; i < A->rows; i++) {
    if (A->matrix[i]) free(A->matrix[i]);
  }
  free(A->matrix);
  A->matrix = NULL;
  A->rows = 0;
  A->columns = 0;
}

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int res = S21_SUCCESS;

  if (s21_is_valid_matrix(A) && s21_is_valid_matrix(B) &&
      s21_identical_size(A, B)) {
    for (int i = 0; i < A->rows && res; i++)
      for (int j = 0; j < A->columns && res; j++)
        if (fabs((A->matrix[i][j]) - (B->matrix[i][j])) > S21_EPS)
          res = S21_FAILURE;
  } else {
    res = S21_FAILURE;
  }

  return res;
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return s21_matrix_sum_sub(A, B, result, 1);
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return s21_matrix_sum_sub(A, B, result, -1);
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  if (!s21_is_valid_matrix(A)) return S21_ERROR;

  int res = s21_create_matrix(A->rows, A->columns, result);

  if (res == S21_OK)
    for (int i = 0; i < A->rows; i++)
      for (int j = 0; j < A->columns; j++)
        result->matrix[i][j] = A->matrix[i][j] * number;

  return res;
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  if (!s21_is_valid_matrix(A) || !s21_is_valid_matrix(B)) return S21_ERROR;
  if (A->columns != B->rows) return S21_CALC_ERROR;

  int res = s21_create_matrix(A->rows, B->columns, result);
  if (res == S21_OK)
    for (int i = 0; i < A->rows; i++)
      for (int j = 0; j < B->columns; j++)
        for (int k = 0; k < A->columns; k++)
          result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];

  return res;
}

int s21_transpose(matrix_t *A, matrix_t *result) {
  if (!s21_is_valid_matrix(A)) return S21_ERROR;
  int res = s21_create_matrix(A->columns, A->rows, result);
  if (res == S21_OK)
    for (int i = 0; i < result->rows; i++)
      for (int j = 0; j < result->columns; j++)
        result->matrix[i][j] = A->matrix[j][i];

  return res;
}

int s21_calc_complements(matrix_t *A, matrix_t *result) {
  if (!s21_is_valid_matrix(A)) return S21_ERROR;

  int res = S21_OK;
  if (s21_is_square_matrix(A)) {
    res = s21_create_matrix(A->columns, A->rows, result);
    if (res == S21_OK) {
      for (int i = 0; i < A->rows; i++)
        for (int j = 0; j < A->columns; j++) {
          double det = 0;
          matrix_t minor = {0};
          s21_minor_matrix(A, &minor, i, j);
          s21_determinant(&minor, &det);
          s21_remove_matrix(&minor);
          result->matrix[i][j] = (i + j) % 2 ? -det : det;
        }
    }
  } else {
    res = S21_CALC_ERROR;
  }

  return res;
}

int s21_determinant(matrix_t *A, double *result) {
  if (!s21_is_valid_matrix(A) || result == NULL) return S21_ERROR;

  int res = S21_OK;
  *result = 0;
  if (s21_is_square_matrix(A)) {
    if (A->rows == 1)
      *result = A->matrix[0][0];
    else if (A->rows == 2) {
      *result = (A->matrix[0][0] * A->matrix[1][1] -
                 A->matrix[1][0] * A->matrix[0][1]);
    } else {
      for (int i = 0; i < A->rows; i++) {
        double alem = i % 2 ? -A->matrix[0][i] : A->matrix[0][i];
        double det = 0;
        matrix_t minor = {0};
        s21_minor_matrix(A, &minor, 0, i);
        s21_determinant(&minor, &det);
        s21_remove_matrix(&minor);
        *result += alem * det;
      }
    }
  } else
    res = S21_CALC_ERROR;

  return res;
}

int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  if (!s21_is_valid_matrix(A)) return S21_ERROR;

  int res = S21_CALC_ERROR;
  if (s21_is_square_matrix(A)) {
    if (A->rows == 1) {
      double value = A->matrix[0][0];
      if (value != 0) {
        res = s21_create_matrix(1, 1, result);
        if (res == S21_OK) result->matrix[0][0] = 1 / value;
      }
    } else {
      double det = 0;
      s21_determinant(A, &det);
      if (det) {
        matrix_t temp = {0};
        s21_calc_complements(A, &temp);
        s21_transpose(&temp, result);
        s21_remove_matrix(&temp);
        for (int i = 0; i < result->rows; i++)
          for (int j = 0; j < result->columns; j++)
            result->matrix[i][j] = (result->matrix[i][j]) / det;

        res = S21_OK;
      }
    }
  }

  return res;
}

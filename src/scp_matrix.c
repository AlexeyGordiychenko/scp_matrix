#include "scp_utils.h"

int scp_create_matrix(int rows, int columns, matrix_t *result) {
  if (rows <= 0 || columns <= 0 || result == NULL) return SCP_ERROR;

  result->matrix = (double **)calloc(rows, sizeof(double *));
  for (int i = 0; i < rows; i++) {
    result->matrix[i] = (double *)calloc(columns, sizeof(double));
  }
  result->rows = rows;
  result->columns = columns;

  return SCP_OK;
}

void scp_remove_matrix(matrix_t *A) {
  if (A == NULL) return;
  for (int i = 0; i < A->rows; i++) {
    if (A->matrix[i]) free(A->matrix[i]);
  }
  free(A->matrix);
  A->matrix = NULL;
  A->rows = 0;
  A->columns = 0;
}

int scp_eq_matrix(matrix_t *A, matrix_t *B) {
  int res = SCP_SUCCESS;

  if (scp_is_valid_matrix(A) && scp_is_valid_matrix(B) &&
      scp_identical_size(A, B)) {
    for (int i = 0; i < A->rows && res; i++)
      for (int j = 0; j < A->columns && res; j++)
        if (fabs((A->matrix[i][j]) - (B->matrix[i][j])) > SCP_EPS)
          res = SCP_FAILURE;
  } else {
    res = SCP_FAILURE;
  }

  return res;
}

int scp_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return scp_matrix_sum_sub(A, B, result, 1);
}

int scp_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return scp_matrix_sum_sub(A, B, result, -1);
}

int scp_mult_number(matrix_t *A, double number, matrix_t *result) {
  if (!scp_is_valid_matrix(A)) return SCP_ERROR;

  int res = scp_create_matrix(A->rows, A->columns, result);

  if (res == SCP_OK)
    for (int i = 0; i < A->rows; i++)
      for (int j = 0; j < A->columns; j++)
        result->matrix[i][j] = A->matrix[i][j] * number;

  return res;
}

int scp_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  if (!scp_is_valid_matrix(A) || !scp_is_valid_matrix(B)) return SCP_ERROR;
  if (A->columns != B->rows) return SCP_CALC_ERROR;

  int res = scp_create_matrix(A->rows, B->columns, result);
  if (res == SCP_OK)
    for (int i = 0; i < A->rows; i++)
      for (int j = 0; j < B->columns; j++)
        for (int k = 0; k < A->columns; k++)
          result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];

  return res;
}

int scp_transpose(matrix_t *A, matrix_t *result) {
  if (!scp_is_valid_matrix(A)) return SCP_ERROR;
  int res = scp_create_matrix(A->columns, A->rows, result);
  if (res == SCP_OK)
    for (int i = 0; i < result->rows; i++)
      for (int j = 0; j < result->columns; j++)
        result->matrix[i][j] = A->matrix[j][i];

  return res;
}

int scp_calc_complements(matrix_t *A, matrix_t *result) {
  if (!scp_is_valid_matrix(A)) return SCP_ERROR;

  int res = SCP_OK;
  if (scp_is_square_matrix(A)) {
    res = scp_create_matrix(A->columns, A->rows, result);
    if (res == SCP_OK) {
      for (int i = 0; i < A->rows; i++)
        for (int j = 0; j < A->columns; j++) {
          double det = 0;
          matrix_t minor = {0};
          scp_minor_matrix(A, &minor, i, j);
          scp_determinant(&minor, &det);
          scp_remove_matrix(&minor);
          result->matrix[i][j] = (i + j) % 2 ? -det : det;
        }
    }
  } else {
    res = SCP_CALC_ERROR;
  }

  return res;
}

int scp_determinant(matrix_t *A, double *result) {
  if (!scp_is_valid_matrix(A) || result == NULL) return SCP_ERROR;

  int res = SCP_OK;
  *result = 0;
  if (scp_is_square_matrix(A)) {
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
        scp_minor_matrix(A, &minor, 0, i);
        scp_determinant(&minor, &det);
        scp_remove_matrix(&minor);
        *result += alem * det;
      }
    }
  } else
    res = SCP_CALC_ERROR;

  return res;
}

int scp_inverse_matrix(matrix_t *A, matrix_t *result) {
  if (!scp_is_valid_matrix(A)) return SCP_ERROR;

  int res = SCP_CALC_ERROR;
  if (scp_is_square_matrix(A)) {
    if (A->rows == 1) {
      double value = A->matrix[0][0];
      if (value != 0) {
        res = scp_create_matrix(1, 1, result);
        if (res == SCP_OK) result->matrix[0][0] = 1 / value;
      }
    } else {
      double det = 0;
      scp_determinant(A, &det);
      if (det) {
        matrix_t temp = {0};
        scp_calc_complements(A, &temp);
        scp_transpose(&temp, result);
        scp_remove_matrix(&temp);
        for (int i = 0; i < result->rows; i++)
          for (int j = 0; j < result->columns; j++)
            result->matrix[i][j] = (result->matrix[i][j]) / det;

        res = SCP_OK;
      }
    }
  }

  return res;
}

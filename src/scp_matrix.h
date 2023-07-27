#ifndef SRC_SCP_MATRIX_H
#define SRC_SCP_MATRIX_H

typedef struct matrix_struct {
  double **matrix;
  int rows;
  int columns;
} matrix_t;

int scp_create_matrix(int rows, int columns, matrix_t *result);
void scp_remove_matrix(matrix_t *A);
int scp_eq_matrix(matrix_t *A, matrix_t *B);
int scp_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int scp_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int scp_mult_number(matrix_t *A, double number, matrix_t *result);
int scp_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int scp_transpose(matrix_t *A, matrix_t *result);
int scp_calc_complements(matrix_t *A, matrix_t *result);
int scp_determinant(matrix_t *A, double *result);
int scp_inverse_matrix(matrix_t *A, matrix_t *result);
#endif
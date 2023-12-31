# scp_matrix (Individual project)

## Score:
The final score is 100% (max)

## Task
Implementation of the matrix.h library.   

### Matrix structure in C language:

```c
typedef struct matrix_struct {
    double** matrix;
    int rows;
    int columns;
} matrix_t;
```
## Matrix operations

All operations (except matrix comparison) should return the resulting code:
- 0 - OK
- 1 - Error, incorrect matrix
- 2 - Calculation error (mismatched matrix sizes; matrix for which calculations cannot be performed, etc.)

```c
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
```

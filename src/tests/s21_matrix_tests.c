#include "s21_matrix_tests.h"

int main(void) {
  int failed = 0;
  Suite *s21_matrix_tests[] = {s21_determinant_tests(),
                               s21_eq_matrix_tests(),
                               s21_inverse_matrix_tests(),
                               s21_mult_matrix_tests(),
                               s21_mult_number_matrix_tests(),
                               s21_sub_matrix_tests(),
                               s21_sum_matrix_tests(),
                               s21_transpose_matrix_tests(),
                               NULL};

  for (int i = 0; s21_matrix_tests[i] != NULL; i++) {
    SRunner *sr = srunner_create(s21_matrix_tests[i]);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("========= FAILED: %d =========\n", failed);

  return failed == 0 ? 0 : 1;
}

double get_rand(double min, double max) {
  double val = (double)rand() / RAND_MAX;
  return min + val * (max - min);
}
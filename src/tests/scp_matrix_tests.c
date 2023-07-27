#include "scp_matrix_tests.h"

int main(void) {
  int failed = 0;
  Suite *scp_matrix_tests[] = {scp_determinant_tests(),
                               scp_eq_matrix_tests(),
                               scp_inverse_matrix_tests(),
                               scp_mult_matrix_tests(),
                               scp_mult_number_matrix_tests(),
                               scp_sub_matrix_tests(),
                               scp_sum_matrix_tests(),
                               scp_transpose_matrix_tests(),
                               NULL};

  for (int i = 0; scp_matrix_tests[i] != NULL; i++) {
    SRunner *sr = srunner_create(scp_matrix_tests[i]);

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
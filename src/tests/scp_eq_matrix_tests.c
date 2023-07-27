#include "scp_matrix_tests.h"

START_TEST(scp_eq_0) {
  int rows = 2, cols = 3;
  matrix_t M1 = {0};
  scp_create_matrix(rows, cols, &M1);
  double m1r0[] = {0.5311391831328065, 0.24646638007808075,
                   0.36055645057597374};
  double m1r1[] = {0.5751026043902523, 0.9586403059129718, 0.8888374315559862};

  for (int j = 0; j < cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
  }
  matrix_t M2 = {0};
  scp_create_matrix(rows, cols, &M2);
  double m2r0[] = {0.6366061180690801, 0.11570441609815829,
                   0.35104672156625893};
  double m2r1[] = {0.9867458107418408, 0.6815105219652572, 0.9834956213379799};

  for (int j = 0; j < cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
  }
  ck_assert_int_eq(scp_eq_matrix(&M1, &M2), SCP_FAILURE);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_eq_1) {
  int rows = 2, cols = 3;
  matrix_t M1 = {0};
  scp_create_matrix(rows, cols, &M1);
  double m1r0[] = {0.53113918, 0.24646638, 0.36055645};
  double m1r1[] = {0.57510260, 0.95864030, 0.88883743};

  for (int j = 0; j < cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
  }
  matrix_t M2 = {0};
  scp_create_matrix(rows, cols, &M2);
  double m2r0[] = {0.53113917, 0.24646632, 0.36055644};
  double m2r1[] = {0.57510262, 0.95864033, 0.88883748};

  for (int j = 0; j < cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
  }
  ck_assert_int_eq(scp_eq_matrix(&M1, &M2), SCP_SUCCESS);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_eq_2) {
  int rows = 2, cols = 3;
  matrix_t M1 = {0};
  scp_create_matrix(rows, cols, &M1);
  double m1r0[] = {0.5311391, 0.2464663, 0.3605564};
  double m1r1[] = {0.5751026, 0.9586403, 0.8888372};

  for (int j = 0; j < cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
  }
  matrix_t M2 = {0};
  scp_create_matrix(rows, cols, &M2);
  double m2r0[] = {0.5311391, 0.2464663, 0.3605564};
  double m2r1[] = {0.5751026, 0.9586403, 0.8888373};

  for (int j = 0; j < cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
  }
  ck_assert_int_eq(scp_eq_matrix(&M1, &M2), SCP_FAILURE);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_eq_3) {
  int rows = 2, cols = 3;
  matrix_t M1 = {0};
  scp_create_matrix(rows, cols, &M1);
  matrix_t M2 = {0};
  scp_create_matrix(rows, cols, &M2);
  double r0[] = {0.5311391831328065, 0.24646638007808075, 0.36055645057597374};
  double r1[] = {0.5751026043902523, 0.9586403059129718, 0.8888374315559862};

  for (int j = 0; j < cols; j++) {
    M1.matrix[0][j] = r0[j];
    M1.matrix[1][j] = r1[j];
    M2.matrix[0][j] = r0[j];
    M2.matrix[1][j] = r1[j];
  }
  ck_assert_int_eq(scp_eq_matrix(&M1, &M2), SCP_SUCCESS);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_eq_4) {
  matrix_t M2 = {0};
  matrix_t M1 = {0};
  scp_create_matrix(2, 3, &M1);
  scp_create_matrix(3, 2, &M2);
  ck_assert_int_eq(scp_eq_matrix(&M1, &M2), SCP_FAILURE);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_eq_5) {
  ck_assert_int_eq(scp_eq_matrix(NULL, NULL), SCP_FAILURE);
}
END_TEST

START_TEST(scp_eq_6) {
  INV_MATRIX
  ck_assert_int_eq(scp_eq_matrix(&inv_matrix, &inv_matrix), SCP_FAILURE);
}
END_TEST

Suite *scp_eq_matrix_tests(void) {
  Suite *s1 = suite_create(PRE_TEST_HEADER "SCP_EQ_MATRIX" POST_TEST_HEADER);
  TCase *tc1_1 = tcase_create("SCP_EQ_MATRIX");

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, scp_eq_0);
  tcase_add_test(tc1_1, scp_eq_1);
  tcase_add_test(tc1_1, scp_eq_2);
  tcase_add_test(tc1_1, scp_eq_3);
  tcase_add_test(tc1_1, scp_eq_4);
  tcase_add_test(tc1_1, scp_eq_5);
  tcase_add_test(tc1_1, scp_eq_6);

  return s1;
}

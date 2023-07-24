/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "s21_sub_matrix_tests.tc" instead.
 */

#include "s21_matrix_tests.h"
START_TEST(s21_sub_0) {
  int m1rows = 7, m1cols = 7;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {-68.0979634340914,   -2760.264479479314,  0.9871760470520193,
                   -0.2699070590388253, -0.3498302403245581, 8626195623.154875,
                   -5715016475.556428};
  double m1r1[] = {-99.65245924589317, -0.2317796716164141, 8.489384999537485,
                   0.7038171263966901, 2813.4233013789267,  11.466911467876939,
                   -29.42871434376313};
  double m1r2[] = {6.574177064948616,  6394922551.463158,  -0.8760035421480079,
                   0.6601719238400391, -688410935.2535584, -5892661191.648887,
                   283448.40742904996};
  double m1r3[] = {-0.8221136598203787, -93197083.44207375, 102937.546207299,
                   180.9988928841444,   8.522420190271209,  0.8554576036695521,
                   -121.44035741774006};
  double m1r4[] = {686938029.882603,  -0.8328747143359453,  342669050.9761164,
                   84688.86891490206, -0.34352403338829796, 92213.37411419503,
                   -48372.61168045169};
  double m1r5[] = {-3564855.433766904,  2798424670.926507,  24785910.63078812,
                   0.08413807646510896, -942.6434825225782, 20261821.169895433,
                   1.786855614264281};
  double m1r6[] = {761.4220467777757,  -0.5997592356062041,
                   -91922.43407629266, -467.55537846036964,
                   2.028640046080248,  -3405.0606732358156,
                   561.1987604131281};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
    M1.matrix[5][j] = m1r5[j];
    M1.matrix[6][j] = m1r6[j];
  }
  int m2rows = 7, m2cols = 7;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {0.5133113976948644, 6.344809180454943,   3170523.4706798024,
                   727.6286047938646,  -136499.64264454306, -39996512.656182535,
                   109.76978632547485};
  double m2r1[] = {-9802.621020215918, 9.085367036479946,  2992928.8192819324,
                   -9628339967.482996, -71303.53563198916, 25369.483539046112,
                   0.04202233291918023};
  double m2r2[] = {7.596650815573628,  16.381510932619882, -0.47360635519308214,
                   -2025.220711475062, 36331.96085585203,  -0.541186875380966,
                   898909.4890477888};
  double m2r3[] = {695.6134300807836,   814.6012311555241,   -9546.627070248302,
                   -376545.04213598225, -17772276.636786044, -572.9515817970276,
                   23749567.75474496};
  double m2r4[] = {9.20303861808065,  9.99827862287392,  1710874439.1130137,
                   0.607165966833257, 948.3982446718716, -344501.4071855115,
                   93900.70933121463};
  double m2r5[] = {-86.15273309672718,  441958.22349001747, -4001454574.2108974,
                   -0.6131424621772302, 1874015703.2347949, -70768.18598225982,
                   -0.7132414837870783};
  double m2r6[] = {-6510418.182093741,  -47.220095479008165, 30716.059908896943,
                   -3082.4639427991206, 298796.87066715263,  -479.3027436927317,
                   -0.5126226900153061};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
    M2.matrix[4][j] = m2r4[j];
    M2.matrix[5][j] = m2r5[j];
    M2.matrix[6][j] = m2r6[j];
  }
  int m_correctrows = 7, m_correctcols = 7;
  matrix_t M_correct = {0};
  s21_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {-68.61127483178626, -2766.609288659769,
                          -3170522.483503755, -727.8985118529034,
                          136499.29281430272, 8666192135.811058,
                          -5715016585.326214};
  double m_correctr1[] = {9702.968560970025,  -9.31714670809636,
                          -2992920.329896933, 9628339968.186813,
                          74116.95893336808,  -25358.016627578236,
                          -29.47073667668231};
  double m_correctr2[] = {-1.0224737506250117,  6394922535.081647,
                          -0.40239718695492577, 2025.880883398902,
                          -688447267.2144142,   -5892661191.107699,
                          -615461.0816187388};
  double m_correctr3[] = {-696.435543740604,  -93197898.0433049,
                          112484.1732775473,  376726.04102886637,
                          17772285.159206234, 573.8070394006972,
                          -23749689.19510238};
  double m_correctr4[] = {686938020.6795645,   -10.831153337209866,
                          -1368205388.1368973, 84688.26174893523,
                          -948.7417687052599,  436714.78129970655,
                          -142273.32101166632};
  double m_correctr5[] = {-3564769.281033807,  2797982712.7030168,
                          4026240484.841686,   0.6972805386423392,
                          -1874016645.8782773, 20332589.355877694,
                          2.5000970980513593};
  double m_correctr6[] = {6511179.604140519,   46.62033624340196,
                          -122638.4939851896,  2614.9085643387507,
                          -298794.84202710656, -2925.7579295430837,
                          561.7113831031434};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
    M_correct.matrix[3][j] = m_correctr3[j];
    M_correct.matrix[4][j] = m_correctr4[j];
    M_correct.matrix[5][j] = m_correctr5[j];
    M_correct.matrix[6][j] = m_correctr6[j];
  }
  matrix_t M_res;
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(s21_eq_matrix(&M_res, &M_correct), S21_SUCCESS);
  ck_assert_int_eq(res, S21_OK);
  s21_remove_matrix(&M_correct);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_1) {
  int m1rows = 7, m1cols = 5;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {41731.81184682022, -517.6226865009338, 7054111.458083242,
                   -630444.5405780507, -6367648946.385511};
  double m1r1[] = {-0.1616164072667976, -9779.969275009647, -19.64550099986565,
                   -0.9426081961246975, 442.981414241893};
  double m1r2[] = {-107599.11297433477, -0.40990846022775296,
                   -37742.17097721188, -4777039412.35395, -0.9162334847624688};
  double m1r3[] = {0.8928905394917076, -10176848.803908955, 0.45999801721733213,
                   623261559.885067, 47465482.50005242};
  double m1r4[] = {-0.11054078101176223, 32.364561038657534,
                   0.08207570228183503, 5332515.4392934395, 0.7116548080465888};
  double m1r5[] = {-219365.35912067158, 729345.653229693, 0.37353897279539194,
                   335.84573925009477, 0.6500324065269488};
  double m1r6[] = {-9933.103993363738, 83643859.16171566, 997.3718758695998,
                   -86960891.24555828, 3746202618.049417};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
    M1.matrix[5][j] = m1r5[j];
    M1.matrix[6][j] = m1r6[j];
  }
  int m2rows = 5, m2cols = 7;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {38018.78038103564,  -594092522.5203738,  828006997.3714172,
                   -6.362059513275133, 0.30175007486167216, -8.298498586713507,
                   183.79209735163295};
  double m2r1[] = {219958.1817755194,  5804803.580242045,  -319.3692947244946,
                   -68762780.39563866, -942.7805264394879, -69616.7012755338,
                   2.5657371763757086};
  double m2r2[] = {-4433.006318715172,   4816.915594702144,
                   -0.05446420608777003, 78796.31205283584,
                   0.14920851678779223,  -90921690.45403297,
                   -2.8673671387317023};
  double m2r3[] = {-9128478.207922569,  93885112.01329546,
                   37872.17273437015,   0.5279322994600467,
                   -0.2651797158471819, -0.18027719754846017,
                   -100.95953392149003};
  double m2r4[] = {5715.5761056756755, 5969663013.152268,  17.53879630523858,
                   -78.26891731595852, -81939904.78667416, 829.580825498301,
                   47.45202902128555};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
    M2.matrix[4][j] = m2r4[j];
  }
  matrix_t M_res = {0};
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(res, S21_CALC_ERROR);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_2) {
  int m1rows = 1, m1cols = 8;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {-4576158.0764243,   263089395.4298241,   -1.0801834429122192,
                   -546623233.3548597, -116302.75261608913, 24787314.555053063,
                   8.459985341907949,  1307.616070261507};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
  }
  int m2rows = 8, m2cols = 1;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-608655259.8513756};
  double m2r1[] = {163897.13391241888};
  double m2r2[] = {-49338.78485905925};
  double m2r3[] = {-2.2852140758547312};
  double m2r4[] = {82308.37669110014};
  double m2r5[] = {-871170.7868512876};
  double m2r6[] = {-137.01567880070542};
  double m2r7[] = {-169.52323692723715};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
    M2.matrix[4][j] = m2r4[j];
    M2.matrix[5][j] = m2r5[j];
    M2.matrix[6][j] = m2r6[j];
    M2.matrix[7][j] = m2r7[j];
  }
  matrix_t M_res = {0};
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(res, S21_CALC_ERROR);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_3) {
  int m1rows = 7, m1cols = 4;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {417323.18406325707, -0.6934893360753942, 0.5794180459916131,
                   862.5879826541855};
  double m1r1[] = {-372215.4854464672, -0.8733250598545269, 0.03271475579151539,
                   -615.3835860813529};
  double m1r2[] = {-13916426.06461323, -5209947.302725304, 1104710142.5418248,
                   0.9715181142863661};
  double m1r3[] = {74052263.04952101, -863618.4846470172, 7187187.059361119,
                   -175590658.553324};
  double m1r4[] = {47.23437937005749, 44819393.293784834, -0.6266414281355165,
                   -203987951.72231722};
  double m1r5[] = {0.14995944435755515, 460805366.9983317, 382.27217551996097,
                   -2972416150.126196};
  double m1r6[] = {6.044060133417801, -338535192.28920484, -30728.34877466436,
                   -945186391.4802785};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
    M1.matrix[5][j] = m1r5[j];
    M1.matrix[6][j] = m1r6[j];
  }
  int m2rows = 4, m2cols = 7;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-585204.0083249845, 9776596.04914901,   -8154.658800712199,
                   88075.85916016465,  -1.569185268493084, 6252.747229838092,
                   0.6289018028203415};
  double m2r1[] = {-465833409.5398754,  -705939.2887383208, -257087.49233717244,
                   -336652.01418207225, 32841013.29531721,  30585378.868983027,
                   291.6560645026028};
  double m2r2[] = {9997.818424388724,   68236160.2348784,   -0.3595031876408542,
                   -2722.3403302868664, -2180.265793546895, -0.5365796817442013,
                   -102778289.61613111};
  double m2r3[] = {-50.35181949398684, -97.40014087562555, 36587.165605996466,
                   7.182523407959513,  -970.3790143757128, 2646304722.6177907,
                   -3123979720.3529983};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
  }
  matrix_t M_res = {0};
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(res, S21_CALC_ERROR);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_4) {
  int m1rows = 3, m1cols = 3;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {954.0221163504008, -950.5447144208111, 47.341595269957146};
  double m1r1[] = {1.5763498116156105, -74.91184111395849, 0.568654964459977};
  double m1r2[] = {298960.2462904546, -5.858366012920298, 936001005.5908043};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
  }
  int m2rows = 3, m2cols = 3;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-753306919.3711793, 606751.5121640266, 0.960737503088772};
  double m2r1[] = {0.6910739001247732, -15713181.91033374, -16499.614443544695};
  double m2r2[] = {753.9341382990939, -23028802.0550243, -0.851552892939911};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
  }
  int m_correctrows = 3, m_correctcols = 3;
  matrix_t M_correct = {0};
  s21_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {753307873.3932956, -607702.0568784474,
                          46.380857766868374};
  double m_correctr1[] = {0.8852759114908373, 15713106.998492626,
                          16500.183098509155};
  double m_correctr2[] = {298206.3121521555, 23028796.196658287,
                          936001006.4423572};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
  }
  matrix_t M_res = {0};
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(s21_eq_matrix(&M_res, &M_correct), S21_SUCCESS);
  ck_assert_int_eq(res, S21_OK);
  s21_remove_matrix(&M_correct);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_5) {
  int m1rows = 9, m1cols = 9;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {9330690405.75228,   6824.241092012856,  65905622.05955819,
                   -301869868.8752515, -9.644023092004428, -3.051881478947066,
                   -81.83159199172341, 15438.728318918782, -0.477905381788328};
  double m1r1[] = {
      -0.1791624564934552, 0.9445061761549236, -84.0351908531643,
      -31.638906771009935, -2799252.222375539, 4874452.301541916,
      -68.66990296094122,  -54.79854996456462, -0.8358142643366272};
  double m1r2[] = {292095.6582130148,  -77.92128757726523,  69072256.11876251,
                   83712.77358981706,  6536.807883057003,   0.26296882528591836,
                   -303137.2581265819, -0.8073067451072462, -38564966.86105637};
  double m1r3[] = {
      -0.8838039194586652, 5768.503023626195,   -418644077.52334434,
      912785915.7636765,   610475.8147690803,   527.5178071650056,
      1486.9227394663342,  -214171.82308083738, 1.6017420845241581};
  double m1r4[] = {
      -20271.66360828957,  -7337375.208174186,   -0.8081764111737294,
      3855.106851438799,   -662.6586845444328,   0.3350014602954374,
      0.05245494865691269, -0.09106204010494356, 14.858555200209256};
  double m1r5[] = {1847.8437849522122,  -75.96016808955186, 0.5227815024708031,
                   -7941594.083154554,  26.125208472597738, 1.0038605318554605,
                   -21.888990328193213, -75384676.40481938, 72.47375441768871};
  double m1r6[] = {92.57602395986314, -924065.5965726799,  1400864343.4729984,
                   63379.90602715652, -0.56896930355209,   -0.3531244233619696,
                   1525037.025449092, 0.24778354288733373, -0.6806929770584357};
  double m1r7[] = {0.6806795545116484, -991.1859028168365,  -0.6971592827670602,
                   580.0922011671752,  0.23638517693504812, -263.8363515758784,
                   3.5922754650053323, 0.6795207346455301,  947.9814532822846};
  double m1r8[] = {90616167.24888338,  7005.2748800035815, 5962327900.086549,
                   59611664.292203434, -983180.7811643467, 826.0330529414705,
                   0.6361305288986238, 47.57429513140454,  -6129889797.696101};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
    M1.matrix[5][j] = m1r5[j];
    M1.matrix[6][j] = m1r6[j];
    M1.matrix[7][j] = m1r7[j];
    M1.matrix[8][j] = m1r8[j];
  }
  int m2rows = 9, m2cols = 9;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {192078435.99573126,  -826510963.4519718, -8.912738229909674,
                   -0.2271185587586313, 233.24292798473024, 0.552738679072697,
                   950183.689504837,    6484.282202127963,  -4428.270833086441};
  double m2r1[] = {
      -24422.90804551559,  0.14783710210757717, 9.834172840281097,
      -2770.725246546675,  -0.1137900312813428, 493.2515848141596,
      -19878.081763611233, -14786430.185956346, 0.45078634265213147};
  double m2r2[] = {-0.8531584821212997, -71118471.74507657, -118.04358213284505,
                   167.57473197911665,  -306914.6352708463, -9240.386582904786,
                   -3750875.558289275,  239514947.81686956, 32.08819283030353};
  double m2r3[] = {
      -415371957.47806454, -6135009380.615141, -915917.4735370731,
      7652967834.590555,   3433861964.8668766, -20521.658805293962,
      885953667.0570831,   73.57543562843846,  0.37039865153108376};
  double m2r4[] = {-352335.1426543856, -8.984876032662543,  365012965.1337013,
                   4.162046282545912,  4.962880346006844,   -554593774.5982008,
                   78978.73691729069,  -21.324569183625407, -6645412630.921141};
  double m2r5[] = {-0.736016361498288,  -8870.945009557854, 8.79561144122691,
                   -0.1959887892104698, -78348673.42555298, -3615691592.440583,
                   -742779.9745181276,  9211294380.234024,  4203820.791248236};
  double m2r6[] = {
      80423.08769357286,   -2.07409103031721,   -96217.75664658885,
      -9618914206.288118,  97183696.7056111,    6449810.634089837,
      -280.82234339600353, -3473071.9458134705, -203799.4468926122};
  double m2r7[] = {2881.251032636203,   -19172970.04328964, 1935.971474742283,
                   1454365.3879877615,  -71198668.38291682, -0.9742380912250277,
                   -1176294.3594272467, -483553.854132716,  -576647.5367287237};
  double m2r8[] = {-257034.90469665403, 5384883.116804267, 0.09103555447318057,
                   49.49659062018454,   532302.451394388,  92.88369078374669,
                   -289975.48980513,    336647.6734208035, 9.728195893797182};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
    M2.matrix[4][j] = m2r4[j];
    M2.matrix[5][j] = m2r5[j];
    M2.matrix[6][j] = m2r6[j];
    M2.matrix[7][j] = m2r7[j];
    M2.matrix[8][j] = m2r8[j];
  }
  int m_correctrows = 9, m_correctcols = 9;
  matrix_t M_correct = {0};
  s21_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {
      9138611969.756548,  826517787.6930637,   65905630.97229642,
      -301869868.6481329, -242.88695107673468, -3.6046201580197628,
      -950265.5210968287, 8954.44611679082,    4427.792927704652};
  double m_correctr1[] = {
      24422.728883059095, 0.7966690740473464, -93.8693636934454,
      2739.0863397756652, -2799252.108585508, 4873959.049957102,
      19809.411860650293, 14786375.38740638,  -1.2866006069887588};
  double m_correctr2[] = {
      292096.5113714969, 71118393.82378899,  69072374.16234463,
      83545.19885783795, 313451.4431539033,  9240.649551730072,
      3447738.300162693, -239514948.6241763, -38564998.9492492};
  double m_correctr3[] = {
      415371956.59426063, 6135015149.118165,   -417728160.04980725,
      -6740181918.826879, -3433251489.0521073, 21049.176612458967,
      -885952180.1343436, -214245.39851646582, 1.2313434329930744};
  double m_correctr4[] = {
      332063.47904609604, -7337366.223298153, -365012965.9418777,
      3850.944805156253,  -667.6215648904397, 554593774.9332023,
      -78978.68446234203, 21.233507143520463, 6645412645.7796955};
  double m_correctr5[] = {
      1848.5798013137105, 8794.984841468302,  -8.272829938756107,
      -7941593.887165764, 78348699.55076145,  3615691593.4444437,
      742758.0855277994,  -9286679056.638844, -4203748.317493818};
  double m_correctr6[] = {
      -80330.511669613,  -924063.5224816496, 1400960561.229645,
      9618977586.194145, -97183697.2745804,  -6449810.98721426,
      1525317.847792488, 3473072.1935970136, 203798.76619963514};
  double m_correctr7[] = {
      -2880.5703530816913, 19171978.857386824, -1936.6686340250499,
      -1453785.2957865943, 71198668.619302,    -262.8621134846534,
      1176297.9517027116,  483554.53365345066, 577595.518182006};
  double m_correctr8[] = {
      90873202.15358004,  -5377877.841924264,  5962327899.995513,
      59611614.79561281,  -1515483.2325587347, 733.1493621577238,
      289976.12593565887, -336600.0991256721,  -6129889807.424297};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
    M_correct.matrix[3][j] = m_correctr3[j];
    M_correct.matrix[4][j] = m_correctr4[j];
    M_correct.matrix[5][j] = m_correctr5[j];
    M_correct.matrix[6][j] = m_correctr6[j];
    M_correct.matrix[7][j] = m_correctr7[j];
    M_correct.matrix[8][j] = m_correctr8[j];
  }
  matrix_t M_res = {0};
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(s21_eq_matrix(&M_res, &M_correct), S21_SUCCESS);
  ck_assert_int_eq(res, S21_OK);
  s21_remove_matrix(&M_correct);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_6) {
  int m1rows = 9, m1cols = 9;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {
      7298045594.620326,  -1611.6375549056838, -0.45297575100126297,
      43219.19811577666,  5565326.3336176025,  0.2545175161036043,
      0.8636663666945842, -51.99647281179066,  -2015610418.733269};
  double m1r1[] = {
      -2827153875.38218,     -6.802310347242072,  -9.228533238417377,
      -0.014702209334422678, -99278.93248443518,  -1969076828.7752235,
      -1803.9402663245096,   -3764089.4773125043, 3.954448950423728};
  double m1r2[] = {0.834184365048526,   0.40685265628819356, -79.20865976650497,
                   68944633.32902196,   935.1953852200533,   50.18901272144769,
                   -369290.27658728894, 744025831.063059,    82116972.59924456};
  double m1r3[] = {0.4094450386711982, 0.2511565635921641, -21.15720784051667,
                   -86.53636436634622, 293286415.7494346,  485.2738857941813,
                   133161.36925756396, -569745934.9811262, -456451.40553785337};
  double m1r4[] = {
      97720288.75980978, 4.419866555212609,    -99183730.93654709,
      1169.672058983232, -0.21038403590421662, 8327934336.929634,
      81.51214276611624, 292.4654786322436,    -0.9278730372754339};
  double m1r5[] = {0.2330429817032892, -0.39164699657757573, -862049049.170025,
                   422789577.8641677,  0.09788474682631298,  4898493961.620936,
                   6.557851993069141,  6595161659.364841,    588707044.9590341};
  double m1r6[] = {0.8088529995782759, -254.73113350420397, 0.930343385850478,
                   69489.45963228111,  -4.453606627271892,  -71707074.69993368,
                   -742927565.7173184, 649651191.4725726,   59.36551498109981};
  double m1r7[] = {1.2771633839798768,  -341.5541852925287, 38325.072463732635,
                   -18883.76115439362,  -0.869124259455866, -2618362020.99841,
                   -2330.4838397286962, 410063562.3371459,  71.94198035433052};
  double m1r8[] = {
      23.007380862289175,   -169712.1825794593,  -0.34734794750233955,
      -46068.22302522562,   0.8077839010739368,  133786.04924759507,
      -0.19031420765743745, -3957156.4294553883, -743912783.7091987};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
    M1.matrix[5][j] = m1r5[j];
    M1.matrix[6][j] = m1r6[j];
    M1.matrix[7][j] = m1r7[j];
    M1.matrix[8][j] = m1r8[j];
  }
  int m2rows = 9, m2cols = 9;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {
      45305122.71463326,  -0.8639795856443678, -0.11182257918591265,
      31.20402831608775,  -7486.920985626389,  -83961.54839603041,
      -55.45376971959241, 0.4156130003780292,  2.530568508733575};
  double m2r1[] = {-30057.306948271034, 961.2738432183029,  1.0114786469570314,
                   0.7309076526424957,  -619782.6797342859, -483745671.2881447,
                   -0.2993052709863723, -99047.31221385265, 84549690.22766647};
  double m2r2[] = {0.2105621094959208, 55026.847856145745, -25.036847872346478,
                   191929.03655943516, 47.327725306183495, -334598867.63239574,
                   71.07436139526627,  447609821.99413544, 0.7326171174337002};
  double m2r3[] = {300038.98495914316,  -3446980677.223491, -6.501769794502744,
                   -7725549694.6128435, -235.5956508898721, 84801818.65051973,
                   549425.6759364875,   -577843.8490218585, 5.818612828399551};
  double m2r4[] = {
      -813435310.1582532, -0.3280548797337949, -0.13775903133967626,
      0.7719197645415201, 7.3990884281740605,  -992421054.1623511,
      483052.3066627925,  44845621.365614966,  9537.559547404955};
  double m2r5[] = {
      -388010127.4048857,  -0.07002965351499713, -533.9774859644675,
      -7.702319172791528,  7.989365675906242,    -9574521595.41657,
      -50.512323540043916, -0.3816970319004922,  0.840947706339323};
  double m2r6[] = {-0.16604167285060145, 706768.9121463168, 2416588420.8675494,
                   78126066.9731398,     686800031.517415,  6077856542.619144,
                   -9.462339496132635,   866314.6966425537, 60658818.38074868};
  double m2r7[] = {
      -0.37132053396674247, 0.700644729824275,  -62.42442063436325,
      -345066029.95276815,  5.94397553080816,   156559.7036875933,
      0.870822006813212,    3979290.8026702143, -0.6371444148092471};
  double m2r8[] = {
      16363983.935261972, -0.07782299389896885, 1288105.9628504687,
      0.9660571409947281, 98412.81421465297,    -62777.74364231634,
      -34543.74019300681, -0.5683716475829426,  -5.793145985147414};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
    M2.matrix[4][j] = m2r4[j];
    M2.matrix[5][j] = m2r5[j];
    M2.matrix[6][j] = m2r6[j];
    M2.matrix[7][j] = m2r7[j];
    M2.matrix[8][j] = m2r8[j];
  }
  int m_correctrows = 9, m_correctcols = 9;
  matrix_t M_correct = {0};
  s21_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {
      7252740471.905693, -1610.7735753200395, -0.3411531718153503,
      43187.99408746057, 5572813.2546032285,  83961.80291354652,
      56.31743608628699, -52.41208581216869,  -2015610421.2638376};
  double m_correctr1[] = {
      -2827123818.075232,  -968.0761535655449, -10.240011885374408,
      -0.7456098619769184, 520503.74724985077, -1485331157.4870787,
      -1803.6409610535231, -3665042.165098652, -84549686.27321751};
  double m_correctr2[] = {
      0.6236222555526052, -55026.44100348945, -54.17181189415849,
      68752704.29246253,  887.8676599138697,  334598917.82140845,
      -369361.3509486842, 296416009.06892353, 82116971.86662745};
  double m_correctr3[] = {
      -300038.5755141045,  3446980677.4746475, -14.655438046013925,
      7725549608.076479,   293286651.3450855,  -84801333.37663393,
      -416264.30667892355, -569168091.1321043, -456457.22415068175};
  double m_correctr4[] = {
      911155598.9180629,  4.747921434946404,  -99183730.79878806,
      1168.9001392186906, -7.609472464078277, 9320355391.091986,
      -482970.7945200264, -44845328.90013634, -9538.48742044223};
  double m_correctr5[] = {
      388010127.63792866, -0.3216173430625786, -862048515.192539,
      422789585.56648684, -7.891480929079929,  14473015557.037506,
      57.07017553311306,  6595161659.746538,   588707044.1180863};
  double m_correctr6[] = {
      0.9748946724288774, -707023.643279821,  -2416588419.9372063,
      -78056577.51350752, -686800035.9710217, -6149563617.319078,
      -742927556.2549789, 648784876.77593,    -60658759.0152337};
  double m_correctr7[] = {
      1.6484839179466193,  -342.25483002235296, 38387.496884367,
      345047146.19161373,  -6.813099790264026,  -2618518580.702098,
      -2331.3546617355096, 406084271.5344757,   72.57912476913977};
  double m_correctr8[] = {
      -16363960.92788111, -169712.1047564654, -1288106.3101984162,
      -46069.18908236661, -98412.00643075189, 196563.79288991142,
      34543.54987879915,  -3957155.861083741, -743912777.9160527};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
    M_correct.matrix[3][j] = m_correctr3[j];
    M_correct.matrix[4][j] = m_correctr4[j];
    M_correct.matrix[5][j] = m_correctr5[j];
    M_correct.matrix[6][j] = m_correctr6[j];
    M_correct.matrix[7][j] = m_correctr7[j];
    M_correct.matrix[8][j] = m_correctr8[j];
  }
  matrix_t M_res = {0};
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(s21_eq_matrix(&M_res, &M_correct), S21_SUCCESS);
  ck_assert_int_eq(res, S21_OK);
  s21_remove_matrix(&M_correct);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_7) {
  int m1rows = 4, m1cols = 4;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {-19.528233856997534, 731.394880520626, 388125256.8310803,
                   87216771.12457325};
  double m1r1[] = {0.7286748972542256, -7693614878.421443, -620252.7529591672,
                   0.4660144376066293};
  double m1r2[] = {-4989452.279925491, -41009624.73710044, -205.40158539826982,
                   59352279.52067544};
  double m1r3[] = {-9887.433930414338, -907302.5045354048, 774737904.4541134,
                   4.487515566038681};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
  }
  int m2rows = 4, m2cols = 4;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-26909.78397696131, -260051.72161323053, -397.9103785309949,
                   -0.9482150186043277};
  double m2r1[] = {-315364.67248185154, -0.7033820455347495, 1459735.7393863853,
                   6962.51202700326};
  double m2r2[] = {7968556304.743698, -6.91202911598161, 7826797.772757632,
                   47335702.70099609};
  double m2r3[] = {-2.4116367831333685, -22.938441086334617, 736491.9802200283,
                   -0.8325173616292609};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
  }
  int m_correctrows = 4, m_correctcols = 4;
  matrix_t M_correct = {0};
  s21_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {26890.255743104313, 260783.11649375115,
                          388125654.74145883, 87216772.07278827};
  double m_correctr1[] = {315365.40115674876, -7693614877.7180605,
                          -2079988.4923455524, -6962.046012565654};
  double m_correctr2[] = {-7973545757.023623, -41009617.82507132,
                          -7827003.17434303, 12016576.81967935};
  double m_correctr3[] = {-9885.022293631204, -907279.5660943185,
                          774001412.4738933, 5.320032927667942};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
    M_correct.matrix[3][j] = m_correctr3[j];
  }
  matrix_t M_res = {0};
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(s21_eq_matrix(&M_res, &M_correct), S21_SUCCESS);
  ck_assert_int_eq(res, S21_OK);
  s21_remove_matrix(&M_correct);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_8) {
  int m1rows = 1, m1cols = 1;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {-2911.3761559221516};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
  }
  int m2rows = 1, m2cols = 1;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-175.18635165127506};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
  }
  int m_correctrows = 1, m_correctcols = 1;
  matrix_t M_correct = {0};
  s21_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {-2736.1898042708767};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
  }
  matrix_t M_res = {0};
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(s21_eq_matrix(&M_res, &M_correct), S21_SUCCESS);
  ck_assert_int_eq(res, S21_OK);
  s21_remove_matrix(&M_correct);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_9) {
  int m1rows = 5, m1cols = 5;
  matrix_t M1 = {0};
  s21_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {0.21480636474684556, -26.046893732010023, -7613187911.063309,
                   -309.5036431117111, 8998908405.910448};
  double m1r1[] = {-525.0468713947379, -708.0501191423228, -309.5378644922655,
                   -67.80817338722606, 4243895.794991994};
  double m1r2[] = {-0.8645837368831933, 3952.6337192823103, 189501.03360494442,
                   9897.704592146143, 5919.982000786545};
  double m1r3[] = {-274369.02024109475, -5354188363.930354, -117560.4421922114,
                   99.07121272616718, -54.25063382441474};
  double m1r4[] = {-58491138.32125281, -5091273.715887173, 474884174.8600514,
                   -9601.586329526706, 795.32193024991};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
  }
  int m2rows = 5, m2cols = 5;
  matrix_t M2 = {0};
  s21_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-0.18648560358637933, -0.10079625602637832, -871590593.00503,
                   0.48349442530743203, 5.333214946973549};
  double m2r1[] = {-9861.29871422254, 359257739.13516945, -30.283923697378555,
                   -8.59580003233736, 3133857.5847541895};
  double m2r2[] = {-30254.5692585121, -0.3443040494699223, 0.8341175636581504,
                   -2545.718889743964, 11.204001728908896};
  double m2r3[] = {-163263297.16680256, 3104008178.531894, 868281509.9868966,
                   -0.24357570402703, 172.8567878587264};
  double m2r4[] = {-6808924541.100387, -6168.444156213512, -8136755.158589988,
                   -5.548322976014022, -1.9412363123281307};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
    M2.matrix[4][j] = m2r4[j];
  }
  int m_correctrows = 5, m_correctcols = 5;
  matrix_t M_correct = {0};
  s21_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {0.4012919683332249, -25.946097475983645,
                          -6741597318.058279, -309.9871375370185,
                          8998908400.577232};
  double m_correctr1[] = {9336.251842827802, -359258447.1852886,
                          -279.25394079488694, -59.212373354888705,
                          1110038.2102378048};
  double m_correctr2[] = {30253.704674775217, 3952.97802333178,
                          189500.19948738077, 12443.423481890108,
                          5908.7779990576355};
  double m_correctr3[] = {162988928.14656147, -8458196542.462248,
                          -868399070.4290888, 99.3147884301942,
                          -227.10742168314113};
  double m_correctr4[] = {6750433402.779134, -5085105.271730959,
                          483020930.01864135, -9596.038006550692,
                          797.2631665622381};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
    M_correct.matrix[3][j] = m_correctr3[j];
    M_correct.matrix[4][j] = m_correctr4[j];
  }
  matrix_t M_res = {0};
  int res = s21_sub_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(s21_eq_matrix(&M_res, &M_correct), S21_SUCCESS);
  ck_assert_int_eq(res, S21_OK);
  s21_remove_matrix(&M_correct);
  s21_remove_matrix(&M_res);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_10) {
  matrix_t M1 = {0};
  matrix_t M2 = {0};
  matrix_t M1_result = {0};
  s21_create_matrix(2, 3, &M1);
  s21_create_matrix(3, 2, &M2);
  int res = s21_sub_matrix(&M1, &M2, &M1_result);
  ck_assert_int_eq(res, S21_CALC_ERROR);
  s21_remove_matrix(&M1);
  s21_remove_matrix(&M2);
}
END_TEST

START_TEST(s21_sub_11) {
  ck_assert_int_eq(s21_sub_matrix(NULL, NULL, NULL), S21_ERROR);
}
END_TEST

START_TEST(s21_sub_12) {
  INV_MATRIX
  matrix_t M1_result = {0};
  ck_assert_int_eq(s21_sub_matrix(&inv_matrix, &inv_matrix, &M1_result),
                   S21_ERROR);
}
END_TEST

Suite *s21_sub_matrix_tests(void) {
  Suite *s1 = suite_create(PRE_TEST_HEADER "S21_SUB" POST_TEST_HEADER);
  TCase *tc1_1 = tcase_create("S21_SUB");

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, s21_sub_0);
  tcase_add_test(tc1_1, s21_sub_1);
  tcase_add_test(tc1_1, s21_sub_2);
  tcase_add_test(tc1_1, s21_sub_3);
  tcase_add_test(tc1_1, s21_sub_4);
  tcase_add_test(tc1_1, s21_sub_5);
  tcase_add_test(tc1_1, s21_sub_6);
  tcase_add_test(tc1_1, s21_sub_7);
  tcase_add_test(tc1_1, s21_sub_8);
  tcase_add_test(tc1_1, s21_sub_9);
  tcase_add_test(tc1_1, s21_sub_10);
  tcase_add_test(tc1_1, s21_sub_11);
  tcase_add_test(tc1_1, s21_sub_12);

  return s1;
}
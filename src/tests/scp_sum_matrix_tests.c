/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "scp_sum_matrix_tests.tc" instead.
 */

#include "scp_matrix_tests.h"
START_TEST(scp_sum_0) {
  int m1rows = 2, m1cols = 9;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {0.8086335997453837,  8834652.69490864,   -21078000.34825378,
                   -8085.7802896861795, 806573.6881116481,  4050138966.843718,
                   -7558.969279797078,  121908403.58611022, -30.53428257560573};
  double m1r1[] = {
      1260737239.0623605,  -57.955594909610774, -0.007012924101380991,
      -523126467.51872325, -60.213935053956256, -12640.770085885533,
      -41356.19730469005,  6962.882156796467,   3.9124553800048756};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
  }
  int m2rows = 9, m2cols = 2;
  matrix_t M2 = {0};
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-81462.58150964946, 8235758.16155629};
  double m2r1[] = {0.4355631903485101, -2533.678391706462};
  double m2r2[] = {3124948318.550118, 4308792.523537074};
  double m2r3[] = {6451.477091526114, -0.9108277509471915};
  double m2r4[] = {-0.7404344273090624, -4829892302.230813};
  double m2r5[] = {913598213.0661738, 40842.16777430027};
  double m2r6[] = {62539.644497262234, -26611560.319586936};
  double m2r7[] = {796585.9909416673, -394.0085748476894};
  double m2r8[] = {7.825382137164951, -375329109.1563825};

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
  matrix_t M_res = {0};
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(res, SCP_CALC_ERROR);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_1) {
  int m1rows = 4, m1cols = 2;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {253.006849827504, 4907766092.894743};
  double m1r1[] = {-9.826473316465437, -38.166904355322565};
  double m1r2[] = {0.7173494638971659, -59098.93500216558};
  double m1r3[] = {7284308.751761448, 0.2993007103436137};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
  }
  int m2rows = 2, m2cols = 4;
  matrix_t M2 = {0};
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-80853904.3748665, -65.62614385615126, 796394864.5593395,
                   -0.43750340360968565};
  double m2r1[] = {-6748.296589728454, -7.662371532996892, 3.0323710276799587,
                   38008397.88977072};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
  }
  matrix_t M_res = {0};
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(res, SCP_CALC_ERROR);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_2) {
  int m1rows = 8, m1cols = 3;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {2487457.3261636803, -21.734849686114188, 981731791.9715384};
  double m1r1[] = {-393577480.6534288, -0.10018531536521103,
                   15308635.884215748};
  double m1r2[] = {25.441635349803605, 0.17569481048184732,
                   -5073.1879191653425};
  double m1r3[] = {-1.055125963764788, 8162.445089635273, 0.5654888200521434};
  double m1r4[] = {-22809715.92147506, 4237.340649630938, -53.8385115837084};
  double m1r5[] = {80871678.37692943, 19070292.292178404, 94748006.98613729};
  double m1r6[] = {-0.4990076449161447, -1507.74156362114, 0.1866488577069635};
  double m1r7[] = {-99.19544616054965, 82703.86166128807, -7627744.95963924};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
    M1.matrix[5][j] = m1r5[j];
    M1.matrix[6][j] = m1r6[j];
    M1.matrix[7][j] = m1r7[j];
  }
  int m2rows = 3, m2cols = 8;
  matrix_t M2 = {0};
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {1156.0667192262363,  66.36141121615098, -0.8588162897393545,
                   -0.4820958560931512, 97958348.01263213, 3136605.481486714,
                   -519785.9432786677,  15369.228490280952};
  double m2r1[] = {4540769799.026455,  -8203143747.734647, -44154.87971058949,
                   -659442.0521384545, -865186.1734264414, -697812166.6869487,
                   -295407.5547615377, 0.45193713433444194};
  double m2r2[] = {-48.3905576979855,   40900234.42218456,  -50482.32182080486,
                   -0.4786676659433331, 1367541.0284358535, 4628708.795572177,
                   -832.0192788968196,  -0.5083555087765124};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
  }
  matrix_t M_res = {0};
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(res, SCP_CALC_ERROR);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_3) {
  int m1rows = 8, m1cols = 8;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {189384.16576971894,  -66.2270989050188,  8427948605.083084,
                   -3289818.4659295036, -894250.7104263717, -4106.709348502012,
                   -24.122637306083526, -1920310400.3183336};
  double m1r1[] = {-23067.638657282485, -13.141472615308103, 1483019989.197748,
                   -1.4852209714260534, 0.16218721723740093, -75203.46958110247,
                   756865.6812136988,   -4.91245452674085};
  double m1r2[] = {-2059980.0226276144, -86692.03934348814,  -7665118.901948493,
                   46.083435281519016,  -21535127.634750217, 210833.7994889521,
                   826.0488614678337,   -9944.319164152694};
  double m1r3[] = {-248242.62459466208, 4003.8033135923256, 693886007.3512487,
                   191168478.2430737,   11664.694084972316, -8471273.583396217,
                   -691497009.217249,   -0.824016025541533};
  double m1r4[] = {5647243150.194091,   398823485.20972145, -10.05096580601964,
                   1.4071677813890626,  -9.854224689193721, 67492030.11261022,
                   0.44285057941212747, 9909.815688749219};
  double m1r5[] = {-8.32207828135368,  753743957.2209631, 75447.78829910429,
                   -2517900414.430457, 61214738.63333321, -4461690348.33604,
                   -296711927.526727,  867697209.2411668};
  double m1r6[] = {193430.45811630887,   0.6830662919066782,
                   -9368.924785832603,   0.10939647251364482,
                   -0.45624191388736646, -0.2719579429682685,
                   0.4305260355754399,   1.673076119447101};
  double m1r7[] = {0.4293784493820255, -4.954853446521806,
                   110009.49769237789, -0.0032401151429209962,
                   -0.191931850577872, -23028740.763767708,
                   -718966300.311378,  -396153698.9923954};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
    M1.matrix[5][j] = m1r5[j];
    M1.matrix[6][j] = m1r6[j];
    M1.matrix[7][j] = m1r7[j];
  }
  int m2rows = 8, m2cols = 8;
  matrix_t M2 = {0};
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-9210099.814570686, 996.0983544131772,   6458.739817505732,
                   -5.685306367293867, -0.3536269321743871, 9.418871101033824,
                   7.156490870215086,  7846.025328306155};
  double m2r1[] = {54.34192076102444,  10.995040530740996, 0.6890955388961444,
                   6040318.232148521,  3.517771388869768,  2.1684561490075547,
                   -36.18017439891135, -420.2023511932703};
  double m2r2[] = {44245.462676167255,  -82813.32190111467, 0.13428793720899335,
                   -2290.3968827161216, 382.5039387559498,  20025.03614964979,
                   -49075.262974388046, 2727722515.450238};
  double m2r3[] = {6065.632681670746,  -0.3033239174473591, -54081.32492036644,
                   0.7761808183332516, -412655506.54134,    -0.6002163209016739,
                   -838527319.6739885, 0.47486454339215567};
  double m2r4[] = {-62.50888674904132,   -0.21640071597424004,
                   -0.23477377870098537, -6.422062019639094,
                   616.5547350307546,    -967.1182920317161,
                   -439965.25651048304,  7.376438285331154};
  double m2r5[] = {0.6562858693033533,  837166.5999594766, -104036724.91258897,
                   -3.6496352248074793, 4.709380670315081, 128244.18262276128,
                   9.839332580767874,   -4692.534607629028};
  double m2r6[] = {-38140.472367144765, -5.136522745947666, 76.11960653232744,
                   4.345289390940765,   -741.9734262359536, 4989464.536710847,
                   -50.64843090462866,  8434038732.41896};
  double m2r7[] = {5349637612.347956,   1226.713991069076,  339646.74958520656,
                   -95464.93475346034,  -68.13846246137638, -62706.752046034286,
                   -0.8714573967041733, -86.35012668808851};

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
  int m_correctrows = 8, m_correctcols = 8;
  matrix_t M_correct = {0};
  scp_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {-9020715.648800967, 929.8712555081584,
                          8427955063.822902,  -3289824.151235871,
                          -894251.0640533038, -4097.2904774009785,
                          -16.96614643586844, -1920302554.2930052};
  double m_correctr1[] = {-23013.29673652146, -2.146432084567108,
                          1483019989.8868434, 6040316.746927549,
                          3.679958606107169,  -75201.30112495346,
                          756829.5010392999,  -425.1148057200112};
  double m_correctr2[] = {-2015734.5599514472, -169505.36124460283,
                          -7665118.767660555,  -2244.3134474346025,
                          -21534745.13081146,  230858.8356386019,
                          -48249.214112920214, 2727712571.131074};
  double m_correctr3[] = {-242176.99191299133, 4003.499989674878,
                          693831926.0263283,   191168479.0192545,
                          -412643841.847255,   -8471274.183612539,
                          -1530024328.8912375, -0.3491514821493773};
  double m_correctr4[] = {5647243087.6852045,  398823484.9933207,
                          -10.285739584720625, -5.014894238250031,
                          606.7005103415609,   67491062.99431819,
                          -439964.81365990365, 9917.19212703455};
  double m_correctr5[] = {-7.665792412050326,  754581123.8209226,
                          -103961277.12428987, -2517900418.0800924,
                          61214743.342713885,  -4461562104.153417,
                          -296711917.68739444, 867692516.7065592};
  double m_correctr6[] = {155289.9857491641,  -4.453456454040987,
                          -9292.805179300276, 4.45468586345441,
                          -742.429668149841,  4989464.264752904,
                          -50.21790486905322, 8434038734.092035};
  double m_correctr7[] = {5349637612.777334,  1221.7591376225541,
                          449656.24727758445, -95464.93799357548,
                          -68.33039431195425, -23091447.51581374,
                          -718966301.1828353, -396153785.3425221};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
    M_correct.matrix[3][j] = m_correctr3[j];
    M_correct.matrix[4][j] = m_correctr4[j];
    M_correct.matrix[5][j] = m_correctr5[j];
    M_correct.matrix[6][j] = m_correctr6[j];
    M_correct.matrix[7][j] = m_correctr7[j];
  }
  matrix_t M_res;
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(scp_eq_matrix(&M_res, &M_correct), SCP_SUCCESS);
  ck_assert_int_eq(res, SCP_OK);
  scp_remove_matrix(&M_correct);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_4) {
  int m1rows = 1, m1cols = 2;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {-107796630.13171548, 68365.50005270136};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
  }
  int m2rows = 2, m2cols = 1;
  matrix_t M2 = {0};
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-2449.844347560929};
  double m2r1[] = {0.23095378854154447};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
  }
  matrix_t M_res = {0};
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(res, SCP_CALC_ERROR);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_5) {
  int m1rows = 4, m1cols = 4;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {-60698839.369860426, -9735.030748364474, 4369.192000446631,
                   -821.4513834173995};
  double m1r1[] = {45.94968052003392, 0.2441734205171333, 0.8022356707057233,
                   583765203.9517698};
  double m1r2[] = {-559030891.407295, -81432.70773401685, 57.161318690567875,
                   259.5709544331962};
  double m1r3[] = {-3185360.834061848, -0.7380199231948672, -8545.300833984267,
                   -0.835683021173858};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
  }
  int m2rows = 4, m2cols = 4;
  matrix_t M2 = {0};
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {76083449.72694515, 8206206661.374035, 0.03394124905072493,
                   5502.788327739375};
  double m2r1[] = {-4079403.9400637536, -1212669.1954841006,
                   -0.2904029018705645, 591597.0654898218};
  double m2r2[] = {-2912.191342558601, 359742.03791799495, 2013890904.550364,
                   -7410761.278356184};
  double m2r3[] = {-21354.125483098152, -46647676.99483337, -3.6037899587287106,
                   -0.29648461800129666};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
  }
  int m_correctrows = 4, m_correctcols = 4;
  matrix_t M_correct = {0};
  scp_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {15384610.357084721, 8206196926.3432865,
                          4369.225941695682, 4681.336944321975};
  double m_correctr1[] = {-4079357.9903832334, -1212668.95131068,
                          0.5118327688351588, 584356801.0172596};
  double m_correctr2[] = {-559033803.5986376, 278309.3301839781,
                          2013890961.7116828, -7410501.707401751};
  double m_correctr3[] = {-3206714.959544946, -46647677.73285329,
                          -8548.904623942995, -1.1321676391751545};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
    M_correct.matrix[3][j] = m_correctr3[j];
  }
  matrix_t M_res = {0};
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(scp_eq_matrix(&M_res, &M_correct), SCP_SUCCESS);
  ck_assert_int_eq(res, SCP_OK);
  scp_remove_matrix(&M_correct);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_6) {
  int m1rows = 5, m1cols = 1;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {-7.1573515793857805};
  double m1r1[] = {-2960433.4411633424};
  double m1r2[] = {874.1367972523509};
  double m1r3[] = {-7.421606553240952};
  double m1r4[] = {-1112.7105010504324};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
  }
  int m2rows = 1, m2cols = 5;
  matrix_t M2 = {0};
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {404.3039800032645, 36.19141326834037, -347941139.3861953,
                   5737842839.859781, 0.25088100096433474};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
  }
  matrix_t M_res = {0};
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(res, SCP_CALC_ERROR);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_7) {
  int m1rows = 5, m1cols = 5;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {0.6304969649707626, -7984.557533231603, 1653589618.630318,
                   0.6186563935262228, -5.415571451580624};
  double m1r1[] = {4.45393224716998, 369.6286908316918, -694314.2254304177,
                   183539.39695400113, -8753142.717511842};
  double m1r2[] = {-603.6455101080511, 0.46144522199328575, 321.9404043924636,
                   -0.8442685853810532, 24.81819707047156};
  double m1r3[] = {0.8866314972507797, -78586502.2737013, -4480.109207781803,
                   -3710564012.0011005, 9081676.24414952};
  double m1r4[] = {0.8481532809941121, 0.6052183580450938, 9.016003469485435,
                   48358592.213988975, -48.00595046964862};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
  }
  int m2rows = 5, m2cols = 5;
  matrix_t M2 = {0};
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-6689348976.133317, -9390.084744191696, 756.6898031302901,
                   -947528277.6057476, -2855332151.0784755};
  double m2r1[] = {3469646.581699063, -50.000241630834516, -98058156.69658393,
                   8350179512.559846, -8284.10917622936};
  double m2r2[] = {41.71135391410699, -45481.49131804801, 15496.070908350868,
                   -848.1769565951003, 870945215.2210231};
  double m2r3[] = {0.1412250826081477, 6.094452715005515, -9499.8268249576,
                   5843197.156167883, 0.7342493248849913};
  double m2r4[] = {7589.206775222139, -94.3044165216722, 86732722.44685906,
                   95659.91730291826, -0.14497458238175487};

  for (int j = 0; j < m2cols; j++) {
    M2.matrix[0][j] = m2r0[j];
    M2.matrix[1][j] = m2r1[j];
    M2.matrix[2][j] = m2r2[j];
    M2.matrix[3][j] = m2r3[j];
    M2.matrix[4][j] = m2r4[j];
  }
  int m_correctrows = 5, m_correctcols = 5;
  matrix_t M_correct = {0};
  scp_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {-6689348975.50282, -17374.6422774233,
                          1653590375.320121, -947528276.9870912,
                          -2855332156.494047};
  double m_correctr1[] = {3469651.03563131, 319.6284492008573,
                          -98752470.92201434, 8350363051.9567995,
                          -8761426.826688072};
  double m_correctr2[] = {-561.9341561939441, -45481.02987282602,
                          15818.011312743332, -849.0212251804813,
                          870945240.0392201};
  double m_correctr3[] = {1.0278565798589274, -78586496.17924859,
                          -13979.936032739402, -3704720814.8449326,
                          9081676.978398845};
  double m_correctr4[] = {7590.054928503133, -93.6991981636271,
                          86732731.46286254, 48454252.131291896,
                          -48.150925052030374};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
    M_correct.matrix[3][j] = m_correctr3[j];
    M_correct.matrix[4][j] = m_correctr4[j];
  }
  matrix_t M_res = {0};
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(scp_eq_matrix(&M_res, &M_correct), SCP_SUCCESS);
  ck_assert_int_eq(res, SCP_OK);
  scp_remove_matrix(&M_correct);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_8) {
  int m1rows = 9, m1cols = 9;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {-8840499.168585632,  91431078.14064789,  -0.6316315129460018,
                   33.78731389560341,   -7050472762.975493, 6319.572273717405,
                   -0.2599789433056392, 0.5229302844758873, 713.0579409019169};
  double m1r1[] = {-81158606.39375468, -76.97554356449803, 7.1733849254028135,
                   0.7720532348582098, -0.475767458215986, 431858.1589002081,
                   4097727.4994076528, 332.53966171065684, -99795695.11541101};
  double m1r2[] = {
      -0.44483911538031495, 0.448674829267367, -0.15562463810437055,
      9144291735.94866,     34573.83340164829, -8466.092020442862,
      -0.21498980377420152, 9.185120955129127, 8.667608654768689};
  double m1r3[] = {
      -4227.730106903583, 4562273.236524064,   0.595769292239337,
      31393.01077359199,  -1.3535409697824274, 32312257.8526142,
      730.9256620539838,  -1548.4416115085153, -0.03415766001905374};
  double m1r4[] = {-202.0294155507051, 4540224760.373226,  560880995.6197416,
                   4336952180.948993,  96157.24592585694,  -5832.276146887917,
                   -9079105.66350529,  2607335752.1282434, 851.8595182247478};
  double m1r5[] = {
      -152301458.11777574, -0.7244872572534019, -0.5580444008512135,
      -65000455.3987828,   -4413981696.304292,  7659702.9788651895,
      78892.71860829496,   -966.1809953019118,  32.47412929600513};
  double m1r6[] = {-869380.3010312051, -1287.516702776348,  483.0768185173796,
                   7336.299435138414,  -269887862.73818165, -4.889328151463179,
                   -19.02419072670314, 2.831548530425152,   939684914.7567533};
  double m1r7[] = {
      0.8502484052401615, 0.04162913644811439, -915001953.6989449,
      -6225010.215186109, -9.131556725201243,  -0.7265805673895678,
      802062057.8110683,  79034.9673939682,    -4204908422.4109488};
  double m1r8[] = {
      -0.18959781229171901, -714143135.7699205, 1.7156124335560263,
      88.73406945625206,    -95.67780138410478, -239340054.42143524,
      -6407117.768824412,   -35896.42872632637, 4259633034.875434};

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
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {41087763.2823439,   -117.74902587792036, 2.7872821875280476,
                   -11457.51293826015, 787183.0147769463,   268198.9133879592,
                   89177422.7087768,   -8787288.349989343,  -33.89140322935597};
  double m2r1[] = {
      -984.9952952719406,  -4830.141310946506,  165014297.07923675,
      -0.681130356713018,  -2367.4780647492576, -0.23043740167971727,
      -0.3020798949306793, -569656.9998307758,  667.5637180732195};
  double m2r2[] = {
      -7.641879912762222,  -6195298.680202707,  -5902.252713975729,
      59.614866758960375,  0.12955445094018947, 81745.20209269688,
      -4011.5663365295604, 5705.196767963853,   -0.06332735079949559};
  double m2r3[] = {661197.4999670611, -9538.793141476299,  -0.7096543468097808,
                   6187838.172568499, -1078.2780574447204, 0.16155628863954807,
                   840800.5547631129, -1000.5440952198874, -82.13414312283248};
  double m2r4[] = {6035965356.415397,  -371.5913434728159, 0.6784122651705491,
                   0.5966179669446325, 297161.517592203,   84242.95019151297,
                   6624995.101561965,  -7.339136749662444, -566849147.2576879};
  double m2r5[] = {757988447.3034283,   -41587513.37701072, 7573015792.098276,
                   -0.8684758584270748, 586299.5437196051,  611608768.5756527,
                   71.74034505987258,   829706498.2065603,  -7240768365.739454};
  double m2r6[] = {-388238.35621511226,  -7919032440.114442, 283.1741320196698,
                   -17218.78351713134,   9.142120353311018,  2906358334.1389265,
                   0.060549249115506965, 0.4064225511940185, 4304025.029107453};
  double m2r7[] = {3487535502.7785506, -16058.88143480918,  -72751.51988309389,
                   -731669.0585757346, 1.5883069031202512,  106.8923853879854,
                   102685653.8190467,  -316638526.78885305, -673259079.2819436};
  double m2r8[] = {
      7798.299832498427,   -0.9708323027902863, -11068.210076529705,
      0.44042949703972833, -4.20312350277065,   -0.5284594729103467,
      772120.7488846208,   -59.60001984954063,  0.29556640749909235};

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
  scp_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {
      32247264.11375827,   91430960.391622,    2.155650674582046,
      -11423.725624364546, -7049685579.960716, 274518.48566167656,
      89177422.44879785,   -8787287.827059058, 679.1665376725609};
  double m_correctr1[] = {
      -81159591.38904995,  -4907.116854511004,  165014304.25262168,
      0.09092287814519173, -2367.9538322074736, 431857.9284628064,
      4097727.1973277577,  -569324.4601690652,  -99795027.55169293};
  double m_correctr2[] = {
      -8.086719028142536,  -6195298.231527877, -5902.408338613834,
      9144291795.563526,   34573.96295609923,  73279.11007225403,
      -4011.7813263333346, 5714.3818889189815, 8.604281303969193};
  double m_correctr3[] = {
      656969.7698601575, 4552734.443382588,   -0.11388505457044384,
      6219231.183342091, -1079.6315984145028, 32312258.01417049,
      841531.4804251669, -2548.985706728403,  -82.16830078285153};
  double m_correctr4[] = {
      6035965154.385982,   4540224388.781882, 560880996.2981539,
      4336952181.54561,    393318.7635180599, 78410.67404462505,
      -2454110.5619433243, 2607335744.789107, -566848295.3981698};
  double m_correctr5[] = {
      605686989.1856525,  -41587514.10149798, 7573015791.540232,
      -65000456.26725866, -4413395396.760572, 619268471.5545179,
      78964.45895335484,  829705532.0255649,  -7240768333.265325};
  double m_correctr6[] = {
      -1257618.6572463172, -7919033727.631145, 766.2509505370494,
      -9882.484081992927,  -269887853.5960613, 2906358329.2495985,
      -18.963641477587633, 3.2379710816191705, 943988939.7858608};
  double m_correctr7[] = {
      3487535503.628799,  -16058.839805672733, -915074705.218828,
      -6956679.273761843, -7.543249822080991,  106.16580482059584,
      904747711.630115,   -316559491.82145905, -4878167501.692892};
  double m_correctr8[] = {
      7798.110234686135,   -714143136.7407528, -11066.49446409615,
      89.17449895329179,   -99.88092488687543, -239340054.9498947,
      -5634997.0199397905, -35956.02874617591, 4259633035.1710005};

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
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(scp_eq_matrix(&M_res, &M_correct), SCP_SUCCESS);
  ck_assert_int_eq(res, SCP_OK);
  scp_remove_matrix(&M_correct);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_9) {
  int m1rows = 8, m1cols = 8;
  matrix_t M1 = {0};
  scp_create_matrix(m1rows, m1cols, &M1);
  double m1r0[] = {1.4503946175331373, -335816.78483369556, -204447025.87313145,
                   0.9511146959663523, 364752448.6132193,   628.325006634703,
                   -63.66829160064202, -728.4532113670994};
  double m1r1[] = {0.7744799351784124, 1121405406.028918,   8538028.247981058,
                   -9938155.72373303,  -0.1506333470430682, 654446.0880496107,
                   -97701.46722321697, -410763402.6923278};
  double m1r2[] = {133456672.01416412, 568.0853834297421,   -80.10529132355056,
                   0.2701835806720534, 68748928.48971681,   -452734026.3567109,
                   24.118159601306253, -0.48995767349286345};
  double m1r3[] = {-0.7924654027629303, -17.361653316464466, -988896922.3373322,
                   5751.435406094573,   -0.9873898127107824, -97332759.67915076,
                   -25715.49574270743,  24488105.61658077};
  double m1r4[] = {18.17139172014436,   -16.5157598517803,
                   -48.652008978801355, -48.57048962938115,
                   -0.4319943833260943, 0.034200394935229195,
                   0.08810102351147264, -770.8722887354513};
  double m1r5[] = {-4.6591871765122805, 8.762661187552013,  -8849668.267079042,
                   9885.705988721586,   5.175299691795577,  -5784015131.446235,
                   36567.02078426374,   0.31206598829713883};
  double m1r6[] = {1.3756345340830067,  -734.230021324125, 4.82222134225316,
                   -0.7789174061901232, 90285872.71250455, -0.2331247941573955,
                   0.9145038419656936,  5.394583711478469};
  double m1r7[] = {-2592610.662360195,  -5607150.343567876, 0.6922278776721736,
                   82773.66472756445,   -46059.48984922192, -44886943.4183774,
                   -0.2376807333948625, -130438.36336786285};

  for (int j = 0; j < m1cols; j++) {
    M1.matrix[0][j] = m1r0[j];
    M1.matrix[1][j] = m1r1[j];
    M1.matrix[2][j] = m1r2[j];
    M1.matrix[3][j] = m1r3[j];
    M1.matrix[4][j] = m1r4[j];
    M1.matrix[5][j] = m1r5[j];
    M1.matrix[6][j] = m1r6[j];
    M1.matrix[7][j] = m1r7[j];
  }
  int m2rows = 8, m2cols = 8;
  matrix_t M2 = {0};
  scp_create_matrix(m2rows, m2cols, &M2);
  double m2r0[] = {-97.8379243362529,  -711861523.0714065, -6052.396506643765,
                   -538816.834865561,  26802912.891510934, 5.271877262822366,
                   -9644681625.085014, -9308321014.205706};
  double m2r1[] = {127.6876297962134,  -438956796.7596372, -61098003.47397389,
                   0.8090564215950102, 179985847.3516308,  -523646.87337953,
                   43148.49541865677,  0.9971895025291039};
  double m2r2[] = {6759912905.593037,   2.9504556244274083,
                   -0.6438170414180993, 0.40267239168614266,
                   60364.26109445246,   -0.21265390030018005,
                   -75815312.8544175,   1.5862340583871382};
  double m2r3[] = {-881.8466587300308, 3988.977148771958,   0.828343527576129,
                   6.982936758976525,  -2992810314.0907903, 269351.22689230426,
                   94520.82941855812,  -8011531255.238895};
  double m2r4[] = {608407.7499138246,   610363.3326895962,  -0.8766635541325425,
                   9950329.722418398,   -4865.322063922101, 0.4402300080839331,
                   -3.0437186045869016, -7.39994840105479};
  double m2r5[] = {-666511578.185839,  -5282277218.877832, 629670582.1951275,
                   -7569574.333241331, 62981967.40313008,  0.5364320889981701,
                   -7765.09613980391,  -8248738437.622738};
  double m2r6[] = {59972.30428264962,   -0.6140574751589968,
                   580.0505044127495,   0.542763310185016,
                   -314085543.6610028,  -0.8907953731109007,
                   -339.49149641395945, -2746.0964981974403};
  double m2r7[] = {6511.271799440064, -4424.813044203878,  -0.4928094208909799,
                   888.8667783954858, -0.8190050431320831, -6342341.971353898,
                   856672426.5526032, -0.18465813411665055};

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
  int m_correctrows = 8, m_correctcols = 8;
  matrix_t M_correct = {0};
  scp_create_matrix(m_correctrows, m_correctcols, &M_correct);
  double m_correctr0[] = {-96.38752971871976, -712197339.8562402,
                          -204453078.2696381, -538815.883750865,
                          391555361.5047302,  633.5968838975253,
                          -9644681688.753305, -9308321742.658916};
  double m_correctr1[] = {128.46210973139182,  682448609.2692809,
                          -52559975.225992836, -9938154.914676609,
                          179985847.20099747,  130799.21467008075,
                          -54552.9718045602,   -410763401.6951383};
  double m_correctr2[] = {6893369577.607201,  571.0358390541695,
                          -80.74910836496866, 0.672855972358196,
                          68809292.75081126,  -452734026.5693648,
                          -75815288.7362579,  1.0962763848942747};
  double m_correctr3[] = {-882.6391241327937,  3971.6154954554936,
                          -988896921.5089887,  5758.41834285355,
                          -2992810315.0781803, -97063408.45225845,
                          68805.33367585069,   -7987043149.622314};
  double m_correctr4[] = {608425.9213055448,   610346.8169297444,
                          -49.528672532933896, 9950281.151928768,
                          -4865.754058305427,  0.4744304030191623,
                          -2.955617581075429,  -778.2722371365061};
  double m_correctr5[] = {-666511582.8450263, -5282277210.115171,
                          620820913.9280485,  -7559688.6272526095,
                          62981972.578429766, -5784015130.909802,
                          28801.92464445983,  -8248738437.310672};
  double m_correctr6[] = {59973.6799171837,    -734.844078799284,
                          584.8727257550028,   -0.23615409600510717,
                          -223799670.94849825, -1.1239201672682961,
                          -338.57699257199374, -2740.701914485962};
  double m_correctr7[] = {-2586099.390560755,  -5611575.15661208,
                          0.19941845678119374, 83662.53150595994,
                          -46060.30885426505,  -51229285.389731295,
                          856672426.3149225,   -130438.54802599698};

  for (int j = 0; j < m_correctcols; j++) {
    M_correct.matrix[0][j] = m_correctr0[j];
    M_correct.matrix[1][j] = m_correctr1[j];
    M_correct.matrix[2][j] = m_correctr2[j];
    M_correct.matrix[3][j] = m_correctr3[j];
    M_correct.matrix[4][j] = m_correctr4[j];
    M_correct.matrix[5][j] = m_correctr5[j];
    M_correct.matrix[6][j] = m_correctr6[j];
    M_correct.matrix[7][j] = m_correctr7[j];
  }
  matrix_t M_res = {0};
  int res = scp_sum_matrix(&M1, &M2, &M_res);
  ck_assert_int_eq(scp_eq_matrix(&M_res, &M_correct), SCP_SUCCESS);
  ck_assert_int_eq(res, SCP_OK);
  scp_remove_matrix(&M_correct);
  scp_remove_matrix(&M_res);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_10) {
  matrix_t M1 = {0};
  matrix_t M2 = {0};
  matrix_t M1_result = {0};
  scp_create_matrix(2, 3, &M1);
  scp_create_matrix(3, 2, &M2);
  int res = scp_sum_matrix(&M1, &M2, &M1_result);
  ck_assert_int_eq(res, SCP_CALC_ERROR);
  scp_remove_matrix(&M1);
  scp_remove_matrix(&M2);
}
END_TEST

START_TEST(scp_sum_11) {
  ck_assert_int_eq(scp_sum_matrix(NULL, NULL, NULL), SCP_ERROR);
}
END_TEST

START_TEST(scp_sum_12) {
  INV_MATRIX
  matrix_t M1_result = {0};
  ck_assert_int_eq(scp_sum_matrix(&inv_matrix, &inv_matrix, &M1_result),
                   SCP_ERROR);
}
END_TEST

Suite *scp_sum_matrix_tests(void) {
  Suite *s1 = suite_create(PRE_TEST_HEADER "SCP_SUM" POST_TEST_HEADER);
  TCase *tc1_1 = tcase_create("SCP_SUM");

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, scp_sum_0);
  tcase_add_test(tc1_1, scp_sum_1);
  tcase_add_test(tc1_1, scp_sum_2);
  tcase_add_test(tc1_1, scp_sum_3);
  tcase_add_test(tc1_1, scp_sum_4);
  tcase_add_test(tc1_1, scp_sum_5);
  tcase_add_test(tc1_1, scp_sum_6);
  tcase_add_test(tc1_1, scp_sum_7);
  tcase_add_test(tc1_1, scp_sum_8);
  tcase_add_test(tc1_1, scp_sum_9);
  tcase_add_test(tc1_1, scp_sum_10);
  tcase_add_test(tc1_1, scp_sum_11);
  tcase_add_test(tc1_1, scp_sum_12);

  return s1;
}

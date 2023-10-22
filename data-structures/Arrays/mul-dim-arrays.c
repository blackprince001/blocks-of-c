#include <stdio.h>

#define NCOLS 10

typedef float ROW_t[NCOLS];

void printRow(const ROW_t pRow) {
  for (int cl = 0; cl < NCOLS; ++cl)
    printf("%6.2f", pRow[cl]);
  printf("\n");
}

void printMatrix(const ROW_t *pMat, int nRows) {
  for (int r = 0; r < nRows; ++r) {
    for (int cl = 0; cl < NCOLS; ++cl)
      printf("%6.2f", pMat[r][cl]);
  }
}

typedef int Matrix[16][16];

void p_matrix_memory_data(Matrix *pMat, int mROWS, int mCOLS) {
  for (int row = 0; row < mROWS; ++row) {
    for (int col = 0; col < mCOLS; ++col) {
      // shift the null values in the intialized mul-dim array
      // by 0x10 bits so we can see the memory row values clearly
      // when logged on the console.
      *pMat[row][col] = (row << 16) | col;
    }
  }

  printf("Sizeof(pMat) = %lu\n", sizeof(pMat));
}

void example() {
  const int mROWs = 3;
  const int mCOLS = 4;
  Matrix example[mROWs][mCOLS];

  p_matrix_memory_data(*example, mROWs, mCOLS);
}
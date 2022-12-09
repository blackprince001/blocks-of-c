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
// My implementation of a matrix in c with mul dim array typedefs
// I would like to improve this with pointers and void pointers references
// That is why this code can be found in this file.

#include <stdio.h>
#include <stdlib.h>

#define dfCols 3
#define dfRows 3

typedef int Matrix[dfRows][dfCols];

void init_fill_matrix_f(Matrix tMat, int sRow, int sCol) {
  for (int row = 0; row < sRow; ++row) {
    for (int col = 0; col < sCol; ++col) {
      tMat[row][col] = 0;
    }
  }
}

void print_matrix_f(Matrix tMat, int sRow, int sCol) {
  for (int row = 0; row < sRow; ++row) {
    for (int col = 0; col < sCol; ++col) {
      printf("Matrix[%i][%i] holds %i \t", row, col, tMat[row][col]);
    }
    printf("\n");
  }
}

void flatten_matrix(Matrix tMat, int sRow, int sCol, int* flat_array) {
  for (int row = 0; row < sRow; ++row) {
    for (int col = 0; col < sCol; ++col)
      flat_array[(row * sCol) + col] = tMat[row][col];
  }
}

void flat_to_original_matrix(int* flat_array, int sRow, int sCol,
                             Matrix rbtmp) {
  // do something
}

int main() {
  const int srow = 3, scol = 3;
  Matrix tmp;

  init_fill_matrix_f(tmp, srow, scol);
  print_matrix_f(tmp, srow, scol);

  int flat_array[srow * scol];
  flatten_matrix(tmp, srow, scol, flat_array);

  for (int i = 0; i < (srow * scol); ++i) printf("%i", flat_array[i]);

  return 0;
}
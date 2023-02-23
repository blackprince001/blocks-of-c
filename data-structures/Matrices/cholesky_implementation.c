#include <stdio.h>
#include <stdlib.h>

// Create Matrices 
// Implement Cholesky Decomposition algorithm
// test decomposition values
typedef int Matrix[16][16];

Matrix NullMatrix;

Matrix* create_Matrix(int NRows, int NCols) {
  for (int i=0; i < NRows; ++i) {
    for (int j=0; j < NCols; ++j)
      NullMatrix[i][j] = 7;
  }
  return &NullMatrix;
}

int main() {
  create_Matrix(16, 16);
  for (int x=0; x < 16; ++x)
    for (int y=0; y < 16; ++y)
      printf("%i | ", NullMatrix[x][y]);

}
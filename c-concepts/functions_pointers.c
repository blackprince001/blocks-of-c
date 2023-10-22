#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef double(func_t)(double);

int main() {
  func_t *func_ptr = sqrt;

  double root = func_ptr(36.0);

  printf("root - %f", root);

  return 0;
}
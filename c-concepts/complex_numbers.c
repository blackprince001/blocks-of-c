#include <complex.h>
#include <stdio.h>

void func0() {
  double complex z = CMPLX(12, 32);
  printf("real-%d, imag-%d", crealf(z), cimagf(z));
}

void func1() {
  double complex a = CMPLX(21, 12);
  printf("real-%d, imag-%d", crealf(a), cimagf(a));
}

int main() {

  void (*functable[2])(void) = {func0, func1};

  for (int i = 0; i < 2; ++i)
    functable[i]();
}
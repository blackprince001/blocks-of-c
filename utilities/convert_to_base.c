#include <stdbool.h>
#include <stdio.h>

int main()
{
  int num = 101;
  int base = 2;

  while (true) {
    int quo = num / base;
    int r = num % base;

    printf("quotient=%i, remainder=%i\n", quo, r);
    num = quo;

    if (num == 0)
      break;
  }
  return 0;
}

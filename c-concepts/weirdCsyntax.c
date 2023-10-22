#include <stdio.h>

int main() {
  size_t size = 5;

  struct Point {
    int x;
    int y;
  } coordinates[] = {
      {1, 2}, {1, 3}, {1, 4}, {1, 5}, {1, 6},
  };

  for (int i = 0; i < size; i++) {
    printf("(x=%i, y=%i) \n", coordinates[i].x, coordinates[i].y);
  }
}
#include <stdio.h>
#include <stdlib.h>

#define byte unsigned char

struct Data {
  short id;
  short val;
};

void print_byte_content(struct Data *cont, byte *b_ref) {
  printf("%p: ", b_ref);
  for (int i = 0; i < sizeof(*cont); ++i) {
    if (i % 4 == 0)
      putchar('\n');
    printf("%02X ", *(b_ref + 1));
  }
}

int main() {
  struct Data myData = {0x255, 0x111};

  byte *cd = (byte *)&myData.id; // + sizeof(myData.id); to set
                                 // it to next item in the struct

  byte *cp = (byte *)&myData.val;

  print_byte_content(&myData, cd);
  print_byte_content(&myData, cp);
  return EXIT_SUCCESS;
}
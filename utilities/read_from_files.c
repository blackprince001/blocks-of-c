// //header files
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char *getlin(void);
// int str_compare(const void *, const void *);

// #define NLINES_MAX 1000
// char *linePtr[NLINES_MAX];

// int main() {
//   // read lines from the file.
//   int n = 0;
//   for (; n < NLINES_MAX && (linePtr[n] = getlin()) != NULL; ++n);
//   // checks if what we are reading from is a file.
//   if (!feof(stdin)) {
//     if (n == NLINES_MAX)
//       fputs("sorttext: too many lines.\n", stderr);
//     else
//       fputs("sorttext: error reading from stdin.\n", stderr);
//   }
//   else {
//     qsort(linePtr, n, sizeof(char *), str_compare);
//     for (char **p = linePtr; p < linePtr + n; ++p)
//       puts(*p);
//   }
//   return 0;
// }

// #define LEN_MAX 512

// /**
//  * @brief Reads a line from a file with a limit of 512 characters.
//  *
//  * @return linePtr: a string of characters pointer.
//  */
// char *getlin() {
//   char buffer[LEN_MAX], *linePtr = NULL;

//   if (fgets(buffer, LEN_MAX, stdin) != NULL) {
//     size_t len = strlen(buffer);

//     if (buffer[len - 1] == '\n')
//       buffer[len - 1] = '\0';
//     else ++len;

//     if ((linePtr = malloc(len)) != NULL) {
//       strlcpy(linePtr, buffer);
//     }
//   }

//   return linePtr;
// }

// int str_compare(const void *p1, const void *p2) {
//   return strcmp(*(char **)p1, *(char **)p2);
// }

// // comment
#include <assert.h>
#include <stdio.h>
#include <sys/types.h>

int main() {
  pid_t _process_1 = fork();
  assert(_process_1 > 0);

  pid_t _process_2 = fork();
  assert(_process_2 > 0);

  pid_t _process_3 = fork();
  assert(_process_3 > 0);

  printf("\nHere is a process with id: %i\n", getpid());
  printf("\nHere is a process with id: %i\n", getpid());
  printf("\nHere is a process with id: %i\n", getpid());

  return 0;
}
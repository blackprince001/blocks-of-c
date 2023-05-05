#include <stdio.h>

struct _foo_args {
  int num;
  const char* text;
};

#define foo(...) _foo((struct _foo_args) { __VA_ARGS__ })
int _foo(struct _foo_args args)
{
  puts(args.text);
  return args.num * 2;
}

int main(void)
{
  int result = foo(.text = "Hello!", .num = 8);
  if (result)
    printf("%i", result);
  return 0;
}
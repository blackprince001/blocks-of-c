#include <stdio.h>

// literals with integer numbers
int a = 12;
int b = 023;  // octal number, the prefix 0 does not get stripped
int c = 0xff; // hexadecimal number

// byte order for decimal
// int, long, long long
// we can use type specifiers for the int or you suffixes to specify
// which type of decimal integer to be used or any integer at all

long great = 12312;
int sameGreat = 12312l;
long long greater = 12312;
int sameMightBeGreater = 12312ll; // long long integer

// byte order of the integer heirachy for octal and hexadecimal
// int, unsigned int, long, unsigned long, long long, unsigned long long
// all these belong to the int type but to a different number system

int x = 0x200;         // int
int xx = 512U;         // unsigned int
int xxx = 0L;          // long
int xxxx = 0Xf0fUL;    // unsigned long
int xxxxx = 0777LL;    // long long
int xxxxxx = 0xAAAllu; // unsigned long long

// literals with floating point numbers
// can only be represented in the decimal and hexadecimal notations. no octals
// floating decimals

float dec = 10.0;
float decExp = 2.34E5;    // 2.34 * 10^5
float decExpExp = 67e-12; // 67.0 * 10^-12

const float f_var = 123.456F; // Initialize a float variable.

// Initialize a long double variable
// with the product of a
// multiplication performed with
// long double precision.

long double ld_var = f_var * 987E7L;

int main() { return 0; }
#include <stdio.h>

// recursive multiplcation for only positive numbers
long r_mul(long base, long mul)
{
	if (mul == 0)
		return 0;
	return base + r_mul(base, mul - 1);
}

// complete recursive multiplications
long recursive_multiplier(long base, long mul)
{
	if (mul == 0)
		return 0;
	if (mul < 0)
		return recursive_multiplier(base, mul + 1) - base;
	return recursive_multiplier(base, mul - 1) + base;
}

int main()
{
	long result_p = r_mul(13, 2);
	long result_cp = recursive_multiplier(13, -2);
	printf("Multiplication value: %li\n", result_p);
	printf("Multiplication value: %li\n", result_cp);
}
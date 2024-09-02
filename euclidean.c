//Program to find the eulcidean alogrithm
#include <stdio.h>

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int main()
{
	int a = 9, b = 8;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	a = 40, b = 50;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	a = 25, b = 32;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	return 0;
}

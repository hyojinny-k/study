#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n);

int main(void)
{
	int n;

	scanf("%d", &n);

	printf("\n±æÀÌ´Â %d\n", get_cycle_number(n));
}

get_cycle_number(int n)
{
	printf("%d ", n);

	if (n == 1)
		return 1;
	else if (n % 2 == 0)
		n /= 2;
	else
		n = n * 3 + 1;

	return get_cycle_number(n) + 1;
}
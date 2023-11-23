#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n);

int main(void)
{
	int n;

	scanf("%d", &n);

	printf("\n사이클 길이 : %d\n", get_cycle_number(n));
}

int get_cycle_number(int n)
{
	printf("%d ", n);

	if (n == 1)
		return 1;
	if (n % 2 == 0)
		n /= 2;
	else
		n = n * 3 + 1;
	                     
	return get_cycle_number(n) + 1;
}
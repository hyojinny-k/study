#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int sum = 0;
	int i;
	int n = 1;

	for (i = 1; i <= 6; i++)
	{
		sum = 5 * n + 10;
		printf("%d - %d±îÁö ÇÕ = %d\n", n, n + 4, sum);
		n = n + 5;
	}
}
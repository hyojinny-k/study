#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m, n, i, j;
	int sum = 0;
	int prime = 0;

	scanf("%d%d", &m, &n);

	for (i = m; i <= n; i++)
	{
		for (j = 2; j < i; j++)
			if (i % j == 0)
				prime++;

		if (prime == 0)
			sum = sum + i;

		prime = 0;
	}
	
	printf("%d\n", sum);
}
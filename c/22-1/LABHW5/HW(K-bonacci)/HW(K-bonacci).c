#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int k, int n)
{
	int i, result = 0;

	if (n <= k)
		return 1;
	else 
		for (i = 1; i <= k; i++)
			result += fib(k, n - i);

	return result;
}

int main(void)
{
	int k, n;

	scanf("%d%d", &k, &n);

	printf("%d-����ġ ������ %d��° ���� %d\n", k, n, fib(k, n));
}
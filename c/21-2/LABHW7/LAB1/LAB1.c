#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) 
{
	if (n == 0)
		return 0;
	else {
		int x = sum(n - 1);
		printf("%d ", n * 10 + 2);
		return x + n * 10 + 2;
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);

	printf("\n%d\n", sum(n));
}
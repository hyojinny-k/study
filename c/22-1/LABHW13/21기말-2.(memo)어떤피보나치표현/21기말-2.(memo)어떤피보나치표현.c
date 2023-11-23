#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib0(int n, int* F)
{
	if (n == 0 || n == 2)
		return 1;
	else if (n == 1)
		return 0;
	if (F[n - 1] == 0)
		F[n - 1] = fib0(n - 1, F);
	if (F[n - 2] == 0)
		F[n - 2] = fib0(n - 2, F);
	return F[n - 1] + F[n - 2];
}

int fib1(int n, int* F)
{
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	if (F[n - 1] == 0)
		F[n - 1] = fib1(n - 1, F);
	if (F[n - 2] == 0)
		F[n - 2] = fib1(n - 2, F);
	return F[n - 1] + F[n - 2];
}

int main(void)
{
	int n, i; 
	int* F0;
	int* F1;

	scanf("%d", &n);

	F0= (int*)malloc(sizeof(int) * (n + 1));
	F1 = (int*)malloc(sizeof(int) * (n + 1));
	for (i = 0; i < n; i++) {
		F0[i] = 0;
		F1[i] = 0;
	}

	printf("%d %d", fib1(n, F1), fib0(n, F0));
	printf("\n");
	free(F0);
	free(F1);
}
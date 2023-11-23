#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int H(int n, int *M)
{
	int i;
	int value, total = 0;

	if (n == 0 || n == 1)
		return 1;
	for (i = 0; i < n; i++) {
		if (M[i] == 0)
			M[i] = H(i, M);
		if (M[n - 1 - i] == 0)
			M[n - 1 - i] = H(n - 1 - i, M);
		total += M[i] * M[n - 1 - i];
	}
	return total;
}

int main(void)
{
	int n, i;
	int* M;

	printf("0보다 큰 정수:");
	scanf("%d", &n);

	M = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		M[i] = 0;

	printf("결과는 %d\n", H(n, M));
}
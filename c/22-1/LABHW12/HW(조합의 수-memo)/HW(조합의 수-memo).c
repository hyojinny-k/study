#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int comb(int n, int r, int *F)
{
	if (r == 0 || r == n)
		return 1;
	if (F[n - 1] == 0)
		F[n - 1] = comb(n - 1, r, F);
	if (F[n - 2] == 0)
		F[n - 2] = comb(n - 1, r, F);
	return comb(n - 1, r - 1, F) + comb(n - 1, r, F);
}

int main(void)
{
	int n, r, C;
	int* F;

	scanf("%d%d", &n, &r);

	F = (int*)malloc(sizeof(int) * (n + 1));

	C = comb(n, r, F);
	printf("%d\n", C);
	free(F);
	return 0;
}
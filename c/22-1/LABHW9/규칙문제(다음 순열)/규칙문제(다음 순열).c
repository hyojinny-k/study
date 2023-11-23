#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, j;
	int* A;
	int temp;

	scanf("%d", &n);
	A = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	i = n - 1;
	while (i > 0 && A[i - 1] >= A[i])
		i -= 1;
	if (i <= 0) {
		printf("-1\n");
		return;
	}

	j = n - 1;
	while (A[j] <= A[i - 1])
		j -= 1;

	temp = A[i - 1];
	A[i - 1] = A[j];
	A[j] = temp;

	j = n - 1;
	while (i < j) {
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
		i += 1;
		j -= 1;
	}

	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");
}
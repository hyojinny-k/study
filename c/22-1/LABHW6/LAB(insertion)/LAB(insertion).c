#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int *A, int n)
{
	int i, j, k, temp;

	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++)
			if (A[j] > A[i])
				break;
		temp = A[i];
		for (k = i; k > j; k--)
			A[k] = A[k - 1];
		A[j] = temp;
	}
}

void print(int* A, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main(void)
{
	int i, n;
	int* A;

	printf("Enter a number: ");
	scanf("%d", &n);
	if (n <= 0) return 0;
	A = (int*)malloc(sizeof(int) * n);

	if (!A) {
		printf("메모리를 할당할 수 없습니다.");
		return 0;
	}

	srand(time(NULL));

	for (i = 0; i < n; i++)
		A[i] = rand() % 1000;

	print(A, n);

	insertion_sort(A, n);

	printf("정렬된 후:\n");
	print(A, n);

	free(A);
}
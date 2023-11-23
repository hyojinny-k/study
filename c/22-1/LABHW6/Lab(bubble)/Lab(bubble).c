#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int* A, int n)
{
	int i, j, temp;
	
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (A[j] > A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
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

	bubble_sort(A, n);

	printf("정렬된 후:\n");
	print(A, n);

	free(A);
}
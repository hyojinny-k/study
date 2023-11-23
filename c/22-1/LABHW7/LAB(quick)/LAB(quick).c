#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int partition(int A[], int p, int r)
{
	int i = p, j = p;
	int temp;

	while (p < r) {
		if (A[p] < A[r]) {
			temp = A[i];
			A[i] = A[p];
			A[p] = temp;
			i++;
		}
		else
			j++;
		p++;
	}

	temp = A[r];
	A[r] = A[i];
	A[i] = temp;

	return i;
}

void quickSort(int A[], int p, int r)
{
	int q;

	if (p < r) {
		q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

void printList(int A[], int s, int e)
{
	int i;

	for (i = s; i <= e; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main(void)
{
	int n, i;
	int* p;

	scanf("%d", &n);
	if (n <= 0) return 0;
	p = (int*)malloc(sizeof(int) * n);
	if (!p) {
		printf("메모리를 할당할 수 없습니다.");
		return 0;
	}

	for (i = 0; i < n; i++)
		p[i] = rand() % 100;

	printList(p, 0, n - 1);
	quickSort(p, 0, n - 1);
	printList(p, 0, n - 1);

	free(p);
}
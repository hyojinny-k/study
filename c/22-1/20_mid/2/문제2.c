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

void printList(int A[], int s, int e)
{
	int i;

	for (i = s; i <= e; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main(void)
{
	int* list;
	int i, n, pivot;

	scanf("%d", &n);
	if (n <= 0) return 0;
	list = (int*)malloc(sizeof(int) * (n + 1));

	if (!list) {
		printf("메모리를 할당할 수 없습니다.");
		return 0;
	}

	for (i = 0; i < n; i++)
		scanf("%d", &list[i]);

	scanf("%d", &pivot);
	list[n] = pivot;

	partition(list, 0, n);
	printList(list, 0, n);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void insertTheNum(int list[], int n, int pivot) {
	int i, j;

	for (i = 0; i < n; i++)
		if (list[i] > pivot) {
			for (j = n; j >= i; j--)
				list[j] = list[j - 1];
			list[i] = pivot;
			break;
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

	insertTheNum(list, n, pivot);
	printList(list, 0, n);
}
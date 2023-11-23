#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inItArray(int p[], int n)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++)
		p[i] = rand() % 1000;
}

void printArray(int p[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");
}

void selectionSort(int *p, int n)
{
	int i, j;
	int max, max_idx, temp;
	
	for (i = 0; i < n - 1; i++) {
		max = p[0]; max_idx = 0;
		for (j = 1; j < n - i; j++)
			if (p[j] > max) {
				max = p[j];
				max_idx = j;
			}
		temp = max;
		p[max_idx] = p[n - 1 - i];
		p[n - 1 - i] = temp;
	}
}

int main(void)
{
	int* p;
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	if (n <= 0) return 0;

	p = (int*)malloc(sizeof(int) * n);

	if (!p) {
		printf("메모리를 할당할 수 없습니다.");
		return 0;
	}

	inItArray(p, n);

	printArray(p, n);

	selectionSort(p, n);

	printf("정렬된 후:\n");
	printArray(p, n);

	free(p);
}
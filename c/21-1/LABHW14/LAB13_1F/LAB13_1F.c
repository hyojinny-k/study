#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);

int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[5 - i - 1] = arrayB[i];
	}

	printf("ArrayA:");
	printArray(arrayA, 5);
	printf("ArrayB:");
	printArray(arrayB, 5);
	printf("ArrayC:");
	printArray(arrayC, 5);

	if (equalArray(arrayA, arrayB, SIZE))
		printf("ArrayA�� arrayB�� ����\n");
	else
		printf("ArrayA�� arrayB�� �ٸ���\n");
	if (equalArray(arrayA, arrayC, SIZE))
		printf("ArrayA�� arrayC�� ����\n");
	else
		printf("ArrayA�� arrayC�� �ٸ���\n");
}

void printArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}

int equalArray(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}
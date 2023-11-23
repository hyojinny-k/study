#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int list[], int size);
void printData(int list[], int size);

int main(void)
{
	srand(time(NULL));

	int i;
	int s[10];

	for (i = 0; i < 10; i++)
		s[i] = rand() % 100;

	printf("발생된 난수:\t");
	printData(s, 10);
	
	selectionSort(s, 10);

	printf("정렬 후:\t");
	printData(s, 10);
}

void selectionSort(int list[], int size)
{
	int i, j, min, temp, minIndex = 0;

	for (i = 0; i < size - 1; i++)
	{
		min = 999;
		for (j = i; j < size; j++)
			if (list[j] < min) {
				min = list[j];
				minIndex = j;
			}
		temp = list[i];
		list[i] = list[minIndex];
		list[minIndex] = temp;
	}
}

void printData(int list[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%2d ", list[i]);
	printf("\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initTable(int arr1[4][4]);
void moveTable(int arr1[4][4]);
void printTable(int arr[4][4]);

int main(void)
{
	int arr1[4][4];

	initTable(arr1);
	printTable(arr1);
	printf("\n");
	moveTable(arr1);
}

void initTable(int arr1[4][4])
{
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			arr1[i][j] = i * 4 + j + 1;
}

void printTable(int arr[4][4])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%2d  ", arr[i][j]);
		printf("\n");
	}
}

void moveTable(int arr1[4][4])
{
	int arr2[4][4];
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			arr2[i][j] = arr1[3 - j][i];

	printTable(arr2);
}
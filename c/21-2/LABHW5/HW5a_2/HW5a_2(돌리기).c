#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initTable(int arr1[][4], int size);
void rotateTable(int arr[][4], int temp[][4], int size);
void printTable(int arr[][4], int size);
void copyTable(int arr[][4], int temp[][4], int size);

int main(void)
{
	int arr1[4][4], arr2[4][4];
	int i;

	initTable(arr1, 4);
	printTable(arr1, 4);
	for (i = 0; i < 4; i++) {
		rotateTable(arr1, arr2, 4);
		printTable(arr2, 4);
		copyTable(arr2, arr1, 4);
	}
}

void initTable(int arr1[][4], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			arr1[i][j] = i * 4 + j + 1;
}

void printTable(int arr[][4], int size)
{
	int i, j;
	 
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

void rotateTable(int arr[][4], int temp[][4], int size)
{
	int i, j;
	
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			temp[i][j] = arr[3 - j][i];	
}

void copyTable(int arr2[][4], int arr1[][4], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			arr1[i][j] = arr2[i][j];
}
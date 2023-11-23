#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void initArray(int arr[], int size) { //�������� ����
	int i, k = 0;
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	return;
}

void printArray(int arr[], int size) { //�������� ����
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

void turnArray(int array1[], int array2[], int size)
{
	int i;
	array2[0] = array1[size - 1];
	for (i = 1; i < size; i++)
		array2[i] = array1[i - 1];
}

void copyTable(int array2[], int array1[], int size)
{
	for (int i = 0; i < 5; i++)
		array1[i] = array2[i];
}

int main(void) // �������� ����
{
	int arr1[5];
	int arr2[5];
	int i;
	int n;

	initArray(arr1, 5);

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		turnArray(arr1, arr2, 5);
		printArray(arr2, 5);
		copyTable(arr2, arr1, 5);
	}
}
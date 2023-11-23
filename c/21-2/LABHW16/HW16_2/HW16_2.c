#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[4][2];
	int arr3[8];
	int i, j;

	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr2[j][i] = arr1[i][j];

	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
		{
			if (i == 0)
				arr3[j] = arr1[i][j];
			else
				arr3[j + 4] = arr1[i][j];
		}
		
	printf("--배열 A\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%5d", arr1[i][j]);
		printf("\n");
	}
	printf("\n--배열 B\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%5d", arr2[i][j]);
		printf("\n");
	}
	printf("\n--배열 C\n");
		for (j = 0; j < 8; j++)
			printf("%5d", arr3[j]);
	printf("\n");

	return 0;
}
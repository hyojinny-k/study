#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMatrix(int a[][3], int size)
{

}

void readMatrix(int a[][2], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < 2; j++)
			scanf("%d", &a[i][j]);
}

int main(void)
{
	int X[4][2], Y[2][3], Z[4][3];
	printf("(4 x 2) ��� X �Է�:\n");
	readMatrix(X, 4);
	printf("(2 x 3) ��� Y �Է�:\n");
	readMatrix(Y, 2);

}
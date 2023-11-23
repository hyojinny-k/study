#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void matrixAdd(int a[][3], int b[][3], int x[][3])
{ 
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			x[i][j] = a[i][j] + b[i][j];
}

void printMatrix(int a[][3])
{
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
}

void readMatrix(int a[3][3])
{ 
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
}

int main(void)
{
	int A[3][3], B[3][3];
	int X[3][3];

	printf("<3 x 3> ��� A �Է�:\n");
	readMatrix(A);

	printf("<3 x 3> ��� B �Է�:\n");
	readMatrix(B);

	matrixAdd(A, B, X);

	printf("�����:\n");
	printMatrix(X); 
	printf("\n");
}
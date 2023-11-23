#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void readMatrix(int** a, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &a[i][j]);
}

void printMatrix(int** a, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}

void matrixMultiplication(int** a, int** b, int** x, int aRow, int aCol, int cCol)
{
	int i, j, k;

	for (i = 0; i < aRow; i++)
		for (j = 0; j < cCol; j++)
			for (k = 0; k < aCol; k++)
				x[i][j] += a[i][k] * b[k][j];
}

void TransposedMatrix(int** a, int** x, int aRow, int aCol)
{
	int i, j;

	for (i = 0; i < aCol; i++)
		for (j = 0; j < aRow; j++)
				x[i][j] = a[j][i];
}

int main(void)
{
	int** A, ** C;
	int** X, ** Y;
	int aRow, aCol;
	int cRow, cCol;
	int i, j;

	printf("Enter 행렬 A의 행과 열의 개수: ");
	scanf("%d %d", &aRow, &aCol); 
	printf("Enter 행렬 C의 행과 열의 개수(C의 행은 %d이어야): ", aCol);
	scanf("%d %d", &cRow, &cCol);

	A = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++)
		A[i] = (int*)malloc(sizeof(int) * aCol);
	C = (int**)malloc(sizeof(int*) * cRow);
	for (i = 0; i < cRow; i++)
		C[i] = (int*)malloc(sizeof(int) * cCol);
	X = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++)
		X[i] = (int*)malloc(sizeof(int) * cCol);
	Y = (int**)malloc(sizeof(int*) * aCol);
	for (i = 0; i < aCol; i++)
		Y[i] = (int*)malloc(sizeof(int) * aRow);

	printf("<%d x %d> 행렬 A 입력:\n", aRow, aCol);
	readMatrix(A, aRow, aCol); printf("\n");
	printf("<%d x %d> 행렬 C 입력:\n", cRow, cCol);
	readMatrix(C, cRow, cCol); printf("\n");
	for (i = 0; i < aRow; i++)
		for (j = 0; j < cCol; j++)
			X[i][j] = 0;
	for (i = 0; i < aCol; i++)
		for (j = 0; j < aRow; j++)
			Y[i][j] = 0;

	matrixMultiplication(A, C, X, aRow, aCol, cCol);
	printf("행렬곱:\n");
	printMatrix(X, aRow, cCol);
	printf("\n");

	TransposedMatrix(A, Y, aRow, aCol);
	printf("전치행렬:\n");
	printMatrix(Y, aCol, aRow);
	printf("\n");

	for (i = 0; i < aRow; i++)
		free(A[i]);
	free(A);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define LE 1
#define UP 2

int matrixPath_memo(int** m, int r, int c, int i, int j, int** M, int** BP)
{
	if (i == 0 && j == 0)
		return m[0][0];
	else if (i == 0) {
		BP[i][j] = LE;
		if (M[0][j - 1] == 0)
			M[0][j - 1] = matrixPath_memo(m, r, c, 0, j - 1, M, BP);
		return M[0][j - 1] + m[i][j];
	}
	else if (j == 0) {
		BP[i][j] = UP;
		if (M[i - 1][0] == 0)
			M[i - 1][0] = matrixPath_memo(m, r, c, i - 1, 0, M, BP);
		return M[i - 1][0] + m[i][j];
	}
	else {

		if (M[i - 1][j] == 0)
			M[i - 1][j] = matrixPath_memo(m, r, c, i - 1, j, M, BP);
		if (M[i][j - 1] == 0)
			M[i][j - 1] = matrixPath_memo(m, r, c, i, j - 1, M, BP);
		if (M[i - 1][j] < M[i][j - 1]) {
			BP[i][j] = UP;
			return M[i - 1][j] + m[i][j];
		}
		else {
			BP[i][j] = LE;
			return M[i][j - 1] + m[i][j];
		}
	}
}

int main(void)
{
	int** m, ** M, ** BP, **min; // M은 메모
	int i, j, r, c;
	r = c = 4; // 4x4 matrix
	m = (int**)malloc(sizeof(int*) * r);
	M = (int**)malloc(sizeof(int*) * r);
	BP = (int**)malloc(sizeof(int*) * r);
	min = (int**)malloc(sizeof(int*) * r);
	for (i = 0; i < r; i++) {
		m[i] = (int*)malloc(sizeof(int) * c);
		M[i] = (int*)malloc(sizeof(int) * c);
		BP[i] = (int*)malloc(sizeof(int*) * c);
		min[i] = (int*)malloc(sizeof(int*) * c);
	}

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			scanf("%d", &m[i][j]);
			M[i][j] = 0; //메모 초기화
			BP[i][j] = 0;
			min[i][j] = 0;
		}
	printf("%d\n", matrixPath_memo(m, r, c, 3, 3, M, BP));

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%3d", M[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%3d", BP[i][j]);
		printf("\n");
	}
	printf("\n");

	min[3][3] = 1;
	i = 3;  j = 3;
	while (i != 0 || j != 0) {
		if (BP[i][j] == 1) {
			min[i][j - 1] = 1;
			j--;
		}
		else if (BP[i][j] == 2) {
			min[i - 1][j] = 1;
			i--;
		}
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			if (min[i][j] == 1)
				printf("<%d,%d> ", i, j);
	}
	printf("\n");

	for (i = 0; i < r; i++) {
		free(m[i]);
		free(M[i]);
		free(BP[i]);
		free(min[i]);
	}
	free(m);
	free(M);
	free(BP);
	free(min);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define X_VALUE 5 // 2차원 배열의 행의 수 
#define Y_VALUE 5 // 2차원 배열의 열의 수 

void readGridInfo(char grid[][Y_VALUE + 1]) // 변경하지 말라
{
	int i;
	// grid 입력 
	//printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}

void countGrid(char grid[][Y_VALUE + 1], int digitsAround[][Y_VALUE])
{
	int i, j;
	int count = 0;

	for (i = 0; i < 5; i++)
		for (j = 0; j < Y_VALUE; j++) {
			if (grid[i][j] > 0) {
				if (i - 1 >= 0)
					digitsAround[i - 1][j] += grid[i][j] - 48;
				if (i + 1 < X_VALUE)
					digitsAround[i + 1][j] += grid[i][j] - 48;
				if (j - 1 >= 0)
					digitsAround[i][j - 1] += grid[i][j] - 48;
				if (j + 1 < Y_VALUE)
					digitsAround[i][j + 1] += grid[i][j] - 48;
			}
		}
}

void display_digitsAround(int digitsAround[][Y_VALUE]) // 변경하지 말라. 교안에서의 함수를 조금 변형했음
{
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			printf("%d ", digitsAround[i][j]); // 이부분을 조금 변형했음
		printf("\n");
	}
}

int main(void) // 변경하지 말라
{
	char grid[X_VALUE][Y_VALUE + 1]; // 문자열 마지막 \0 값 때문에 5*6 배열

	int digitsAround[X_VALUE][Y_VALUE] = { 0 };

	readGridInfo(grid);
	countGrid(grid, digitsAround);
	display_digitsAround(digitsAround);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define X_VALUE 5 // 2���� �迭�� ���� �� 
#define Y_VALUE 5 // 2���� �迭�� ���� �� 

void readGridInfo(char grid[][Y_VALUE + 1]) // �������� ����
{
	int i;
	// grid �Է� 
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

void display_digitsAround(int digitsAround[][Y_VALUE]) // �������� ����. ���ȿ����� �Լ��� ���� ��������
{
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			printf("%d ", digitsAround[i][j]); // �̺κ��� ���� ��������
		printf("\n");
	}
}

int main(void) // �������� ����
{
	char grid[X_VALUE][Y_VALUE + 1]; // ���ڿ� ������ \0 �� ������ 5*6 �迭

	int digitsAround[X_VALUE][Y_VALUE] = { 0 };

	readGridInfo(grid);
	countGrid(grid, digitsAround);
	display_digitsAround(digitsAround);
}
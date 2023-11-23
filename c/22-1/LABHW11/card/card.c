#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int xIndex, i, j;
	int result[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	int find;
	char x[5];
	int card[4][8] = { { 1, 2, 3, 4, 5, 6, 7, 8 }, { 1, 2, 3, 4, 9, 10, 11, 12 }, { 1, 2, 5, 6, 9, 10, 13, 14 }, { 1, 3, 5, 7, 9, 11, 13, 15 } };

	scanf("%s", x);

	for (xIndex = 0; xIndex < 4; xIndex++)
		if (x[xIndex] == 'N')
			for (i = 0; i < 15; i++) {
				for (j = 0; j < 8; j++)
					if (card[xIndex][j] == result[i])
						result[i] = 0;
			}

	for (xIndex = 0; xIndex < 4; xIndex++)
		if (x[xIndex] == 'Y')
			for (i = 0; i < 15; i++) {
				find = 0;
				for (j = 0; j < 8; j++)
					if (card[xIndex][j] == result[i])
						find = 1;
				if (find == 0)
					result[i] = 0;
			}
	
	for (i = 0; i < 15; i++)
		if (result[i] != 0) {
			printf("%d\n", result[i]);
			break;
		}
}
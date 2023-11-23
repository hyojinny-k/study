#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[8][9];
	int i, j, num;

	printf("--구구단 표는 다음과 같습니다.\n");
	for (i = 0; i < 8; i++)
		for (j = 0; j < 9; j++)
			arr[i][j] = (i + 2) * (j + 1);
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%5d", arr[i][j]);
		printf("\n");
	}

	printf("--원하는 구구단은? ");
	scanf("%d", &num);
	for (j = 0; j < 9; j++)
		printf("%5d", arr[num - 2][j]);
	printf("\n");
}
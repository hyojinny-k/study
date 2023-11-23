#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int rows, columns, i, j;
	int num = 1;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &columns);

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
			
		printf("%d", num);
		num++;
		printf("\n");
	}

	return 0;
}
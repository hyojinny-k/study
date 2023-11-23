#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int row, column, i, j;

	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns: ");
	scanf("%d", &column);

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < column)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
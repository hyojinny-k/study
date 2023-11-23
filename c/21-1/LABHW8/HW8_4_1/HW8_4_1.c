#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	int num1 = 1;
	int num2 = 2;
	int num3 = 1;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			printf("%d * %d = %d\t", num1, num2, num1 * num2);
			num3++;
			num2 = 2 * num3;
		}
		printf("\n");
		num1++;
		num2 = 2;
		num3 = 1;
	}
}
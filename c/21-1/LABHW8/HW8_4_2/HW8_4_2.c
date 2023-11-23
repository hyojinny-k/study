#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	int num1 = 1;
	int num2 = 2;
	int num3 = 1;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d * %d = %d\t", num1, num2, num1 * num2);
			num3++;
			num2 = 2 * num3;
			j++;
		}
		printf("\n");
		num2 = 2;
		num3 = 1;
		num1++;
		i++;
	}
}
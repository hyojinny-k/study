#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	int main(void)
	{
		int num, i, j;

		printf("Enter a number:");
		scanf("%d", &num);

		for (i = num; i >= 1; i--)
		{
			for (j = 0; j < num - i; j++)
				printf(" ");
			for (j = i; j >= 1; j--)
				printf("*");
			printf("\n");
		}

		return 0;
	}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, n, result;

	printf("Enter a number(>=2): ");
	scanf("%d", &num);

	printf("%d! = %d ", num, num);

	result = num;
	n = num;

	for (i = 1; i < num; i++)
	{		
		n--;
		result = result * n;
		printf("* %d ", n);
	}

	printf("= %d\n", result);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, result;
	i = 0; 
	result = 1;

	printf("Enter a number:");
	scanf("%d", &n);

	while (i < n)
	{
		result *= 2;
		i++;
	}

	printf("%d\n", result);
}
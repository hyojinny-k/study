#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i, prime;
	prime = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			prime++;
			break;
		}
	}

	if (prime > 0)
		printf("소수가 아닙니다.\n");
	else
		printf("소수입니다.\n");
}
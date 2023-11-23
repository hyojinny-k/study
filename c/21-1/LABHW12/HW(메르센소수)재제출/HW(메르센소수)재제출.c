#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long twoToThePower(int n)
{
	int i;
	long long power = 1;

	for (i = 1; i <= n; i++)
		power *= 2;

	return power;
}

int isPrime(long long x)
{
	long long j;
	int flag = 0;

	for (j = 2; j < x; j++)
	{
		if (x % j == 0)
		{
			flag++;
			break;
		}
	}

	if (flag == 0)
		return 1;
	else
		return 0;
}

int main(void)
{
	int num, i;
	long long mer;

	printf("Enter a number:");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
	{
		mer = twoToThePower(i) - 1;

		if (isPrime(mer) == 1)
			printf("(2^%d - 1) = %lld은 메르센 소수이다\n", i, mer);
	}
}
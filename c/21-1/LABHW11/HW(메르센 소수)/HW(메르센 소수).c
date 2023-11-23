#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long twoToThePower(long long n)
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
	int num, prime;
	long long mer, k;

	printf("Enter a number:");
	scanf("%d", &num);

	for (k = 2; k <= num; k++)
	{
		mer = twoToThePower(k) - 1;
		prime = isPrime(mer);

		if (prime == 1)
			printf("(2^%lld - 1) = %lld은 메르센 소수이다\n", k, mer);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i;
	long long fact = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		fact = fact * i;
		printf("%d! = %lld\n", i, fact);
	}
}
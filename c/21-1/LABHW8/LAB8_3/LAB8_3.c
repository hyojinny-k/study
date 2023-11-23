#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, integer;
	int count = 0;

	printf("Enter the # of integers: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", &integer);
		if (integer > 0 && integer % 2 == 0)
			count++;
	}

	printf("The number of even numbers is %d.\n", count);

	return 0;
}
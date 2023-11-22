#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i;
	int k = 0;
	int num = 1;

	printf("Enter a number:");
	scanf("%d", &n);

	i = 0;
	while (i < n)
	{
		if (num * 2 <= n)
		{
			num = num * 2;
			k++;
		}
		else
			break;
	}

	printf("%d\n", k);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, one = 1, count = 0;
	int remainder = -1;

	scanf("%d", &num);

	while (remainder != 0)
	{
		count++;
		remainder = one % num;
		one = one * 10 + 1;
	}

	printf("%d\n", count);
}
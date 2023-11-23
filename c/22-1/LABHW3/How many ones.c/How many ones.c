#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isAllOnes(int c)
{
	int count = 0;

	while (c >= 1) {
		if (c % 10 != 1)
			return 0;
		count++;
		c /= 10;
	}
	return count;
}

int findC(int a)
{
	int b = 1;

	while (isAllOnes(a * b) == 0)
		b++;
	return isAllOnes(a * b);
}

int main(void)
{
	int a;

	scanf("%d", &a);
	printf("%d\n", findC(a));
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pow(int a, int b);
int main(void)
{
	int x, y;
	x = 5;

	for (y = 0; y <= 10; y++)
		printf("%d ^ %d == %d\n", x, y, pow(x, y));
}

int pow(int a, int b)
{
	int result, i;
	result = 1;

	for (i = 0; i < b; i++)
		result *= a;

	return result;
}
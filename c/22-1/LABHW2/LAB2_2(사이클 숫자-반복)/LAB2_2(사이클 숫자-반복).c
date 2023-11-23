#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n);

int main(void)
{
	int n;

	scanf("%d", &n);

	printf("±æÀÌ´Â %d\n", get_cycle_number(n));
}

get_cycle_number(int n)
{
	int length = 0;

	while (n != 1) {
		printf("%d ", n);

		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;

		length++;
	}
	printf("1\n");

	return length + 1;
}
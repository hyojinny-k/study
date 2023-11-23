#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n);

int main(void)
{
	int n;

	scanf("%d", &n);
	
	printf("사이클 길이 : %d\n", get_cycle_number(n));
}

int get_cycle_number(int n)
{
	int length = 1;

	while (n > 1) {
		printf("%d ", n);
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		length++;
	}
	printf("1\n");

	return length;
}
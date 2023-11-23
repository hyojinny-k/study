#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculateReverse(int n)
{
	int reverse = 0;

	while (n >= 1) {
		reverse = (reverse * 10) + n % 10;
		n /= 10;
	}
	return reverse;
}

int main(void)
{
	int n, rn;
	int count = 0;

	printf("Enter a number:");
	scanf("%d", &n);

	while (n != calculateReverse(n) && n >= 0) {
		n += calculateReverse(n);
		count++;
	}

	if (n < 0)
		printf("Overflow\n");
	else
		printf("%d %d\n", count, n);
}
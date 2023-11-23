#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calTenMultiple(int n)
{
	int result = 1;

	while (n != 0) {
		n /= 10;
		result *= 10;
	}

	return result / 10;
}

int main(void)
{
	int n;
	int nextDigit, tempNum;
	int tenMultiple;

	scanf("%d", &n);

	tenMultiple = calTenMultiple(n * 9);
	tempNum = n * 9;

	do {
		nextDigit = tempNum / tenMultiple;
		printf("%d ", nextDigit);
		tempNum = tempNum - nextDigit * tenMultiple;
		tenMultiple /= 10;
	} while (tenMultiple >= 1);

	printf("\n");
}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h>

int calTenMultiple(int n)
{
	int tenMultiple = 1;

	while (n >= 10) {
		tenMultiple *= 10; 
		n /= 10;
	}

	return tenMultiple;
}

int main(void)
{
	int n;
	int count = 0;
	int num = 0;
	int tmpNum, nextDigit = 0;
	int tenMultiple;

	scanf("%d", &n);

	while (count != n) {
		num += 3;
		tenMultiple = calTenMultiple(num);
		tmpNum = num;

		do {
			nextDigit = tmpNum / tenMultiple;
			tmpNum = tmpNum - nextDigit * tenMultiple;
			tenMultiple /= 10;
			count++;
		} while (tenMultiple >= 1 && count != n);
	}

	printf("%d\n", nextDigit);
}
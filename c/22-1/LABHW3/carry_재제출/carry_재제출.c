#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int carryCount(int n1, int n2)
{
	int carry = 0, totalCarry = 0;
	int n1LastDigit, n2LastDigit;

	while (n1 > 0 || n2 > 0) {
		n1LastDigit = n1 % 10;
		n1 /= 10;
		n2LastDigit = n2 % 10;
		n2 /= 10;
		if (n1LastDigit + n2LastDigit + carry >= 10) {
			totalCarry++;
			carry = 1;
		}
		else
			carry = 0;
	}
	return totalCarry;
}

int main(void)
{
	int n1, n2;

	scanf("%d%d", &n1, &n2);

	printf("%d\n", carryCount(n1, n2));
}
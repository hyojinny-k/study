#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calDigits(int num)
{
	int posNum = 0;

	while (num != 0)
	{
		posNum++;
		num /= 10;
	}

	return posNum;
}

int calTenToDigits(int num)
{
	int dividend;

	num = calDigits(num);

	for (dividend = 10; num > 1; num--)
		dividend *= 10;

	return dividend;
}

int extractNum(int num, int subNum, int dividend)
{
	while (num != 0)
	{
		if (num % dividend == subNum)
			break;
		num /= 10;
	}

	return num;
}

int main(void)
{
	int num, subNum;
	int dividend;

	scanf("%d", &num);
	scanf("%d", &subNum);
	dividend = calTenToDigits(subNum);

	printf("%d\n", extractNum(num, subNum, dividend));
}
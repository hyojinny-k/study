#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, subNum;
	int posNum, dividend;

	scanf("%d", &num);
	scanf("%d", &subNum);

	posNum = 0;
	dividend = 1;
	while (1)
	{
		dividend *= 10;
		if (subNum / dividend >= 1)
			posNum++;
		else 
			break;
	}

	while (num != 0)
	{
		if (num % dividend == subNum)
			break;
		num /= 10;
	}

	printf("%d\n", num);

	return 0;
}
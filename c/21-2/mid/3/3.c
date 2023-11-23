#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int eachDigits(int n)
{
	if (n < 1)
		return 0;
	else {
		int x = eachDigits(n / 10);
		printf("%d ", n % 10);
		return x + n % 10;
	}
}

int main(void) // 변경하지 말라
{
	int num;
	scanf("%d", &num);
	printf("\n%d\n", eachDigits(num));
}
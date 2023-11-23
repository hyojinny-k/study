#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void findNPrintBiggest(int a, int b, int c);
int main(void)
{
	int num1, num2, num3;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	findNPrintBiggest(num1, num2, num3);
	return 0;
}

void findNPrintBiggest(int a, int b, int c)
{
	if (a >= b)
		if (c >= a)
			printf("The Biggest number is %d.\n", c);
		else
			printf("The Biggest number is %d.\n", a);
	else
		if (c >= b)
			printf("The Biggest number is %d.\n", c);
		else
			printf("The Biggest number is %d.\n", b);

	return;
}
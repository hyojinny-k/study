#include <stdio.h>
int main(void)
{
	int num1, num2, num3;

	printf("Enter hour: ");
	scanf_s("%d", &num1);
	printf("Enter minute: ");
	scanf_s("%d", &num2);

	num3 = num1 * 60 + num2;

	printf("Total %d minutes\n", num3);
}
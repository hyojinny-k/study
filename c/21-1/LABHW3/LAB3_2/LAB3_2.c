#include <stdio.h>
int main(void)
{
	int num1, num2, num3;
	
	printf("Enter the total minutes: ");
	scanf_s("%d", &num1);

	num2 = num1 / 60;
	num3 = num1 % 60;

	printf("%d minutes\n", num1);
	printf("%dh %dm\n", num2, num3);
}
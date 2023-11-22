#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char operator;
	int num1, num2, num3, result;

	printf("Enter an operator: ");
	scanf("%c", &operator);
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	printf("Enter the second operand: ");
	scanf("%d", &num2);
	result = 0; //초기화 필요!!!!!!!!!!

	switch (operator)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
	}

	printf("%d %c %d = ", num1, operator, num2);
	scanf("%d", &num3);

	if (num3 == result)
		printf("Right answer\n");
	else
		printf("Wrong!\n%d is the right answer\n", result);
}
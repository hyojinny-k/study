#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i;
	int sum = 0;
	int product = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	i = 0;
	while (i < num)
	{
		sum = sum + 3;
		product = product * 3;
		i++;
	}
	printf("3 �� %d �� ���� ���� %d �̴�\n", num, sum);
	printf("3 �� %d �� ���� ���� %d �̴�\n", num, product);
}
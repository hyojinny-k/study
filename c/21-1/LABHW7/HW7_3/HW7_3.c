#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, factorial, i;

	printf("Enter a number: ");
	scanf("%d", &num);
	
	i = 1;
	factorial = 1;
	while (i <= num)
	{
		if (i > 1)
			factorial = factorial * i;
		i++;
	}		
	printf("%d �� Factorial ���� %d �̴�.\n", num, factorial);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i;

	printf("Enter a number:");
	scanf("%d", &num);

	i = num;
	while (i > 0)
	{
		printf("%d", num % 2);
		num = num / 2;
		i--;
		if (num < 1)
			break;
	}
	
	printf("\n");
}
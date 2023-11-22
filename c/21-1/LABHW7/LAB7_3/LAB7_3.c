#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, result;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	i = 1;
	result = 1;
	while (i <= num)
	{
		printf("%d\n", result);		
		result = i * i * i;
		i++;
	}
}
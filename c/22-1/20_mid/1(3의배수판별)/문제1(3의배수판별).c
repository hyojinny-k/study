#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void multipleOfThree(char n[])
{
	int i, sum = 0;
	
	for (i = 0; n[i] != '\0'; i++)
		sum += (n[i] - 48);

	if (sum % 3 == 0)
		printf("yes\n");
	else
		printf("no\n");
}

int main(void)
{
	char n[1050];

	scanf("%s", n);

	multipleOfThree(n);
}
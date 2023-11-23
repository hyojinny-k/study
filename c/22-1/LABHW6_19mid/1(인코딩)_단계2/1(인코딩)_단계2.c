#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 

int check_two(char n[])
{
	if ((n[strlen(n) - 1] - 48) % 2 == 0)
		return 1;
	return 0;
}

int check_three(char n[])
{
	int i, sum = 0;

	for (i = 0; n[i] != '\0'; i++)
		sum += n[i] - 48;

	if (sum % 3 == 0)
		return 1;
	return 0;
}

int check_four(char n[])
{
	int div100 = 0;

	div100 = (n[strlen(n) - 1] - 48) + ((n[strlen(n) - 2] - 48) * 10);

	if (div100 % 4 == 0)
		return 1;
	return 0;
}

int check_five(char n[])
{
	if ((n[strlen(n) - 1] - 48) == 0 || (n[strlen(n) - 1] - 48) == 5)
		return 1;
	return 0;
}

int main(void)
{
	char n[52];

	scanf("%s", n);

	printf("%d%d%d%d\n", check_two(n), check_three(n), check_four(n), check_five(n));
}
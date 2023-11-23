#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(char name[])
{
	printf("Enter your name: ");
	scanf("%s", name);
}

void reverse(char name[])
{
	int i, len = strlen(name);
	char temp;

	printf("Reverse: ");
	for (i = 0; i < len / 2; i++) {
		temp = name[i];
		name[i] = name[len - i - 1];
		name[len - 1 - i] = temp;
	}
	printf("%s\n", name);
}

int main(void)
{
	char name[100];

	input(name);

	reverse(name);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_num(char s[100], int key)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == key)
			count++;
	return count;
}

int main(void)
{
	char str[100];
	char key;
	int i, count = 0;

	printf("Enter a String: ");
	scanf("%s", str);

	while (getchar() != '\n');

	printf("Enter a character: ");
	scanf("%c", &key);

	printf("'%c' is appeared %d times\n", key, str_num(str, key));
}
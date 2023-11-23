#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[80];
	int i, length;
	length = 0;

	printf("Enter a string:");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
		length++;

	printf("±æÀÌ´Â %d\n", length);

	for (i = 0; i < length; i++)
		printf("%c\n", s[4 - i]);

	return 0;
}
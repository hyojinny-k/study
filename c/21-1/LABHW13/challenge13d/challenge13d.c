#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL isPalindrome(char str[]);

#include <stdio.h>
int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome üũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d ����): ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}

BOOL isPalindrome(char s[])
{
	int i, length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = 0; i < length; i++)
		if (s[i] != s[length - 1 - i])
		{
			i = 0;
			break;
		}
	if (i == 0)
		return FALSE;
	else
		return TRUE;
}
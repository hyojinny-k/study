#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100];
	int i;

	scanf("%s", s);

	if (s[strlen(s) - 2] == s[strlen(s) - 1]) {
		printf("%s", s);
		for (i = strlen(s) - 3; i >= 0; i--)
			printf("%c", s[i]);
	}
	else if (s[strlen(s) - 3] == s[strlen(s) - 1]) {
		printf("%s", s);
		for (i = strlen(s) - 4; i >= 0; i--)
			printf("%c", s[i]);
	}
	else {
		printf("%s", s);
		for (i = strlen(s) - 2; i >= 0; i--)
			printf("%c", s[i]);
	}
	printf("\n");
}
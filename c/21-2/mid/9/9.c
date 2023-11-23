#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_word_in_word(char passwd[], int start)
{
	int i;

	for (i = 0; i < 2; i++)
		if (passwd[start + i + 1] - passwd[start + i] != 1)
			return 0;
	return 1;
}

int main(void)
{
	char passwd[20];
	int i;

	scanf("%s", passwd);

	for (i = 0; passwd[i] != '\0'; i++)
		printf("%d", is_word_in_word(passwd, i));
}
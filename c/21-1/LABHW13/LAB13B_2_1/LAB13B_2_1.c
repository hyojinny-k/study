#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	char word[100];

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (65 <= word[i] && word[i] <= 90)
			printf("%c\n", word[i]);
	}
}
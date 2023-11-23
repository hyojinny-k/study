#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, j;
	j = 0;

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (65 <= word[i] && word[i] <= 90)
		{
			newWord[j] = word[i];
			j++;
		}
	}
	newWord[j] = '\0';

	printf("%s\n", newWord);
}
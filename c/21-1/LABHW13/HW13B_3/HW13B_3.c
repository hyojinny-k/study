#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, length;
	length = 0;

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i++)
		newWord[i] = word[length - 1 - i];
	newWord[i] = '\0';

	printf("The reversed word is %s\n", newWord);

	return 0;
}
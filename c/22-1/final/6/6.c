#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//6¹ø
void printCode(char code[])
{
	int i;
	for (i = 0; i < 26; i++)
		printf("%c", code[i]);
	printf("\n");
}

void encode(char s[], char e[])
{
	int i;
	for (i = 0; i < (int)strlen(s); i++) {
		e[i] = 155 - s[i];
	}
}

int main(void)
{
	int i;
	char sentence[1000];
	char encodedSentence[1000] = { NULL };

	fgets(sentence, sizeof(sentence), stdin);

	encode(sentence, encodedSentence);

	for (i = 0; i < (int)strlen(sentence); i++)
		printf("%c", encodedSentence[i]);
}
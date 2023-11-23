#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void makeCode(char code[], int dist)
{
	int i;
	for (i = 0; i < 26 - dist; i++)
		code[i] = 65 + i + dist;
	for (i = 0; i < dist; i++)
		code[26 - dist + i] = 65 + i;
}

void printCode(char code[])
{
	int i;
	for (i = 0; i < 26; i++)
		printf("%c", code[i]);
	printf("\n");
}

void encode(char code[], char s[], char e[])
{
	int i;
	for (i = 0; i < (int)strlen(s); i++) {
		if (s[i] != ' ' && s[i] >= 65 && s[i] <= 90)
			e[i] = code[s[i] - 65];
		else
			e[i] = s[i];
	}
}

int main(void)
{
	int distance;
	int i;
	char code[26];
	char sentence[80];
	char encodedSentence[80];

	printf("Enter a distance to encoding:");
	scanf("%d", &distance);

	printf("-----------------------------------------------\n");
	printf("alphabet:          ");
	for (i = 0; i < 26; i++)
		code[i] = 65 + i;
	printCode(code);

	printf("encoded:           ");
	makeCode(code, distance);
	printCode(code);
	printf("-----------------------------------------------\n\n");

	while (getchar() != '\n');

	printf("Enter a sentence to encode:");
	fgets(sentence, sizeof(sentence), stdin);

	printf("original sentence:          ");
	for (i = 0; i < (int)strlen(sentence); i++)
		printf("%c", sentence[i]);

	encode(code, sentence, encodedSentence);
	printf("encoded sentence:           ");
	for (i = 0; i < (int)strlen(sentence); i++)
		printf("%c", encodedSentence[i]);
}
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

void decode(char code[], char e[], char d[])
{
	int i, j;
	for (i = 0; i < (int)strlen(e); i++) {
		if (e[i] == ' ')
			d[i] = e[i];
		else
			for (j = 0; j < 26; j++)
				if (e[i] == code[j])
					d[i] = 65 + j;
	}
}

int main(void)
{
	int distance;
	int i;
	char code[26];
	char sentence[80];
	char encodedSentence[80];
	char decodedSentence[80];

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

	encode(code, sentence, encodedSentence);
	printf("original sentence:          ");
	for (i = 0; i < (int)strlen(sentence); i++)
		printf("%c", sentence[i]);

	printf("encoded sentence:           ");
	for (i = 0; i < (int)strlen(sentence); i++)
		printf("%c", encodedSentence[i]);

	decode(code, encodedSentence, decodedSentence);
	printf("decoded sentence:           ");
	for (i = 0; i < (int)strlen(sentence); i++)
		printf("%c", decodedSentence[i]);
}
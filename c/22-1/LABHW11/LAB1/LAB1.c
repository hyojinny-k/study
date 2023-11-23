#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void encryption(char sentence[80], char caesar[27], int distance)
{
	int i;

	for (i = 0; i < (int)strlen(sentence); i++)
		if (sentence[i] != ' ' && sentence[i] >= 65 && sentence[i] <= 90)
			sentence[i] = caesar[sentence[i] - 65];
}

int main(void)
{
	int distance;
	int i;
	char caesar[27], sentence[80];
	
	printf("Enter a distance to encoding:");
	scanf("%d", &distance);
	printf("-----------------------------------------------\n");
	printf("alphabet:          ");
	for (i = 0; i < 26; i++)
		printf("%c", 65 + i);
	printf("\n");
	printf("encoded:           ");
	for (i = 0; i < 26 - distance; i++)
		caesar[i] = 65 + i + distance;
	for (i = 0; i < distance; i++)
		caesar[26 - distance + i] = 65 + i;
	caesar[26] = '\0';
	printf("%s\n", caesar);
	printf("-----------------------------------------------\n\n");
	while (getchar() != '\n');
	printf("Enter a sentence to encode:");
	fgets(sentence, sizeof(sentence), stdin);
	printf("original sentence:          %s", sentence);
	encryption(sentence, caesar, distance);
	printf("encoded sentence:           %s", sentence);
}
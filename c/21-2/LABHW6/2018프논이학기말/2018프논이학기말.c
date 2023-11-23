#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mergeString(char c[], char a[], char b[])
{
	int i, j, length = 0;
	int minIndex;
	char temp;

	for (i = 0; a[i] != '\0'; i++) {
		c[i] = a[i];
		length++;
	}
	for (i = 0; b[i] != '\0'; i++) {
		c[length] = b[i];
		length++;
	}
	c[length] = '\0';

	for (i = 0; i < length; i++) {
		minIndex = i;
		for (j = i + 1; j < length; j++)
			if (c[j] < c[minIndex])
				minIndex = j;
		temp = c[i];
		c[i] = c[minIndex];
		c[minIndex] = temp;
	}
}

int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}
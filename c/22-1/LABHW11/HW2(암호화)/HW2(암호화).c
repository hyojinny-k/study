#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void remove_duplicated_char(char* word) 
{ 
	int i, j;
	for (i = 0; word[i] != '\0'; i++)
		for (j = 0; word[j] != '\0'; j++)
			if (i != j && word[i] == word[j])
				word[j] = '0';
	for (i = 0; word[i] != '\0'; i++)
		if (word[i] == '0') {
			for (j = i; word[j] != '\0'; j++)
				word[j] = word[j + 1];
			word[j - 1] = '\0';
		}
} // ���� Lab���� ���� �Լ�

void makeCode(char code[], int distance, char* key) 
{
	int i, k;
	int x = 65;
	for (i = 0; i < strlen(key); i++)
		code[i + distance] = key[i];
	i = strlen(key) + distance;
	while (i < 26) {
		for (k = 0; k < strlen(key); k++) {
			if (key[k] == x)
				break;
		}
		if (k == strlen(key)) {
			code[i] = x;
			i++;
		}
		x++;
	}
	i = 0;
	while (i < distance) {
		for (k = 0; k < strlen(key); k++) {
			if (key[k] == x)
				break;
		}
		if (k == strlen(key)) {
			code[i] = x;
			i++;
		}
		x++;
	}
} // ���� makeCode ����

void printCode(char code[]) 
{
	int i;
	for (i = 0; i < 26; i++)
		printf("%c", code[i]);
	printf("\n");
} // Lab�� �Լ��� �״�� ���

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
	char code[26];//code[0]���� ��A'�� ��ȣȭ ���� ����
	int distance;
	char key[30];
	char encodedSentence[30];
	int i;

	printf("Enter a word to use for encoding(�빮�ڷ� �� �ܾ��Է�):");
	scanf("%s", key);
	printf("Enter a distance for encoding:");
	scanf("%d", &distance);

	printf("-----------------------------------------------\n");
	printf("alphabet:          ");
	for (i = 0; i < 26; i++)
		code[i] = 65 + i;
	printCode(code);

	printf("encoded:           ");
	remove_duplicated_char(key);
	makeCode(code, distance, key);
	printCode(code);
	printf("-----------------------------------------------\n\n");

	while (getchar() != '\n');

	printf("Enter a sentence to encode:");
	fgets(key, sizeof(key), stdin);

	encode(code, key, encodedSentence);
	printf("original sentence:          ");
	for (i = 0; i < (int)strlen(key); i++)
		printf("%c", key[i]);

	printf("encoded sentence:           ");
	for (i = 0; i < (int)strlen(key); i++)
		printf("%c", encodedSentence[i]);
}
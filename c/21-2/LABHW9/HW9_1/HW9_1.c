#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[50];
	char alphaString1[50];
	char alphaString2[50];
	char digitString[50];
	char convertedString[50];
	int i, j = 0, k = 0;

	printf("문자열을 입력하세요:");
	fgets(string, sizeof(string), stdin);

	for (i = 0; i < strlen(string); i++)
		if (isalpha(string[i]))
			alphaString1[j++] = string[i];
		else if (isdigit(string[i]))
			digitString[k++] = string[i];
	alphaString1[j] = '\0';
	digitString[k] = '\0';

	printf("문자들은 %s\n", alphaString1);
	printf("숫자들은 %s\n", digitString);

	j = 0;

	for (i = 0; i < strlen(string); i++)
		if (islower(string[i]))
			alphaString2[j++] = toupper(string[i]);
		else if (isupper(string[i]))
			alphaString2[j++] = tolower(string[i]);
	alphaString2[j] = '\0';

	strcpy(convertedString, alphaString1);
	strcat(convertedString, digitString);

	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);
}
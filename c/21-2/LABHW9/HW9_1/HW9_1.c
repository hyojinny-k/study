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

	printf("���ڿ��� �Է��ϼ���:");
	fgets(string, sizeof(string), stdin);

	for (i = 0; i < strlen(string); i++)
		if (isalpha(string[i]))
			alphaString1[j++] = string[i];
		else if (isdigit(string[i]))
			digitString[k++] = string[i];
	alphaString1[j] = '\0';
	digitString[k] = '\0';

	printf("���ڵ��� %s\n", alphaString1);
	printf("���ڵ��� %s\n", digitString);

	j = 0;

	for (i = 0; i < strlen(string); i++)
		if (islower(string[i]))
			alphaString2[j++] = toupper(string[i]);
		else if (isupper(string[i]))
			alphaString2[j++] = tolower(string[i]);
	alphaString2[j] = '\0';

	strcpy(convertedString, alphaString1);
	strcat(convertedString, digitString);

	printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);
	printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);
}
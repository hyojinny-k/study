#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81
int main()
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i;

	printf("문자열 입력(문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 97 || str[i] == 65)
			countA++;
		else if (str[i] == 101 || str[i] == 69)
			countE++;
		else if (str[i] == 105 || str[i] == 73)
			countI++;
		else if (str[i] == 111 || str[i] == 79)
			countO++;
		else if (str[i] == 117 || str[i] == 85)
			countU++;
	}

	printf("a or A: %d 개\n", countA);
	printf("e or E: %d 개\n", countE);
	printf("i or I: %d 개\n", countI);
	printf("o or O: %d 개\n", countO);
	printf("u or U: %d 개\n", countU);

	return 0;
}
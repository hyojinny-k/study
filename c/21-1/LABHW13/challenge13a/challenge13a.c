#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char firstWord[101], secondWord[101];
	int i, length1, length2;
	length1 = 0;
	length2 = 0;

	printf("Enter the first word: ");
	scanf("%s", firstWord);
	printf("Enter the second word: ");
	scanf("%s", secondWord);

	for (i = 0; firstWord[i] != '\0'; i++)
		length1++;
	for (i = 0; secondWord[i] != '\0'; i++)
		length2++;

	int x = 0;

	if (length1 == length2)
	{
		for (i = 0; i < length1; i++)
		{
			if (firstWord[i] == secondWord[i])
				x++;
			else
				break;
		}

		if (x == length1)
			printf("두 단어는 같다\n");
		else
			printf("두 단어는 다르다\n");
	}

	else
		printf("두 단어는 다르다\n");

	return 0;
}
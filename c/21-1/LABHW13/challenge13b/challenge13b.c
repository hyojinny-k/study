#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[101];
	int i, length, sum, x;
	length = 0;
	x = 1;
	sum = 0;

	printf("Enter a word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		length++;

	for (i = length - 1; i >= 0; i--)
	{
		if (48 <= word[i] && word[i] <= 57)
		{
			sum += (word[i] - 48) * x;
			x *= 10;
		}
		else
			x = 1;
	}

	printf("글자 안의 수의 합은 %d\n", sum);

	return 0;
}
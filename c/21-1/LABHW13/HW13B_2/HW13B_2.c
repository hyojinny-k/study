#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[101];
	int i, sum;
	sum = 0;

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		if (48 <= word[i] && word[i] <= 57)
			sum += word[i] - 48;

	printf("안에 있는 숫자들의 합은 %d\n", sum);

	return 0;
}
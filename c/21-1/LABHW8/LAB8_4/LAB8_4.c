#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, i;
	int bestScore = 0;

	for (i = 1; i <= 5; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score);
		if (score >= bestScore)
			bestScore = score;
	}

	printf("The best score is %d.\n", bestScore);

	return 0;
}
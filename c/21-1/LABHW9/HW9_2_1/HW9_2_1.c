#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, total, n, bestScore;
	total = 0;
	n = 0;
	bestScore = 0;

	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);

	while (score != -1)
	{
		total += score;
		n++;
		if (score > bestScore)
			bestScore = score;
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
	}

	printf("You've entered %d students.\n", n);

	if (n == 0)
		printf("There is no data.\n");
	else
	{
		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", (double)total / (double)n);
		printf("The best score is %d.\n", bestScore);
	}
}
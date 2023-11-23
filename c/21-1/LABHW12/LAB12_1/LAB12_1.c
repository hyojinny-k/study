#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int scores[40];
	int num, score, i, total, average;
	total = 0;

	printf("Enter the number of scores(0 < number <= 40): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score);
		scores[i] = score;
	}

	printf("------------------------------\n");

	for (i = 0; i < num; i++)
		total += scores[i];

	average = total / num;

	printf("Total: %d\n", total);
	printf("Average: %d\n", average);

	for (i = 0; i < num; i++)
		printf("%d ", scores[i]);
	printf("\n");

	return 0;
}
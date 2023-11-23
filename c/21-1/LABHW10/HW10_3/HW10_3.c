#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printManyStars(int starNum);
int main(void)
{
	int score1, score2;

	printf("Tom's score? ");
	scanf("%d", &score1);
	printf("Mary's score? ");
	scanf("%d", &score2);

	printf("---------- Score Histogram ----------\n");

	printf("Tom\t:");
	printManyStars(score1);
	printf("Mary\t:");
	printManyStars(score2);

	return 0;
}

void printManyStars(int starNum)
{
	int i;

	for (i = 1; i <= starNum; i++)
		printf("*");
	printf("<%02d>\n", starNum);

	return;
}
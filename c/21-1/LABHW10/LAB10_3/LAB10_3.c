#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score1, score2, i;

	printf("Tom's score? ");
	scanf("%d", &score1); 
	printf("Mary's score? ");
	scanf("%d", &score2);
	printf("---------- Score Histogram ----------\n");

	printf("Tom\t:");
	for (i = 0; i < score1; i++)
		printf("*");
	printf("<%02d>\n", score1);
	printf("Mary\t:");
	for (i = 0; i < score2; i++)
		printf("*");
	printf("<%02d>\n", score2);

	return 0;
}
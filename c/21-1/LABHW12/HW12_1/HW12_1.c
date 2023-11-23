#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int scores[20];
	int num, score, i, j;

	printf("Enter the number of scores(<=20):");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score:");
		scanf("%d", &score);
		scores[i] = score;
	}

	for (i = 0; i < num; i++)
	{
		printf("Student %2d: ", i + 1);
		for (j = 0; j < scores[i]; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, score, max, min, i;
	max = -1;
	min = 9999;

	printf("Enter the number of scores: ");
	scanf("%d", &n);

	if (n == 0)
		printf("no data.\n");
	else
	{
		for (i = 1; i <= n; i++)
		{
			printf("Enter a score: ");
			scanf("%d", &score);

			if (max < score)
				max = score;
			if (min > score)
				min = score;
		}

		printf("The best score is %d\n", max);
		printf("The worst score is %d\n", min);
	}

	return 0;
}
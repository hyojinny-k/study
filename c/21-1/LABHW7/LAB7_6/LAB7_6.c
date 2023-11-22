#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, score, i, total;

	printf("Enter a student number: ");
	scanf("%d", &num);

	i = 0;
	total = 0;
	while (i < num)
	{
		printf("Enter a score: ");
		scanf("%d", &score);
		total = total + score;
		i++;
	}
	printf("The total is %d\n", total);
}
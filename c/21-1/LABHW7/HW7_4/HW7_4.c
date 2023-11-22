#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, score, total, i;
	double average;

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

	if (num == 0)
		average = 0;
	else
		average = (double)total / num;

	printf("The total is %d\n", total);
	printf("The average is %.1f\n", average);
}
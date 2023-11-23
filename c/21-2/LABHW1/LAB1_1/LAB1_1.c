#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[5];
	int number, i, sum = 0, average = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter %dth number : ", i + 1);
		scanf("%d", &number);
		num[i] = number;
		sum += number;
	}
	average = sum / 5;
	printf("------------------------------------------");
	printf("\n");

	printf("ÃÑÇÕÀº %d\n", sum);
	printf("Æò±ÕÀº %d", average);
	printf("\n");
	printf("------------------------------------------");
	printf("\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

	return 0;
}
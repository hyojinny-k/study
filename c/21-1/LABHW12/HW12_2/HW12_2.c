#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));

	int num, numbers[100], total, average, i;
	total = 0;

	printf("Enter the number of random numbers(<= 100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		numbers[i] = rand() % 100;
		total += numbers[i];
	}

	average = total / num;

	printf("난수의 평균은 %d\n", average);
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++)
	{
		printf("%5d", numbers[i]);
		if ((i + 1) % 5 == 0 || i == num - 1)
			printf("\n");
	}

	return 0;
}
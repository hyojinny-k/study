#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[7];
	int income, bestIndex, bestIncome, i;
	double total, average;
	total = 0;
	bestIncome = 0;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d: ", i + 1);
		scanf("%d", &income);
		incomes[i] = income;
		total += income;
	}

	printf("------------------------------\n");

	for (i = 0; i < 7; i++)
	{
		if (incomes[i] > bestIncome)
		{
			bestIncome = incomes[i];
			bestIndex = i;
		}
	}

	printf("The best income: %d in day %d\n", bestIncome, bestIndex + 1);
	printf("------------------------------\n");

	average = total / 7;

	printf("The total is %.0f\n", total);
	printf("The average is %.1f\n", average);

	printf("The good days and their incomes are\n");
	for (i = 0; i < 7; i++)
	{
		if (incomes[i] > average)
			printf("day %d: %d\n", i + 1, incomes[i]);
	}

	return 0;
}
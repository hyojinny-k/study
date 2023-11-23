#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[7];
	int income, i, bestIncome;
	bestIncome = 0;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income: ");
		scanf("%d", &income);
		incomes[i] = income;
	}

	printf("------------------------------\n");

	for (i = 0; i < 7; i++)
		if (bestIncome < incomes[i])
			bestIncome = incomes[i];

	printf("The best income is %d\n", bestIncome);
	printf("Incomes are\n");

	for (i = 0; i < 7; i++)
		printf("%d ", incomes[i]);
	printf("\n");

	return 0;
}
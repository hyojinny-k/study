#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int income, i;
	int keyIndex = -1;

	printf("탐색할 수입은? ");
	scanf("%d", &income);

	for (i = 0; i < 11; i++)
		if (incomes[i] == income)
		{
			keyIndex = i;
			break;
		}

	if (keyIndex == -1)
		printf("수입 %d를 갖는 달은 없습니다\n", income);
	else
		printf("수입 %d를 갖는 첫번째 달은 %d월입니다\n", income, keyIndex + 1);
	}
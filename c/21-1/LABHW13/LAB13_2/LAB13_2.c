#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int income, i;
	int keyIndex = -1;

	printf("Ž���� ������? ");
	scanf("%d", &income);

	for (i = 0; i < 11; i++)
		if (incomes[i] == income)
		{
			keyIndex = i;
			break;
		}

	if (keyIndex == -1)
		printf("���� %d�� ���� ���� �����ϴ�\n", income);
	else
		printf("���� %d�� ���� ù��° ���� %d���Դϴ�\n", income, keyIndex + 1);
	}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2, count, i;
	count = 0;

	printf("�� ���� �����Ͻðڽ��ϱ�?: ");
	scanf("%d", &num1);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", num1, i);
		scanf("%d", &num2);
		if (num2 == num1 * i)
			count++;
	}

	printf("%d ���� �����ܿ��� %d ���� �¾ҽ��ϴ�\n", num1, count);

	return 0;
}
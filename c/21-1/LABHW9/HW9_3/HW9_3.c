#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, sum, i;
	sum = 0;

	i = 1;
	while (i <= 5)
	{
		printf("0���� ū ���� �Է�<%d��°>:", i);
		scanf("%d", &num);

		if (num <= 0)
		{
			while (num <= 0)
			{
				printf("�Է��� �߸��Ǿ����ϴ�. 0���� ū ���� �ٽ� �Է�<%d��°>:", i);
				scanf("%d", &num);
				if (num > 0)
				{
					sum += num;
					break;
				}
			}
		}
		else
			sum += num;

		i++;
	}

	printf("�Էµ� ���� �� ��: %d\n", sum);
}
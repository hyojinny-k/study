#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i;
	int count = 1;

	scanf("%d", &num);

	i = 0;
	while (i = num)
	{
		if (num / 10 >= 1)
		{
			count++;
			num = num / 10;
		}
		else
			break;
	}

	printf("%d\n", count);
}
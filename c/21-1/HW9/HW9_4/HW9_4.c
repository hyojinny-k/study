#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 1;
	int i, j;

	i = 2;
	while (i < 30)
	{
		j = 2;
		while (j < i)
		{
			if (i % j != 0)
				j++;
			else
				break;
		}
		if (j == i)
		{
			printf("%d번째 소수는 %d\n", n, i);
			n++;
		}
		i++;
	}
}
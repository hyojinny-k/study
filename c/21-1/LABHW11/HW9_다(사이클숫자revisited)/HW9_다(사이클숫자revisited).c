#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int num);
int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%d\n", get_cycle_number(n));
}

int get_cycle_number(int num)
{
	int count = 1;

	while (num > 1)
	{
		printf("%d ", num);

		if (num % 2 == 0)
			num /= 2;
		else
			num = num * 3 + 1;

		count++;
	}

	printf("1\n");

	return count;
}
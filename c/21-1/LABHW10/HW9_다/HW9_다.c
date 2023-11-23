#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void cycleNb(int num);
int main(void)
{
	int n;

	printf("Enter a number:");
	scanf("%d", &n);

	cycleNb(n);
}

void cycleNb(int num)
{
	int count = 1;

	while (num != 1)
	{
		printf("%d ", num);

		if (num % 2 == 0)
			num = num / 2;
		else
			num = num * 3 + 1;

		count++;
	}
	
	printf("1\n");
	printf("±æÀÌ´Â %d\n", count);

	return;
}
#include <stdio.h>

int max1(int list[], int low, int high)
{
	int i, max = -1;

	if (low <= high)
		for (i = low; i <= high; i++)
			if (list[i] > max)
				max = list[i];
	return max;
}

int main(void)
{
	int list[] = { 10, 20, 100, 4, 5, 45, 3, 99, 11, 22 };
	printf("가장 큰 수는 %d\n", max1(list, 0, 9)); // 100
	printf("가장 큰 수는 %d\n", max1(list, 5, 9)); // 99
	printf("가장 큰 수는 %d\n", max1(list, 3, 6)); // 45
}
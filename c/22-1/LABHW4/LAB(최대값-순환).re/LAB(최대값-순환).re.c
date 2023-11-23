#include <stdio.h>

int max2(int list[], int low, int high)
{
	int middle = (low + high) / 2; 
	int left, right;

	if (low == high)
		return list[low];

	left = max2(list, low, middle);
	right = max2(list, middle + 1, high);

	if (left <= right)
		return right;
	else
		return left;
}

int main(void)
{
	int list[] = { 10, 20, 100, 4, 5, 45, 3, 99, 11, 22 };
	printf("가장 큰 수는 %d\n", max2(list, 0, 9)); // 100
	printf("가장 큰 수는 %d\n", max2(list, 5, 9)); // 99
	printf("가장 큰 수는 %d\n", max2(list, 3, 6)); // 45 
}
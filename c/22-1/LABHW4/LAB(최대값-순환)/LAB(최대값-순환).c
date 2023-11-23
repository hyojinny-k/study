#include <stdio.h>

int max2(int list[], int low, int high)
{
	int middle, left, right;

	if (low <= high) {
		if (high - low <= 1)
			if (list[low] <= list[high])
				return list[high];
			else
				return list[low];

		middle = (low + high) / 2;
		left = max2(list, low, middle - 1);
		right = max2(list, middle + 1, high);
		if (left <= right)
			if (right <= list[middle])
				return list[middle];
			else
				return right;
		else
			if (left < list[middle])
				return list[middle];
			else
				return left;
	}
}

int main(void)
{
	int list[] = { 10, 20, 100, 4, 5, 45, 3, 99, 11, 22 };
	printf("가장 큰 수는 %d\n", max2(list, 0, 9)); // 100
	printf("가장 큰 수는 %d\n", max2(list, 5, 9)); // 99
	printf("가장 큰 수는 %d\n", max2(list, 3, 6)); // 45 
}
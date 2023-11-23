#include <stdio.h>

int right_max_sum(int A[], int left, int right)
{
	int i, max, result = 0;

	max = A[left];
	for (i = left; i <= right; i++) {
		result += A[i];
		if (result > max)
			max = result;
	}

	return max;
}

int main(void)
{
	int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	int max = right_max_sum(A, 3, 5); //A[3], A[3]+A[4], A[3]+A[4]+A[5] 중에서 최대값 즉, 5

	printf("max value = %d\n", max);
}
#include <stdio.h>

int left_max_sum(int A[], int left, int right)
{
	int i, max, result = 0;

	max = A[right];
	for (i = right; i >= left; i--) {
		result += A[i];
		if (result > max)
			max = result;
	}

	return max;
}

int main(void)
{
	int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	int max = left_max_sum(A, 4, 6); //A[6], A[5]+A[6], A[4]+A[5]+A[6] 중에서 최대값 즉, 3

	printf("max value = %d\n", max);
}
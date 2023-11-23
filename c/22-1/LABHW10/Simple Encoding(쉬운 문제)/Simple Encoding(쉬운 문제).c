#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N;
	int i, j;
	int* nums;
	int result = 1, max = 0;

	scanf("%d", &N);
	
	nums = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; i++)
		scanf("%d", &nums[i]);

	for (i = 0; i < N; i++) {
		nums[i]++;
		for (j = 0; j < N; j++) {
			result *= nums[j];
		}
		if (result > max) max = result;
		result = 1;
		nums[i]--;
	}

	printf("%d\n", max);

	free(nums);
}
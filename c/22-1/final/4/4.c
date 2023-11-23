#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//4¹ø
int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int target)
{
	int i, lastIndex, smallest;
	int sum = 0;
	int count = 0;

	lastIndex = bucketSize - k - 1;

	for (i = 0; i <= lastIndex; i++)
		sum += items[bucket[i]];

	if (sum == target)
		return 1;
	if (sum > target)
		return 0;
	if (k == 0)
		return 0;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = i;
		count += pick(items, itemSize, bucket, bucketSize, k - 1, target);
	}
	return count;
}

int main(void)
{
	int n;
	int items[] = { 3, 2, 1 };
	int* bucket;

	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);

	printf("%d\n", pick(items, 3, bucket, n, n, n));
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int pick(int* items, int itemSize, int* bucket, int bucketSize, int k)
{
	int i, lastIndex, smallest, item;
	int sum = 0;
	static int count = 0;

	lastIndex = bucketSize - k - 1;

	for (i = 0; i <= lastIndex; i++)
		sum += items[bucket[i]];

	if (sum > bucketSize)
		return count;
	else if (sum == bucketSize)
		return ++count;

	if (k == 0)
		return count;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, bucket, bucketSize, k - 1);
	}
	return count;
}

int main(void)
{
	int i;
	int n;
	int items[] = { 2, 1, 0 };
	int* bucket;

	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);

	printf("%d\n", pick(items, 3, bucket, n, n));
}
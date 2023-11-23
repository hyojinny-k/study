#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//5¹ø 17.5
int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int n)
{
	int i, lastIndex, smallest, item;
	int sum = 0;
	int count = 1;
	int min = 10000;

	lastIndex = bucketSize - k - 1;

	for (i = 0; i <= lastIndex; i++)
		sum += items[bucket[i]];

	if (sum == n)
		return lastIndex + 1;
	if (sum > n) {
		lastIndex = bucketSize;
		return 0;
	}
	if (k == 0)
		return 0;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		count = pick(items, itemSize, bucket, bucketSize, k - 1, n);
		if (count > 0 && count < min)
			min = count;
	}
	return min;
}

int main(void)
{
	int iS, i, j = 0, n;
	int* items;
	int* bucket;

	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		if (i * i > n)
			break;
	iS = i - 1;
	items = (int*)malloc(sizeof(int) * iS);

	for (i = iS; i > 0; i--)
		items[j++] = i * i;
	items[j] = '\0';

	printf("%d\n", pick(items, iS, bucket, n, n, n));
}
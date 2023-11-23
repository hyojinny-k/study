#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
//피구
int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int total)
{
	int i, lastIndex, smallest, item;
	int sum = 0;
	int diff, min = 10000;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			sum += items[bucket[i]];
		return (abs(total - 2 * sum)); // 절대값 반환
	}

	lastIndex = bucketSize - k - 1;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		diff = pick(items, itemSize, bucket, bucketSize, k - 1, total);
		if (min < diff)
			min = diff;
	}
	return min;
}

int main(void)
{
	int* items;
	int* bucket;
	int n, i;
	int total = 0;

	scanf("%d", &n);

	items = (int*)malloc(sizeof(int) * n);
	bucket = (int*)malloc(sizeof(int) * (n / 2));

	for (i = 0; i < n; i++) {
		scanf("%d", &items[i]);
		total += items[i];
	}

	printf("%d\n", pick(items, n, bucket, 3, 3, total));
}
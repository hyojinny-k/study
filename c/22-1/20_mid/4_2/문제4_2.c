#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int cutline)
{
	int i, lastIndex, smallest, item;
	int sum = 0;
	int count = 0;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			sum += items[bucket[i]];
		if (sum >= cutline)
			count++;
		return count;
	}

	lastIndex = bucketSize - k - 1;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		count += pick(items, itemSize, bucket, bucketSize, k - 1, cutline);
	}

	return count;
}

int main(void)
{
	int i;
	int n, m, cutline;
	int* items;
	int* bucket;

	scanf("%d", &n);
	if (n <= 0) return 0;
	items = (int*)malloc(sizeof(int) * n);

	if (!items) {
		printf("메모리를 할당할 수 없습니다.");
		return 0;
	}

	for (i = 0; i < n; i++)
		scanf("%d", &items[i]);

	scanf("%d", &m);
	if (n <= 0) return 0;
	bucket = (int*)malloc(sizeof(int) * m);

	if (!bucket) {
		printf("메모리를 할당할 수 없습니다.");
		return 0;
	}

	scanf("%d", &cutline);

	printf("%d\n", pick(items, n, bucket, m, m, cutline));
}
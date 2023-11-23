#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int * x)
{
	int i, xIndex, lastIndex, smallest, item;
	int count = 0;
	
	if (k == 0) {
		for (xIndex = 0; xIndex < bucketSize; xIndex++)
			if (x[xIndex] != items[bucket[xIndex]]) {
				for (i = 0; i < bucketSize; i++) {
					x[i] = items[bucket[i]];
					printf("%d ", items[bucket[i]]);
				}
				printf("\n");
				count++;
				break;
			}
		return count;
	}

	lastIndex = bucketSize - k - 1;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		count += pick(items, itemSize, bucket, bucketSize, k - 1, x);
	}
	return count;
}

int main(void)
{
	int n, itemSize;
	int* bucket;
	int* items;
	int* x;

	scanf("%d%d", &itemSize, &n);
	bucket = (int*)malloc(sizeof(int) * n);
	items = (int*)malloc(sizeof(int) * itemSize);
	x = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < itemSize; i++)
		scanf("%d", &items[i]);

	printf("%d\n", pick(items, itemSize, bucket, n, n, x));
}
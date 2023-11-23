#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int pick(int* items, int itemsize, int* bucket, int bucketSize, int k, int cutline)
{
	int i, lastIndex, smallest;
	int sum = 0;
	int count = 0;

	lastIndex = bucketSize - k - 1; // ���� �ֱٿ� ���� ���� ����� ��ġ index 
	
	for (i = 0; i <= lastIndex; i++) {
		printf("%d ", bucket[i]);
		sum += items[bucket[i]];
	}
	printf("\n");

	if (sum >= cutline)
		count++;

	if (k == 0)
		return count;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1; // ������ ���� ��

	for (i = smallest; i < itemsize; i++) {
		bucket[lastIndex + 1] = i;
		count += pick(items, itemsize, bucket, bucketSize, k - 1, cutline);
	}

	return count;
}
int main(void)
{
	int* items;
	int* bucket;
	int cutline, n;
	int i;

	scanf("%d", &n);
	items = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &items[i]);

	bucket = (int*)malloc(sizeof(int) * n);

	scanf("%d", &cutline);

	printf("%d\n", pick(items, n, bucket, n, n, cutline));
}
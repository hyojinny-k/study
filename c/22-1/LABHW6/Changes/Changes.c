#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//0 ¾øÀÌ
int pick(int* bucket, int bucketSize, int k, int money)
{
	int items[] = { 10, 50, 100, 500 };
	int itemsize = 4;
	int i, lastIndex, smallest;
	int sum = 0;
	int count = 0;

	for (i = 0; i < bucketSize - k; i++) {
		sum += items[bucket[i]];
		if (sum > money) {
			break;
		}
	}
	
	if (sum == money)
		return ++count;

	if (k == 0)
		return count;

	lastIndex = bucketSize - k - 1;

	if (k == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < itemsize; i++) {
		bucket[lastIndex + 1] = i;
		count += pick(bucket, bucketSize, k - 1, money);
	}

	return count;
}

int main(void)
{
	int* bucket;
	int money, n;

	scanf("%d", &money);
	n = money / 10;
	bucket = (int*)malloc(sizeof(int) * n);

	printf("%d\n", pick(bucket, n, n, money));
}
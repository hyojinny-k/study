#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//а╤гу
void pick(int n, char* bucket, int bucketSize, int k)
{
	int i, lastIndex, smallest, item;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%c ", bucket[i] + 65);
		printf("\n");
		return;
	}

	lastIndex = bucketSize - k - 1;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < n; item++) {
		bucket[lastIndex + 1] = item;
		pick(n, bucket, bucketSize, k - 1);
	}
}

int main(void)
{
	int n = 7;
	char bucket[3];

	pick(n, bucket, 3, 3);
}
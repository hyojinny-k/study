#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�ߺ�����
void pick(int n, int* bucket, int bucketSize, int k)
{
	int i, lastIndex, smallest, item;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%d", bucket[i]);
		printf("\n");
		return;
	}

	lastIndex = bucketSize - k - 1;
	
	smallest = 0;

	for (item = smallest; item < n; item++) {
		bucket[lastIndex + 1] = item;
		pick(n, bucket, bucketSize, k - 1);
	}
}

int main(void)
{
	int n;
	int* bucket;

	printf("�Է� : ");
	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);

	pick(4, bucket, n, n);
}
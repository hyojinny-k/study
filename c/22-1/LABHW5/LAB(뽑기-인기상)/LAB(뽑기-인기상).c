#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//����
void pick(char* list[5], int* bucket, int bucketSize, int k)
{
	int i, lastIndex, smallest, item;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%10s ", list[bucket[i]]);
		printf("\n");
		return;
	}

	lastIndex = bucketSize - k - 1;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < 5; item++) {
		bucket[lastIndex + 1] = item;
		pick(list, bucket, bucketSize, k - 1);
	}
}

int main(void)
{
	int n;
	char* list[5] = {"����", "�����", "���߱�", "����", "����"};
	int *bucket;

	printf("�α�� ���? ");
	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);
	pick(list, bucket, n, n);
}
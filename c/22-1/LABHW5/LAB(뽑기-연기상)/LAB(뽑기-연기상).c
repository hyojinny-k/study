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
	smallest = 0;

	for (item = smallest; item < 5; item++) {
		for (i = 0; i <= lastIndex; i++)
			if (bucket[i] == item)
				break;
		if (i == lastIndex + 1) {
			bucket[lastIndex + 1] = item;
			pick(list, bucket, bucketSize, k - 1);
		}
	}
}

int main(void)
{
	int n, i;
	char* list[5] = { "����", "�����", "���߱�", "����", "����" };
	int* bucket;

	printf("���� ������? ");
	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);

	for (i = 1; i <= n; i++)
		printf("       ��%d", i);
	printf("\n");
	pick(list, bucket, n, n);
}
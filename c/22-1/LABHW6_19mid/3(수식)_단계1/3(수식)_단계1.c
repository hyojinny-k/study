#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 

int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int N)
{
    int i, lastIndex, smallest;
    int total = 0;
    int result = 0;

    if (k == 0) {
        for (i = 0; i < bucketSize; i++)
            total += bucket[i] * (i + 1);
        if (total == N)
            result = 1;
        return result;
    }

    lastIndex = bucketSize - k - 1;

    smallest = 0;

    for (i = smallest; i < itemSize; i++) {
        bucket[lastIndex + 1] = items[i];
        result = result || pick(items, itemSize, bucket, bucketSize, k - 1, N);
    }

    return result;
}

int main(void)
{
    int items[] = { 1, -1 };
    int itemSize = 2;
    int* bucket;
    int n, N;

    scanf("%d%d", &n, &N);
    bucket = (int*)malloc(sizeof(int) * n);

    printf("%d\n", pick(items, itemSize, bucket, n, n, N));
}
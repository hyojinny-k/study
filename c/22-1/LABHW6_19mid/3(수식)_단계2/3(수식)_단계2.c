#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 

int pick(int* items, int itemSize, int* bucket, int bucketSize, int k)
{
    int i, lastIndex, smallest;
    int total = 0;
    int result = 0;

    lastIndex = bucketSize - k - 1;

    for (i = 0; i <= lastIndex; i++) 
        total += bucket[i] * (i + 1);

    if (total == bucketSize)
        result++;

    if (k == 0)
        return result;

    smallest = 0;

    for (i = smallest; i < itemSize; i++) {
        bucket[lastIndex + 1] = items[i];
        result += pick(items, itemSize, bucket, bucketSize, k - 1);
    }
    return result;
}

int main(void)
{
    int items[] = { 1, -1 };
    int* bucket;
    int n;

    scanf("%d", &n);
    bucket = (int*)malloc(sizeof(int) * n);

    printf("%d\n", pick(items, 2, bucket, n, n));
}
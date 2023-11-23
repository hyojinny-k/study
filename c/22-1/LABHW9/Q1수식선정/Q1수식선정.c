#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 

void pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int n)
{
    int i, lastIndex, smallest;
    int total = 0;
    static int count = 0;

    if (k == 0) {
        for (i = 0; i < bucketSize; i++)
            total += bucket[i] * (i + 1);

        if (total == n) {
            for (i = 0; i < bucketSize; i++) {
                if (bucket[i] == 1)
                    printf("%+d", i + 1);
                else
                    printf("%d", -(i + 1));
            }
            printf(" = %d\n", total);
            count = 1;
        }
        return;
    }
   
    lastIndex = bucketSize - k - 1;

    smallest = 0;

    if (count != 1)
        for (i = smallest; i < itemSize; i++) {
            bucket[lastIndex + 1] = items[i];
            pick(items, itemSize, bucket, bucketSize, k - 1, n);
        }
}

int size(int* items, int itemSize, int* bucket, int bucketSize, int k, int n)
{
    int i, lastIndex, smallest;
    int total = 0;
    static int count = 0;

    lastIndex = bucketSize - k - 1;

    for (i = 0; i <= lastIndex; i++)
        total += bucket[i] * (i + 1);
       
    if (total == n) {
        count = lastIndex;
        return count;
    }
  
    if (k == 0)
        return count;

    smallest = 0;

    for (i = smallest; i < itemSize; i++) {
        bucket[lastIndex + 1] = items[i];
        size(items, itemSize, bucket, bucketSize, k - 1, n);
    }
    return count;
}
 
int main(void)
{
    int items[] = { 1, -1 };
    int* bucket;
    int n, i, x = 0;
    int min = 100;

    scanf("%d", &n);
    bucket = (int*)malloc(sizeof(int) * n);

    for (i = 1; i <= n; i++) {
        x = size(items, 2, bucket, i, n, n);
        if (min > x && x > 0)
            min = x + 1;
    }

    pick(items, 2, bucket, min, min, n);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 

void pick(int i, int n, int* bucket, int bucketSize)
{
    int sum = 0;

    if (n < i) {
        for (i = 0; i < bucketSize; i++) {
            printf("%+d", bucket[i]);
            sum += bucket[i];
        }
        printf(" = %d\n", sum);
        return;
    }

    bucket[bucketSize] = +i;
    pick(i + 1, n, bucket, bucketSize + 1);
    bucket[bucketSize] = -i;
    pick(i + 1, n, bucket, bucketSize + 1);
}

int main(void)
{
    int* bucket;
    int n;

    scanf("%d", &n);
    bucket = (int*)malloc(sizeof(int) * n);

    pick(1, n, bucket, 0);
}
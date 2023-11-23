#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    long long int N;
    int* M;

    scanf("%lld", &N);

    M = (int*)malloc(sizeof(long long int) * N);
    for (int i = 0; i < N; i++)
        M[i] = 0;

    for (int i = 2; i <= N; i++) {
        M[i] = M[i - 1] + 1;

        if (i % 2 == 0)
            M[i] = (M[i] < M[i / 2] + 1 ? M[i] : M[i / 2] + 1);
        if (i % 3 == 0)
            M[i] = (M[i] < M[i / 3] + 1 ? M[i] : M[i / 3] + 1);
    }
    printf("%d\n", M[N]);

    free(M);
}
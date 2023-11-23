#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void solution(long long int N, long long int* M)
{
    M[0] = M[1] = 0;

    int temp;

    for (int i = 2; i <= N; i++) {
        M[i] = M[i - 1] + 1;
        if (i % 3 == 0) {
            temp = M[i / 3] + 1;
            M[i] = (M[i] < temp ? M[i] : temp);
        }
        if (i % 2 == 0) {
            temp = M[i / 2] + 1;
            M[i] = (M[i] < temp ? M[i] : temp);
        }
    }
    printf("%lld\n", M[N]);
}

int main() {
    long long int N;
    long long int* M;

    scanf("%lld", &N);

    M = (long long int*)malloc(sizeof(long long int) * N);

    solution(N, M);
}
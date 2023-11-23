#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    while (n != 0) {
        answer *= 10;
        answer += n % 10;
        n /= 10;
    }

    return answer;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", solution(n));
}
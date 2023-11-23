#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//3¹ø
int solution(int n) {
    int i = 0;
    while (n >= 1) {
        n /= 10;
        i++;
    }
    return i;
}

int main(void)
{
    int n, i = 1, j, r = 0;
    int temp = 0;
    char result[100000] = { NULL };

    scanf("%d", &n);

    while (r <= n) {
        temp = i;
        for (j = solution(i); j > 0; j--) {
            result[r + j] = temp % 10;
            temp /= 10;
        }
        r += solution(i);
        i++;
    }
    printf("%d\n", result[n]);
}
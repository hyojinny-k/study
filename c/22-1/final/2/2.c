#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//2¹ø
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
	int n, i, result = 0;

	scanf("%d", &n);

    for (i = 1; i <= n; i++)
        result += solution(i);

    printf("%d\n", result);
}
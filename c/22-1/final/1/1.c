#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//1¹ø
int solution(int n) {
    int i = 0;
    while (n >= 1) {
        n /= 10;
        i++;
    }
    return i;
}

int main() 
{
    int n;

    scanf("%d", &n);
    printf("%d\n", solution(n));
    return 0;
}
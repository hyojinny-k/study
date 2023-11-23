#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num, i;

    scanf("%d", &num);
    for (i = 1; i <= num; i++)
        if (num % i == 0)
            printf("%d ", i);

    return 0;
}
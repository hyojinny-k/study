#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calFruit(int n)
{
    int fruit = n;
    while (n >= 1) {
        fruit += n % 10;
        n /= 10;
    }
    return fruit;
}

int main(void) //�������� ����
{
    int n;

    scanf("%d", &n);
    printf("%d\n", calFruit(n));
}
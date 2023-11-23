#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calFruit(int n) // 필요하면 사용한다
{
    int fruit = n;
    while (n >= 1) {
        fruit += n % 10;
        n /= 10;
    }
    return fruit;
}

int is_Fruit(int n)
{
    int i;
    for (i = 1; i < n; i++)
        if (calFruit(i) == n)
            return 1;
    return 0;
}
int main(void) //변경하지 말라
{
    int i;
    int a, b;

    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
        if (!is_Fruit(i))
            printf("%d ", i);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

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
    int i = 0;

    scanf("%d", &n);

    while (1) {
        if (n == solution(n)) {
            printf("%d %d\n", i, n);
            break;
        }
        else if (n < 0) {
            printf("Overflow\n");
            break;
        }
        n += solution(n);
        i++;
    }
}
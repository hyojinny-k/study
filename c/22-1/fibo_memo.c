#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fib(int n, int* F) { // F[1]...F[n]���� ���
    if (n == 1 || n == 2) return 1;
    if (F[n - 1] == 0) // memo���� fn-1 Ȯ��
        F[n - 1] = fib(n - 1, F); //memo�� ������ ȣ��

    if (F[n - 2] == 0) // memo���� fn-2 Ȯ��
        F[n - 2] = fib(n - 2, F); //memo�� ������ ȣ��

    return F[n - 1] + F[n - 2];
}

int main(void)
{
    int n, i;
    int* F; //memo

    clock_t start, stop;
    double duration;
    start = clock();	// ���� ����
    //printf("�� ���� �Ǻ���ġ ����:");
    printf("�� ��°������ �Ǻ���ġ ����:");
    scanf("%d", &n); //fn

    //memo �ʱ�ȭ
    F = (int*)malloc(sizeof(int) * (n + 1));
    for (i = 1; i <= n; i++)
        F[i] = 0; // F[1]���� ���ǹ��� ���� ����
    for (i = 1; i <= n; i++)
        printf("%d ", fib(i, F)); //�޸�� �Բ� ����Լ� ȣ�� 

    //printf("%d\n", fib(n, F)); //�޸�� �Բ� ����Լ� ȣ�� 
    printf("\n");
    free(F);

    stop = clock();	// ���� ����
    duration = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("����ð��� %f���Դϴ�.\n", duration);
}

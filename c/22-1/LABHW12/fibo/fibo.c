#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �Ʒ��� fib�� memo�� F�� �ٷ� ���ֵ��� �ٲ۴�.
// �Ű������� int n, int *F
int fib(int n) {
	if (n == 1 || n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main(void)
{
	int n, i;
	//memo�� �� ������ ���� F�� ����

	clock_t start, stop;
	double duration;
	start = clock();	// ���� ����

	printf("�� ��°������ �Ǻ���ġ ����:");
	scanf("%d", &n); //fn

	// memo�� F�� n+1�� �迭�� �������� �Ҵ�)

	// memo�� F�� 0���� �ʱ�ȭ

	// fibȣ��� memo�� F�� �Բ� ȣ��
	for (i = 1; i <= n; i++)
		printf("%d ", fib(i));
	printf("\n");

	stop = clock();	// ���� ����
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f���Դϴ�.\n", duration);
}

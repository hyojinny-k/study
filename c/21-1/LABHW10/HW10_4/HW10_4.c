#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSumMToN(int n1, int n2);
int main()
{
	int m, n;

	printf("Enter two numbers: ");
	scanf("%d %d", &m, &n);

	printSumMToN(m, n);
}

void printSumMToN(int n1, int n2)
{
	int i;
	int sum = 0;

	for (i = n1; i <= n2; i++)
		sum += i;

	printf("%d~ %d�� ��: %d\n", n1, n2, sum);

	return;
}
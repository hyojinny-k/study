#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int H(int n)
{
	int i;
	int result = 0;

	if (n == 0 || n == 1)
		return 1;
	for (i = 0; i < n; i++)
		result += H(n - 1 - i) * H(i);
	return result;
}

int main(void)
{
	int n;
	
	printf("0���� ū ����:");
	scanf("%d", &n);
	printf("����� %d\n", H(n));
}
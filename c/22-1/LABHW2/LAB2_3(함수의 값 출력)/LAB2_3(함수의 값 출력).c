#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int h(int n)
{
	int i, result = 0;

	if (n == 0 || n == 1)
		return 1;
	else
		for (i = 1; i <= n; i++)
			result += h(i - 1) * h(n - i);

	return result;
}

int main(void) // 그대로 두고
{
	int n;

	scanf("%d", &n); //0, 1, 2 test
	printf("%d\n", h(n));
}
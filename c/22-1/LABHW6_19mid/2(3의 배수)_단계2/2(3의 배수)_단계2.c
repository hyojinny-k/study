#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h>

int calTenMultiple(int n)
{
	int i;

	for (i = 0; n >= 1; i++)
		n /= 10;
	return i;
}

int main(void)
{
	int n, i, j, x = 1;
	int count = 0;
	int* p;

	scanf("%d", &n);
	if (n <= 0) return 0;
	p = (int*)malloc(sizeof(int) * n);

	if (!p) {
		printf("메모리를 할당할 수 없습니다.");
		return 0;
	}

	for (i = 0; count < n; i++) {
		x = 3 * (i + 1);
		for (j = calTenMultiple(x); j >= 1; j--) {
			p[count + j - 1] = x % 10;
			x /= 10;
		}
		count += calTenMultiple(3 * (i + 1));
	}

	printf("%d\n", p[n - 1]);
}
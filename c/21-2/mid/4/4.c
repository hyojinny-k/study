#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int aboveAverageTotal(int* p, int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++) {
		if (*p >= 50) {
			printf("%d ", *p);
			total += *p;
		}
		*p++;
	}
	return total;
}

int main(void) // 변경하지 마라
{
	int i;
	int n;
	int data[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &data[i]);
	printf("\n%d\n", aboveAverageTotal(data, n));
}
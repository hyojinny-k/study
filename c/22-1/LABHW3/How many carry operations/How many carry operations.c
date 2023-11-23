#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int carry(int n1, int n2)
{
	int count = 0;

	while (n1 >= 1 && n2 >= 1) {
		if (n1 % 10 + n2 % 10 >= 10)
			count++;
		n1 /= 10; n2 /= 10;
	}
	return count;
}

int main(void)
{
	int n1, n2;

	scanf("%d%d", &n1, &n2);

	printf("%d\n", carry(n1, n2));
}
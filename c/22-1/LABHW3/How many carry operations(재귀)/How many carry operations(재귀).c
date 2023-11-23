#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//√÷¡æ
int get_carry(int n1, int n2, int carry)
{
	if (n1 < 1 && n2 < 1)
		return 0;
	else if (n1 % 10 + n2 % 10 + carry >= 10)
		return 1 + get_carry(n1 / 10, n2 / 10, 1);
	else
		return get_carry(n1 / 10, n2 / 10, 0);
}

int main(void)
{
	int n1, n2;

	scanf("%d%d", &n1, &n2);

	printf("%d\n", get_carry(n1, n2, 0));
}
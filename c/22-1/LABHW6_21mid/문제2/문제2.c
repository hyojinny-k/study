#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(int src_s[], int s[], int length)
{
	int i;

	for (i = 0; i < length; i++)
		s[i] = src_s[length - i - 1];
}

int main(void)
{
	int n, i, length = 0;
	int result[16] = { 0 };
	int result_re[16] = { 0 };

	scanf("%d", &n);

	n *= 9;

	for (i = 0; n >= 1; i++) {
		result[i] = n % 10;
		n /= 10;
		length++;
	}

	reverse(result, result_re, length);

	for (i = 0; i < length; i++)
		printf("%d ", result_re[i]);
	printf("\n");
}
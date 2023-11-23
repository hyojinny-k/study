#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int binary[8];
	int num, size, i;
	size = 0;

	printf("Enter ¾ç¼ö(<256):");
	scanf("%d", &num);

	for (i = 0; i < 8; i++)
	{
		binary[i] = num % 2;
		num /= 2;
		size++;
		if (num < 1)
			break;
	}

	for (i = 0; i < size; i++)
		printf("%d", binary[size - 1 - i]);
	printf("\n");

	return 0;
}
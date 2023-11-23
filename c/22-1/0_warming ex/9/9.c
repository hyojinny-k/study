#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isSameArray(int a[], int b[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}

int main(void)
{
	int a[5], b[5];
	int i;

	printf("Enter 첫번째 배열: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	printf("Enter 두번째 배열: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &b[i]);

	if (isSameArray(a, b, 5) == 1)
		printf("두 개의 배열은 같다\n");
	else
		printf("두 개의 배열은 다르다\n");
}
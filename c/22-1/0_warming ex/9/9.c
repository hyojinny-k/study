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

	printf("Enter ù��° �迭: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	printf("Enter �ι�° �迭: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &b[i]);

	if (isSameArray(a, b, 5) == 1)
		printf("�� ���� �迭�� ����\n");
	else
		printf("�� ���� �迭�� �ٸ���\n");
}
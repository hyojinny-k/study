#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int searchKey(int a[], int size, int key)
{
	int i;

	for (i = 0; i < size; i++)
		if (a[i] == key)
			return i + 1;
	return -1;
}

int main(void)
{
	int key, i, keyIndex;
	int a[5];

	printf("Enter 5���� ����: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	printf("Enter a key: ");
	scanf("%d", &key);

	if ((keyIndex = searchKey(a, 5, key)) == -1)
		printf("����\n");
	else
		printf("%d��°�� �ִ�\n", keyIndex);
}
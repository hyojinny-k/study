#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void echo(int arr[], int size)
{
	int i;

	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
}

void reverse(int arr[], int size)
{
	int i;

	for (i = size - 1; i >= 0; i--)
		printf("%d ", arr[i]);
}

int main(void)
{
	int arr[5];
	
	printf("�迭 5���� �Է��ϼ��� : ");
	echo(arr, 5);
	printf("*** �迭�� �Ųٷ� ����մϴ� ***\n");
	reverse(arr, 5);
	printf("\n");
}
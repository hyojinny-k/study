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
	
	printf("배열 5개를 입력하세요 : ");
	echo(arr, 5);
	printf("*** 배열을 거꾸로 출력합니다 ***\n");
	reverse(arr, 5);
	printf("\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solution(int n) // �ڵ� �ۼ�
{
	int length = 0;;

	while (n >= 1) {
		length++;
		n /= 10;
	}

	return length;
}

int main(void) // �������� ����
{
	int n;
	int jarisu;

	scanf("%d", &n);

	jarisu = solution(n);
	printf("%d\n", jarisu);
}
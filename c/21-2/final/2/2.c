#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(char* s, int n) // 코드 작성
{
	long int sum = 0;
	int i;
	long int temp = atol(s);
	long int x = atol(s);
	int length = 0;
	int square = 1;
	while (*s != '\0') {
		length++;
		s++;
	}

	while (length > n) {
		for (i = 0; i < length - n; i++) {
			x /= 10;
			square *= 10;
		}

		temp %= square;
		length -= n;
		sum += x;
		x = temp;
		square = 1;
	}
	return (int)(sum + x);
}

int main(void) // 변경하지 말라
{
	char s[50];
	int num;

	scanf("%s", s);
	scanf("%d", &num);
	printf("%d\n", solution(s, num));

	return 0;
}
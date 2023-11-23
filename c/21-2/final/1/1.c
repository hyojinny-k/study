#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution1(char* s) // 코드 작성
{
	int sum = 0;
	int i;
	long int x = atol(s);
	int length = 0;

	while (*s != '\0') {
		length++;
		s++;
	}
	for (i = 0; i < length - 4; i++)
		x /= 10;

	x = (int)(x / 100 + x % 100);
	return x;
}

int main(void) // 변경하지 말라
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", solution1(s));

	return 0;
}
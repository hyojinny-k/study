#include <stdio.h>
int stringLength(char* s)
{
	int length = 0;
	while (*s) {
		length++;
		s++;
	}
	return length;
}

void stringCopy(char* s1, const char* s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

int main(void)
{
	char copied[500];
	char data1[] = "abcde";
	char data2[] = "ABCDEFGH";

	stringCopy(copied, data1);
	printf("첫번째 복사를 시행한후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
	stringCopy(copied, data2);
	printf("두번째 복사를 시행한후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
}
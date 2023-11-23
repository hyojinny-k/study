#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int isHalfSame(char* p1, char* p2) // 코드 작성
{
	int x = 0;
	int i;
	int l = strlen(p1);

	for (i = 0; i < l; i++) {
		if (strcmp(p1, p2) == 0)
			x++;
		p1++; p2++;
	}

	if (x < l / 2)
		return 0;
	return 1;
}
int main(void) // 변경하지 말라
{
	char str1[20], str2[20];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%s", str1);
		scanf("%s", str2);
		printf("%d\n", isHalfSame(str1, str2));
	}
}
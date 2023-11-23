#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calculatePoint(char str[]);
int main(void)
{
	char str[20];

	printf("단어를 입력하세요(빈칸없이):");
	scanf("%s", str);
	printf("점수는 %d\n", calculatePoint(str));
}

int calculatePoint(char str[])
{
	int i, point = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 90)
			point += str[i] - 64;
		else
			point += str[i] - 96;
	}
	
	return point;
}
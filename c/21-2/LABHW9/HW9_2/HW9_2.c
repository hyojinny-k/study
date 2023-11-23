#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char id[15];
	char birth[5] = {'1', '9'};

	printf("주민등록번호 입력('-'포함):");
	fgets(id, sizeof(id), stdin);

	strncat(birth, id, 2);
	printf("당신은 %s년도 생이군요.\n", birth);

	int atoi(birth);

	if (id[7] == '1') {
		printf("남자분이시군요.\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다.\n", atoi(birth) + 77);
	} 
	else if (id[7] == '2') {
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.\n", atoi(birth) + 84);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s1, const char* s2) {
	int answer = 1;
	int i;
	for (i = 0; *s1 != '\0' || *s2 != '\0'; i++)
		if (*s1++ != *s2++)
			answer = 0;
	return answer;
}

int main(void)
{
	char word1[81];
	char word2[81];

	//printf("Enter the first word: ");
	scanf("%s", word1);
	//printf("Enter the second word: ");
	scanf("%s", word2);

	printf("%d\n", solution(word1, word2));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//7¹ø
int solution(char* s) 
{
	int i, j, index = 0;
	long long int max = 1, num = 1;
	int len, shortest = 1001;
	char temp[1001] = { NULL };
	char str1[1001];
	char str2[1001];

	if (strlen(s) == 1)
		shortest = 1;

	for (i = 1; i <= (signed)strlen(s) / 2; i++) {
		len = 0;
		index = 0;

		while (index < (signed)strlen(s)) {
			for (j = 0; j < i; j++) {
				str1[j] = s[index + j];
				str2[j] = s[index + j + i];
			}
			str1[j] = '\0'; str2[j] = '\0';

			if (strcmp(str1, str2) == 0) {
				if (strcmp(str2, temp) != 0) {
					strcpy(temp, str1);
					len += i + 1;
					num = 2;
				}
				else {
					num++;
					if (num > 0 && num % 10 == 0)
						len++;
				}
			}
			else if (strcmp(temp, str1) != 0) {
				len += strlen(str1);
				num = 1;
			}
			else
				num = 1;

			index += i;

			if (max < num)
				max = num;
		}
	}
	return max;
}

int main(void)
{
	char s[1001];
	scanf("%s", s);
	printf("%d\n", solution(s));
}
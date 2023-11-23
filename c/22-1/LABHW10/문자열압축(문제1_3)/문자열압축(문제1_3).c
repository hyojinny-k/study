#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int solution(char* s) {
	int i, j, index = 0;
	int len, shortest = 1000;
	char temp[1000] = "";
	char num[4];
	char str1[1000];
	char str2[1000];

	for (i = 1; i <= strlen(s) / 2; i++) {
		strncpy(str1, s, i);
		str1[i] = '\0';
		len = 1;

		for (j = i; j < strlen(s); j += i) {
			index = 0;
			while (index < i)
				str2[index++] = s[j + index];
			str2[index] = '\0';
			if (strcmp(str1, str2) == 0)
				len++;
			else {
				if (len > 1) {
					sprintf(num, "%d", len);
					strcat(temp, num);
				}
				strcat(temp, str1);

				strcpy(str1, str2);
				len = 1;
			}
		}

		if (len > 1) {
			sprintf(num, "%d", len);
			strcat(temp, num);
		}
		strcat(temp, str1);

		shortest = shortest <= strlen(temp) ? shortest : strlen(temp);
		temp[0] = '\0';
	}
	return shortest;
}

int main(void)
{
	char* str;
	int i;
	int count = 0, length = 0;
 
	str = (char*)malloc(sizeof(char) * 1000);

	scanf("%s", str);

	printf("%d\n", solution(str));

	free(str);
}
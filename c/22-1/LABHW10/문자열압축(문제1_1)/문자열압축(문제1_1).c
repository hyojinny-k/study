#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* str;
	int i;
	int count = 0;

	str = (char*)malloc(sizeof(char) * 1000);

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == str[i + 1])
			count++;
		else if (count == 0)
			printf("%c", str[i]);
		else if (count > 0) {
			printf("%d%c", ++count, str[i]);
			count = 0;
		}
		if (count == 9) {
			printf("%d%c", count, str[i]);
			count = 0;
		}
	}
}
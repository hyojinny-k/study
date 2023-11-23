#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* str;
	int i = 0;
	int count = 0, length = 0;

	str = (char*)malloc(sizeof(char) * 1000);

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == str[i + 2] && str[i + 1] == str[i + 3]) {
			if (count == 8) {
				printf("%d%c%c", 9, str[i], str[i + 1]);
				length += 3;
				count = 0;
			}
			else
				count++;
			i++;
		}
		else {
			if (str[i + 1] == '\0') {
				printf("%c", str[i]);
				length++;
			}
			else if (count == 0) {
				printf("%c%c", str[i], str[i + 1]);
				i++;
				length += 2;
			}
			else {
				printf("%d%c%c", ++count, str[i], str[i + 1]);
				i++;
				length += 3;
				count = 0;
			}
		}
	}

	printf("\n%d\n", length);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char searchKeyInArray(char a[], char key)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		if (a[i] == key)
			return i + 1;
	
	return -1;
}
int main(void)
{
	char s[20];
	char key;

	scanf("%s %c", s, &key);

	printf("%d\n", searchKeyInArray(s, key));
}
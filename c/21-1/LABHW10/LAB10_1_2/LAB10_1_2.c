#include <stdio.h>
void print5Chars(char ch);
int main(void)
{
	print5Chars('*');
	print5Chars('+');
	print5Chars('1');
	return 0;
}

void print5Chars(char ch)
{
	int i, num = 5;
	for (i = 0; i < num; i++)
		printf("%c", ch);
	printf("\n");

	return;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp;
	char ch;

	fp = fopen("hello.out", "wt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fprintf(fp, "Hello\n");
	fprintf(fp, "World\n");

	fclose(fp);

	fp = fopen("hello.out", "rt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	ch = getc(fp);
	while (!feof(fp))
	{
		putc(ch, stdout);
		ch = getc(fp);
	}

	fclose(fp);

	return 0;
}
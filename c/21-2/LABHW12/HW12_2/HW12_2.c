#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	FILE* fp1, * fp2;
	char ch;

	fp1 = fopen("input.txt", "rt");
	if (fp1 == NULL)
	{
		printf("파일 오픈 에러입니다!!!\n");
		return 1;
	}

	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	ch = getc(fp1);
	while (!feof(fp1))
	{
		if (islower(ch))
			ch = toupper(ch);
		putc(ch, fp2);
		ch = getc(fp1);
	}

	fprintf(fp2, "\n");
	fseek(fp1, 0, SEEK_SET);

	ch = getc(fp1);
	while (!feof(fp1))
	{
		if (isupper(ch))
			ch = tolower(ch);
		putc(ch, fp2);
		ch = getc(fp1);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
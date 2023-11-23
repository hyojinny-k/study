#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	FILE* fp1, * fp2;
	int i;
	int num, sum = 0;

	fp1 = fopen("random.txt", "wt");
	if (fp1 == NULL)
	{
		printf("파일 오픈 에러입니다!!!\n");
		return 1;
	}

	for (i = 0; i < 10; i++)
		fprintf(fp1, "%d\n", rand() % 99);

	fseek(fp1, 0, SEEK_SET);

	fp1 = fopen("random.txt", "rt");

	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fscanf(fp1, "%d\n", &num);
	while (!feof(fp1)) {
		sum += num;
		fprintf(fp2, "%d\n", num);
		fprintf(stdout, "   %d", num);
		fscanf(fp1, "%d", &num);
	}
	fprintf(stdout, "\n합은 %d\n", sum);
	fprintf(fp2, "합은 %d", sum);

	fclose(fp1);
	fclose(fp2);

	return 0;
}
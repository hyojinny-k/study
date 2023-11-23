#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, total = 0, max = -1;
	double average;

	printf("배열 test의 엘리먼트를 출력합니다.\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("\t%d", test[i][j]);
	}
	printf("\n");

	printf("\n다)\n");
	printf("배열 test의 엘리먼트를 출력합니다.\n");
	for (i = 0; i < 4; i++)
		test[i][2] = -1;
	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("\t%d", test[i][j]);
	}
	printf("\n");

	printf("\n라)\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			total += test[i][j];
	average =  (double)total / 12;
	printf("Total is %d\n", total);
	printf("Average is %.2f\n", average);
	
	printf("\n마)\n");
	total = 0;
	for (i = 0; i < 4; i++)
	{
		max = -1;
		for (j = 0; j < 3; j++)
			if (test[i][j] > max)
				max = test[i][j];
		printf("%d번째 row에서의 최대값: %d\n", i + 1, max);
		total += max;
	}
	printf("최대값의 합: %d\n", total);
}
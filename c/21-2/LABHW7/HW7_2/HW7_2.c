#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
static int data[3][10];

void main()
{
	srand(200);

	generateData();
	printData();
	printf("전체의 합은: %d\n", totalData());
}

void generateData()
{
	int* p = &data[0][0];
	int i;

	for (i = 0; i < 30; i++)
		p[i] = rand() % 100;
}

void printData()
{
	int i, j;
	int* p = &data[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
			printf("%3d  ", *p++);
		printf("\n");
	}
	printf("\n");
}

int totalData()
{
	int* p = &data[0][0];
	int i, total = 0;
	for (i = 0; i < 30; i++)
		total += *p++;
	return total;
}
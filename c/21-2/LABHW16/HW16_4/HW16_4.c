#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initTable(int table[][5], int size);
int totalTable(int table[][5], int size);
void printTable(int table[][5], int size);
void printTotal(int table[][5], int size);

int main(void)
{
	int table[3][5];

	srand(time(NULL));

	initTable(table, 3);
	printf("발생된 난수의 평균은 %d입니다\n", totalTable(table, 3) / 15);

	printTable(table, 3);
	printTotal(table, 3);

	return 0;
}
void initTable(int table[][5], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 5; j++)
			table[i][j] = rand() % 100;
}
int totalTable(int table[][5], int size)
{
	int i, j, total = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < 5; j++)
			total += table[i][j];
	return total;
}
void printTable(int table[][5], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5d", table[i][j]);
		printf("\n");
	}
}
void printTotal(int table[][5], int size)
{
	int i, j, total;
	printf("----각 열의 합----\n");
	for (j = 0; j < 5; j++)
	{
		total = 0;
		for (i = 0; i < size; i++)
			total += table[i][j];
		printf("%5d", total);
	}
	printf("\n");
}
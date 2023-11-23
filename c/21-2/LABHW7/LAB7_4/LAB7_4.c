#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int data[10];

int main(void)
{
	srand(200);
	generateData();

	printf("�߻��� 10���� ����:\n");
	printData();

	printf("10�� ������ �� = %d \n", totalData());
}

void generateData()
{
	int k;
	int* p;
	p = data;

	for (k = 0; k < 10; k++)
		p[k] = rand() % 100;
}

void printData()
{
	int* pi = data;
	int i;

	for (i = 0; i < 10; i++) 
		printf("%d ", *pi++);
	printf("\n");
}

int totalData()
{
	int* pi = data, sum = 0;
	int i;

	for (i = 0; i < 10; i++) 
		sum += *pi++;

	return sum;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int maxData();
int data[10];

int main(void)
{
	srand(200);
	generateData();
	printf("�߻��� 10���� ����:\n");
	printData();
	printf("10�� ������ �� = %d \n", totalData());
	printf("10�� ������ ���� ū �� = %d \n", maxData());
}

void generateData()
{
	int k;
	int* p = data;

	for (k = 0; k < sizeof(data) / sizeof(int); k++)
		*p++ = rand() % 100;
}

void printData()
{
	int* pi = data;
	int i;

	for (i = 0; i < sizeof(data) / sizeof(int); i++)
		printf("%d ", *pi++);
	printf("\n");
}

int totalData()
{
	int* pi = data, sum = 0;
	int i;

	for (i = 0; i < sizeof(data) / sizeof(int); i++)
		sum += *pi++;

	return sum;
}

int maxData()
{
	int* pi = data;
	int i, max = -1;

	for (i = 0; i < sizeof(data) / sizeof(int); i++) {
		if (max < *pi)
			max = *pi;
		pi++;
	}
	return max;
}
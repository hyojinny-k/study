#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumUpData(int*, int);
void printData(int*, int);
int maxData(int*, int);

void main()
{
	int k;
	int* p;
	int sum;

	int data[10];

	p = data;
	srand(time(NULL));

	for (k = 0; k < 10; k++)
		*p++ = rand() % 100;

	sum = sumUpData(data, 10);
	printf("������Ʈ�� ���� %d\n", sum);

	printf("������Ʈ���� ");
	printData(data, 10);

	printf("\n������Ʈ�� �� ���� ū���� %d\n", maxData(data, 10));
}

int sumUpData(int* p, int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
		sum += *p++;

	return sum;
}

void printData(int* p, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", *p++);
}

int maxData(int* p, int size)
{
	int i, max = *p;

	for (i = 0; i < size; i++) {
		if (*p > max)
			max = *p;
		p++;
	}

	return max;
}
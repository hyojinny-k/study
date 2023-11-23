#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{	
	srand(time(NULL));

	int data[10];
	int i, total;
	total = 0;

	for (i = 0; i < 10; i++)
	{
		data[i] = rand() % 100;
	}

	for (i = 0; i < 10; i++)
		total += data[i];

	printf("Æò±ÕÀº %d\n", total / 10);

	for (i = 0; i < 10; i++)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}
#define SIZE 5
#include <stdio.h>
int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;

	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[SIZE - 1 - i] = arrayA[i];
	}

	printf("ArrayA:");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayA[i]);
	printf("\n");

	printf("ArrayB:");
		for (i = 0; i < SIZE; i++)
			printf("%d ", arrayB[i]);
	printf("\n");

	printf("ArrayC:");
		for (i = 0; i < SIZE; i++)
			printf("%d ", arrayC[i]);
	printf("\n");

	same = 1;
	if (sizeof(arrayA) != sizeof(arrayB))
		same = 0;
	else
		for (i = 0; i < SIZE; i++)
			if (arrayA[i] != arrayB[i])
			{
				same = 0;
				break;
			}

	if (same == 1)
		printf("ArrayA�� arrayB�� ����\n");
	else
		printf("ArrayA�� arrayB�� �ٸ���\n");

	same = 1;
	if (sizeof(arrayA) != sizeof(arrayC))
		same = 0;
	else
		for (i = 0; i < SIZE; i++)
			if (arrayA[i] != arrayC[i])
			{
				same = 0;
				break;
			}

	if (same == 1)
		printf("ArrayA�� arrayC�� ����\n");
	else
		printf("ArrayA�� arrayC�� �ٸ���\n");
}
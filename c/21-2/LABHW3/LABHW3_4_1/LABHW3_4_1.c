#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSet(int s[], int size);

int main(void)
{
	int element, size = 0;
	int multiset[5] = {0};

	while (size < 5)
	{
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &element);
		multiset[size] = element;
		printSet(multiset, size);
		size++;
	}
}

void printSet(int s[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i <= size; i++)
		if (i == size)
			printf("%d", s[i]);
		else
			printf("%d, ", s[i]);
	printf(" }\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSet(int s[], int size);
int is_in(int s[], int size, int element);

int main(void)
{
	int element, i = 0;
	int set[5] = {0};

	while (i < 5)
	{
		printf("집합에 추가할 원소: ");
		scanf("%d", &element);
		
		if (is_in(set, i + 1, element) == 1)
			printf("%d는 이미 집합에 있음\n", element);
		else
		{
			set[i] = element;
			printSet(set, i);
			i++;
		}
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

int is_in(int s[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
		if (s[i] == element)
			return 1;
	return 0;
}
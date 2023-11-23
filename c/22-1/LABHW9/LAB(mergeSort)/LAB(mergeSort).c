#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int p, int q, int r)
{
	int i, j, t;
	int* temp;
	temp = (int*)malloc(sizeof(int) * (r - p));
	
	i = p;
	j = q + 1;

	for (t = p; t <= r; t++) {
		if (i <= q && j <= r) {
			if (A[i] < A[j])
				temp[t] = A[i++];
			else
				temp[t] = A[j++];
		}
		else
			break;
	}

	if (i <= q)
		while (t <= r) 
			temp[t++] = A[i++];

	if (j <= r)
		while (t <= r)
			temp[t++] = A[j++];
	
	for (t = p; t <= r; t++)
		A[t] = temp[t];
}

void printList(int A[], int s, int e)
{
	int i;

	for (i = s; i <= e; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main(void)
{
	int list1[] = { 10, 20, 30, 70, 80, 11, 33, 44, 55, 66 };
	int list2[] = { 10, 20, 30, 70, 80, 11, 33, 44, 55, 66 };

	//test #1
	printList(list1, 0, 9);
	merge(list1, 0, 4, 9);
	printList(list1, 0, 9);

	//test #2
	printList(list2, 2, 7);
	merge(list2, 2, 4, 7);
	printList(list2, 2, 7);
}
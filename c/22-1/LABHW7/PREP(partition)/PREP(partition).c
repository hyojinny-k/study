#include <stdio.h>

int partition(int A[], int p, int r)
{
	int i = p, j = p;
	int temp;

	while (p < r) {
		if (A[p] < A[r]) {
			temp = A[i];
			A[i] = A[p];
			A[p] = temp;
			i++;
		}
		else 
			j++;
		p++;
	}

	temp = A[r];
	A[r] = A[i];
	A[i] = temp;

	return i;
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
	int list[] = { 0, 20, 55, 66, 10, 40, 88, 77, 30, 49 };
	int list2[] = { 0, 20, 10, 40, 30, 49, 88, 77, 55, 66 };
	int loc;

	// test 1
	printList(list, 0, 9);
	loc = partition(list, 0, 9); // list
	printList(list, 0, 9); // ����� list2�� ���� ���� �ȴ�.
	printf("%d�� ��ġ�� %d\n", 49, loc); // 49�� ��ġ�� 5

	// test 2
	printList(list2, 6, 9); // 88, 77, 55, 66
	loc = partition(list2, 6, 9);
	printList(list2, 6, 9); // 55, 66, 88, 77
	printf("%d�� ��ġ�� %d\n", 66, loc); // 66�� ��ġ�� 7

	// test 3
	printList(list2, 0, 4); // 0, 20, 10, 40, 30
	loc = partition(list2, 0, 4);
	printList(list2, 0, 4); // 0, 20, 10, 30, 40
	printf("%d�� ��ġ�� %d\n", 30, loc); // 30�� ��ġ�� 3
}
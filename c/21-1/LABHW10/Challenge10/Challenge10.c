#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printFibo(int n);
int main(void)
{
	int num, i;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);

	printf("\n");
}

void printFibo(int n)
{	
	int j, f1, f2, f3;
	f1 = 1; 
	f2 = 1; 
	f3 = 0;

	for (j = 0; j < n; j++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}

	printf("%d ", f1);

	return;
}
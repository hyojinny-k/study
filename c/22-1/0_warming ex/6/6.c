#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void make_Lotto(int arr[], int n)
{
	int i;

	for (i = 0; i < n; i++) {
			arr[i] = rand() % 45 + 1;
			printf("%d ", arr[i]);
	}
}

int main(void)
{
	int num[6];
	char ch;

	srand(time(NULL));

	do {
		printf("*** 로또 번호 생성기 ***\n");
		printf("생성 번호: ");
		make_Lotto(num, 6);

		printf("\n다시 생성하겠습니까? (y/n):");
		scanf("%c", &ch);
		while (getchar() != '\n');
	} while (ch != 'n');
}
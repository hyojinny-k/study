#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));

	int n1, n2, answer, x;
	char op, q;
	
	do {	
		n1 = rand() % 100;
		n2 = rand() % 100;
		op = rand() % 4;

		switch (op)
		{
		case 0:
			op = '+';
			x = n1 + n2;
			break;
		case 1:
			op = '-';
			x = n1 - n2;
			break;
		case 2:
			op = '*';
			x = n1 * n2;
			break;
		case 3:
			op = '/';
			x = n1 / n2;
			break;
		}

		printf("%d %c %d = ", n1, op, n2);
		scanf("%d", &answer);

		if (answer == x)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", x);
		}

		while (getchar() != '\n');
		printf("Do you want to play again?<y/n>");
		scanf("%c", &q);
	} while (q == 'y');
}
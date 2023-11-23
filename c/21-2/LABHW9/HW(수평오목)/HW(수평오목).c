#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

void display(char b[][BOARD_SIZE])
{
	int i, j;

	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n     ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i = 1;
	int sum = 1;
	char player = b[r][c];

	for (i = 1; i < BOARD_SIZE; i++) {
		if (b[r][c - i] == player)
			sum++;
		else
			break;
	}

	for (i = 1; i < BOARD_SIZE; i++) {
		if (b[r][c + i] == player)
			sum++;
		else
			break;
	}

	if (sum == 5)
		return 1;
	else
		return 0;
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	int win = 1;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(За ї­):", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ')
			continue;

		board[r][c] = turn;
		display(board);

		if (winCheck(board, r, c) == win)
				printf("Player %c wins!\n", turn);

		turn = (turn == 'X' ? 'O' : 'X');
		count++;
	} while (winCheck(board, r, c) != win && count <= BOARD_SIZE * BOARD_SIZE);

	if (winCheck(board, r, c) != win && count == BOARD_SIZE * BOARD_SIZE)
		printf("Nobody wins!\n");
}
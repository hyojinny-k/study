#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 3

void display(char b[][BOARD_SIZE])
{
	int i, j;

	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n     ------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int rTemp, cTemp;
	int sum;
	char player = b[r][c];

	sum = 1;
	cTemp = c - 1;
	while (cTemp >= 0 && player == b[r][cTemp]) {
		sum++;
		cTemp--;
	}
	cTemp = c + 1;
	while (cTemp < BOARD_SIZE && player == b[r][cTemp]) {
		sum++;
		cTemp++;
	}
	if (sum == 3) return 1;

	sum = 1;
	rTemp = r - 1;
	while (rTemp >= 0 && player == b[rTemp][c]) {
		sum++;
		rTemp--;
	}
	rTemp = r + 1;
	while (rTemp < BOARD_SIZE && player == b[rTemp][c]) {
		sum++;
		rTemp++;
	}
	if (sum == 3) return 1;

	sum = 1;
	rTemp = r + 1;
	cTemp = c - 1;
	while (rTemp < BOARD_SIZE && cTemp >= 0 && player == b[rTemp][cTemp]) {
		sum++;
		rTemp++;
		cTemp--;
	}
	rTemp = r - 1;
	cTemp = c + 1;
	while (rTemp >= 0 && cTemp < BOARD_SIZE && player == b[rTemp][cTemp]) {
		sum++;
		rTemp--;
		cTemp++;
	}
	if (sum == 3) return 1;

	sum = 1;
	rTemp = r - 1;
	cTemp = c - 1;
	while (rTemp >= 0 && cTemp >= 0 && player == b[rTemp][cTemp]) {
		sum++;
		rTemp--;
		cTemp--;
	}
	rTemp = r + 1;
	cTemp = c + 1;
	while (rTemp < BOARD_SIZE && cTemp < BOARD_SIZE && player == b[rTemp][cTemp]) {
		sum++;
		rTemp++;
		cTemp++;
	}
	if (sum == 3) return 1;

	return 0;
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;

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

		if (winCheck(board, r, c) == 1)
			printf("Player %c wins!\n", turn);

		turn = (turn == 'X' ? 'O' : 'X');
		count++;
	} while (winCheck(board, r, c) != 1 && count <= BOARD_SIZE * BOARD_SIZE);

	if (winCheck(board, r, c) == 0 && count > BOARD_SIZE * BOARD_SIZE)
		printf("Nobody wins!\n");
}
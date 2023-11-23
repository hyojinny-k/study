#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int count);

int main(void)
{
	int seats[SIZE] = {0};
	int count = 0;

	printf("******좌석 예약 시스템******\n");
	printSeats(seats, SIZE);

	while (count < 10)
	{
		count += askReservation();
		processReservation(seats, count);
		printSeats(seats, SIZE);
	}
}

int askReservation()
{
	int num;
	printf("\n좌석을 예약하시겠습니까?(몇명) ");
	scanf("%d", &num);
	return num;
}

void processReservation(int s[], int count)
{
	int i;
	for (i = 0; i < count; i++)
		s[i] = 1;
	return;
}

void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
	return;
}
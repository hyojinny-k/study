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

	printf("******�¼� ���� �ý���******\n");
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
	printf("\n�¼��� �����Ͻðڽ��ϱ�?(���) ");
	scanf("%d", &num);
	return num;
}

void processReservation(int s[], int count)
{
	int i;
	if (count > 10)
	{
		printf(">>>%d���� ���� �ȵ�\n", count - 10);
		count = 10;
	}
	for (i = 0; i < count; i++)
		s[i] = 1;
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
}
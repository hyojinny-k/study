#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 3

typedef struct {
	char name[100];
} element;

typedef struct {
	element data[MAX_QUEUE_SIZE];
	int front, rear;
} QueueType;

//오류 함수
void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

int get_count(QueueType* q)
{
	return q->rear+1;
}

void init(QueueType* q)
{
	q->front = q->rear = -1;
}

void print_queue(QueueType* q)
{
	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
		if (i <= q->front || i > q->rear)
			printf(" | ");
		else
			printf("%s | ", q->data[i].name);
	}
	printf("\n");
}

int is_empty(QueueType* q)
{
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}

int is_full(QueueType* q)
{
	if (q->rear == MAX_QUEUE_SIZE - 1)
		return 1;
	else
		return 0;
}

void enqueue(QueueType* q, element item)
{
	if (is_full(q)) {
		error("대기자가 꽉찼으니 담기회를 이용");
		return;
	}
	q->data[++(q->rear)] = item;
}

element dequeue(QueueType* q)
{
	if (is_empty(q)) {
		error("큐가 공백상태입니다.");
		return;
	}
	return q->data[++(q->front)];
}

int main(void)
{
	QueueType manQ, womanQ;
	element newPerson;
	char select = NULL;
	char sex = NULL;

	init(&manQ); init(&womanQ);

	printf("미팅 주선 프로그램입니다.\n");
	
	scanf("%s", newPerson.name);
	enqueue(&manQ, newPerson);
	printf("%d명: ", get_count(&manQ));
	print_queue(&manQ);

	scanf("%s", newPerson.name);
	enqueue(&manQ, newPerson);
	printf("%d명: ", get_count(&manQ));
	print_queue(&manQ);

}
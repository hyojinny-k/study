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
	return (q->rear - q->front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
} 

void init(QueueType* q)
{
	q->front = q->rear = 0;
}

void print_queue(QueueType* q)
{
	if (!is_empty(q)) {
		int i = q->front;
		do {
			i = (i + 1) % (MAX_QUEUE_SIZE);
			printf("%s ", q->data[i].name);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}

int is_empty(QueueType* q)
{
	return (q->front == q->rear);
}

int is_full(QueueType* q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void enqueue(QueueType* q, element item)
{
	if (is_full(q)) {
		printf(" 대기자가 꽉찼으니 담기회를 이용\n");
		return;
	}
	printf(" 기다려주십시오.\n");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

element dequeue(QueueType* q)
{
	if (is_empty(q)) {
		error("큐가 공백상태입니다.");
		return;
	}
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

void meeting(QueueType* q1, QueueType* q2, element item)
{
	if (is_empty(q2)) {
		printf("아직 대상자가 없습니다.");
		enqueue(q1, item);
		return;
	}
	else {
		printf("커플이 탄생했습니다! %s과 %s\n", item.name, q2->data[q2->front + 1].name);
		dequeue(q2);
	}
}

int main(void)
{
	QueueType manQ, womanQ;
	element newPerson;
	char select = NULL;
	char gender = NULL;

	init(&manQ); init(&womanQ);

	printf("미팅 주선 프로그램입니다.\n");
	printf("i(nsert, 고객입력), c(heck, 대기자 체크), q(uit):");
	scanf("%c", &select);
	do {
		if (select == 'i') {
			printf("이름을 입력:");
			scanf("%s", newPerson.name);


			printf("성별을 입력(m or f):");
			while (getchar() != '\n');
			scanf("%c", &gender);

			if (gender == 'm')
				meeting(&manQ, &womanQ, newPerson);
			else if (gender == 'f')
				meeting(&womanQ, &manQ, newPerson);
		}
		else if (select == 'c') {
			printf("남성 대기자 %d명: ", get_count(&manQ));
			print_queue(&manQ);
			printf("여성 대기자 %d명: ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		else if (select == 'q')
			break;
		while (getchar() != '\n');

		printf("i(nsert, 고객입력), c(heck, 대기자 체크), q(uit):");
		scanf("%c", &select);
	} while (select != 'q');
}
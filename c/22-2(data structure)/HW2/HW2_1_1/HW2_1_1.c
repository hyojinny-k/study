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

//���� �Լ�
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
		printf(" ����ڰ� ��á���� ���ȸ�� �̿�\n");
		return;
	}
	printf(" ��ٷ��ֽʽÿ�.\n");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

element dequeue(QueueType* q)
{
	if (is_empty(q)) {
		error("ť�� ��������Դϴ�.");
		return;
	}
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

void meeting(QueueType* q1, QueueType* q2, element item)
{
	if (is_empty(q2)) {
		printf("���� ����ڰ� �����ϴ�.");
		enqueue(q1, item);
		return;
	}
	else {
		printf("Ŀ���� ź���߽��ϴ�! %s�� %s\n", item.name, q2->data[q2->front + 1].name);
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

	printf("���� �ּ� ���α׷��Դϴ�.\n");
	printf("i(nsert, ���Է�), c(heck, ����� üũ), q(uit):");
	scanf("%c", &select);
	do {
		if (select == 'i') {
			printf("�̸��� �Է�:");
			scanf("%s", newPerson.name);


			printf("������ �Է�(m or f):");
			while (getchar() != '\n');
			scanf("%c", &gender);

			if (gender == 'm')
				meeting(&manQ, &womanQ, newPerson);
			else if (gender == 'f')
				meeting(&womanQ, &manQ, newPerson);
		}
		else if (select == 'c') {
			printf("���� ����� %d��: ", get_count(&manQ));
			print_queue(&manQ);
			printf("���� ����� %d��: ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		else if (select == 'q')
			break;
		while (getchar() != '\n');

		printf("i(nsert, ���Է�), c(heck, ����� üũ), q(uit):");
		scanf("%c", &select);
	} while (select != 'q');
}
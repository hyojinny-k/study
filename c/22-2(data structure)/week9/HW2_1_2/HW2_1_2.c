#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[100];
} element;

typedef struct QueueNode {
	element data;
	struct QueueNode* link;
} QueueNode;

typedef struct {
	QueueNode* front, * rear;
} LinkedQueueType;

//���� �Լ�
void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

int get_count(LinkedQueueType* q)
{
	QueueNode* p;
	int count = 0;
	for (p = q->front; p != NULL; p = p->link)
		count++;;
	return count;
}

void init(LinkedQueueType* q)
{
	q->front = q->rear = NULL;
}

void print_queue(LinkedQueueType* q)
{
	QueueNode* p;
	for (p = q->front; p != NULL; p = p->link)
		printf("%s ", p->data.name);
	printf("\n");
}

int is_empty(LinkedQueueType* q)
{
	return (q->front == NULL);
}

int is_full(LinkedQueueType* q) // �׻� ����, ��ȭ�����϶��� ����. ���Ḯ��Ʈ�� �����Ͽ����Ƿ�
{
	return 0;
}

void enqueue(LinkedQueueType* q, element item)
{
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
	if (temp == NULL)
		printf("�޸𸮸� �Ҵ��� �� �����ϴ�");
	else {
		temp->data = item; // ������ ����
		temp->link = NULL; // ��ũ �ʵ带 NULL
		if (is_empty(q)) { // ť�� �����̸�
			q->front = temp;
			q->rear = temp;
		}
		else { // ť�� ������ �ƴϸ�
			q->rear->link = temp; // ������ �߿�
			q->rear = temp;
		}
	}
}

element dequeue(LinkedQueueType* q)
{
	QueueNode* temp = q->front;
	element item;

	item = temp->data; // �����͸� ������.
	q->front = q->front->link; // front �� ������带 ����Ű���� �Ѵ�.
	if (q->front == NULL) // ���� ����
		q->rear = NULL;
	free(temp); // �����޸� ����
	return item; // ������ ��ȯ
}

void meeting(LinkedQueueType* q1, LinkedQueueType* q2, element item)
{
	if (is_empty(q2)) {
		printf("���� ����ڰ� �����ϴ�. ��ٷ��ֽʽÿ�.\n");
		enqueue(q1, item);
		return;
	}
	else {
		printf("Ŀ���� ź���߽��ϴ�! %s�� %s\n", item.name, q2->front->data.name);
		dequeue(q2);
	}
}

int main(void)
{
	LinkedQueueType manQ, womanQ;
	element newPerson;
	char select = NULL;
	char gender = NULL;

	init(&manQ); init(&womanQ);

	printf("���� �ּ� ���α׷��Դϴ�.\n");
	printf("i(nsert, ���Է�), c(heck, ����� üũ), q(uit):");
	scanf("%c", &select);
	while (select != 'q') {
		if (select == 'i') {
			printf("�̸��� �Է�:");
			scanf("%s", &newPerson.name);

			printf("������ �Է�(m or f):");
			while (getchar() != '\n');
			scanf("%c", &gender);

			if (gender == 'm')
				meeting(&manQ, &womanQ, newPerson);
			else if (gender == 'f')
				meeting(&womanQ, &manQ, newPerson);
		}
		else if (select == 'c') {
			printf("���� ����� %d�� ", get_count(&manQ));
			print_queue(&manQ);
			printf("���� ����� %d�� ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		else if (select == 'q')
			break;
		while (getchar() != '\n');

		printf("i(nsert, ���Է�), c(heck, ����� üũ), q(uit):");
		scanf("%c", &select);
	}
}
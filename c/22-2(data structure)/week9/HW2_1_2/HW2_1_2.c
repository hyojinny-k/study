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

//오류 함수
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

int is_full(LinkedQueueType* q) // 항상 거짓, 포화상태일때가 없다. 연결리스트로 구현하였으므로
{
	return 0;
}

void enqueue(LinkedQueueType* q, element item)
{
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
	if (temp == NULL)
		printf("메모리를 할당할 수 없습니다");
	else {
		temp->data = item; // 데이터 저장
		temp->link = NULL; // 링크 필드를 NULL
		if (is_empty(q)) { // 큐가 공백이면
			q->front = temp;
			q->rear = temp;
		}
		else { // 큐가 공백이 아니면
			q->rear->link = temp; // 순서가 중요
			q->rear = temp;
		}
	}
}

element dequeue(LinkedQueueType* q)
{
	QueueNode* temp = q->front;
	element item;

	item = temp->data; // 데이터를 꺼낸다.
	q->front = q->front->link; // front 를 다음노드를 가리키도록 한다.
	if (q->front == NULL) // 공백 상태
		q->rear = NULL;
	free(temp); // 동적메모리 해제
	return item; // 데이터 반환
}

void meeting(LinkedQueueType* q1, LinkedQueueType* q2, element item)
{
	if (is_empty(q2)) {
		printf("아직 대상자가 없습니다. 기다려주십시요.\n");
		enqueue(q1, item);
		return;
	}
	else {
		printf("커플이 탄생했습니다! %s과 %s\n", item.name, q2->front->data.name);
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

	printf("미팅 주선 프로그램입니다.\n");
	printf("i(nsert, 고객입력), c(heck, 대기자 체크), q(uit):");
	scanf("%c", &select);
	while (select != 'q') {
		if (select == 'i') {
			printf("이름을 입력:");
			scanf("%s", &newPerson.name);

			printf("성별을 입력(m or f):");
			while (getchar() != '\n');
			scanf("%c", &gender);

			if (gender == 'm')
				meeting(&manQ, &womanQ, newPerson);
			else if (gender == 'f')
				meeting(&womanQ, &manQ, newPerson);
		}
		else if (select == 'c') {
			printf("남성 대기자 %d명 ", get_count(&manQ));
			print_queue(&manQ);
			printf("여성 대기자 %d명 ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		else if (select == 'q')
			break;
		while (getchar() != '\n');

		printf("i(nsert, 고객입력), c(heck, 대기자 체크), q(uit):");
		scanf("%c", &select);
	}
}
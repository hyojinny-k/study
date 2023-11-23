#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode { // 노드타입
	element data;
	struct ListNode* link;
} ListNode;

void print_list(ListNode* head) // 수정해야
{
	ListNode* p;

	if (head == NULL) return;
	else if (head == head->link) {
		printf("%d->\n", head->data);
		return;
	}
	p = head->link;
	do {
		printf("%d->", p->data);
		p = p->link;
	} while (p != head);

	printf("%d->", p->data); // 마지막 노드 출력
	printf("\n");
}

ListNode* insert_first(ListNode* head, element data)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;
		head->link = node;
	}
	return head; // 변경된 헤드 포인터를 반환
}

ListNode* insert_last(ListNode* head, element data)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;
		head->link = node;
		head = node;
	}
	return head; // 변경된 헤드 포인터를 반환
}

ListNode* delete_first(ListNode* head)
{
	ListNode* temp;

	if (head == NULL) {
		printf("리스트가 비어 삭제를 못함\n");
		return NULL;
	}
	else if (head == head->link) { // 하나의 노드가 남았을 때
		temp = head;
		head = NULL;
		free(temp);
	}
	else {
		temp = head->link;
		head->link = temp->link;
		free(temp);
	}
	return head;
}

ListNode* delete_last(ListNode* head)
{
	ListNode* p;

	if (head == NULL) {
		printf("리스트가 비어 삭제를 못함\n");
		return NULL;
	}

	p = head;
	while (p->link != head) {
		p = p->link;
		p->link = head->link;
		head = p;
	}
	free(p);
}

ListNode* search(ListNode* head, element data)
{
	ListNode* seek = head->link;
	while (seek != head->link) {
		if (seek->data == data)
			return seek;
		seek = seek->link;
	}
	return NULL;
}

ListNode* get_size(ListNode* head)
{
	ListNode* p = head;
	int length = 0;

	do {
		p = p->link;
		length++;
	} while (p != head->link);
	return length;
}

int main(void)
{
	ListNode* head = NULL;

	// list = 10->20->30->40
	head = insert_last(head, 20);
	print_list(head);

	head = insert_last(head, 30);
	print_list(head);
	head = insert_last(head, 40);
	print_list(head);
	head = insert_first(head, 10);
	print_list(head);

	head = delete_first(head);
	print_list(head);

	/**/
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode { // ��� Ÿ��
	element data;
	struct ListNode* link;
} ListNode;

// ����ó���Լ�
void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

ListNode* insert_first(ListNode* head, int value)
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head;
	head = p;
	return head;
}

ListNode* insert(ListNode* head, ListNode *pre, element value)
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = pre->link;
	pre->link = p;
	return head;
}

ListNode* delete_first(ListNode* head)
{
	ListNode* removed;
	if (head == NULL) return NULL;
	removed = head;
	head = removed->link;
	free(removed);
	return head;
}

ListNode* delete(ListNode* head, ListNode* pre)
{
	ListNode* removed;
	removed = pre->link;
	pre->link = removed->link;
	free(removed);
	return head;
}

void print_list(ListNode* head)
{
	for (ListNode* p = head; p != NULL; p = p->link)
		printf("%d->", p->data);
	printf("NULL\n");
}

int is_in_list(ListNode* head, element item) // item �� ����Ʈ�� ������ 1 �� �ƴϸ� 0 �� ��ȯ
{
	for (ListNode* p = head; p != NULL; p = p->link)
		if (p->data == item)
			return 1;
	return 0;
}

int get_length(ListNode* head) // �ܼ� ���� ����Ʈ�� �����ϴ� ����� ���� ��ȯ
{
	int length = 0;
	for (ListNode* p = head; p != NULL; p = p->link)
		length++;
	return length;
}

int get_total(ListNode* head) // �ܼ����Ḯ��Ʈ�� ��� ������ ���� ���� ���� ��ȯ
{
	int total = 0;
	for (ListNode* p = head; p != NULL; p = p->link)
		total += p->data;
	return total;
}

element get_entry(ListNode* head, int pos) // pos ��ġ(0 �� ù ��° ���)�� �ִ� ����� data �� ��ȯ
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p = head;
	for (int i = 0; i < pos; i++)
		p = p->link;
	return p->data;
}

ListNode* delete_by_key(ListNode* head, int key)
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	ListNode* removed;
	if (!is_in_list)
		return;
	if (head->data == key) {
		delete_first(head);
		return head;
	}
	for (ListNode* p = head; p != NULL; p = p->link) {
		if (p->link->data == key) {
			delete(head, p);
			return head;
		}
	}
}

ListNode* insert_pos(ListNode* head, int pos, element value) // pos ��ġ�� value �� ���� ��带 �߰�
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	if (head == NULL || pos == 0)
		insert_first(head, value);
	else if (pos == 1)
		insert(head, head, value);
	else {
		p = head->link;
		for (int i = 0; i < pos - 2; i++)
			p = p->link;
		insert(head, p, value);
	}
	return head;
}

ListNode* delete_pos(ListNode* head, int pos) // pos ��ġ�� ��带 ����
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	if (pos == 0)
		delete_first(head);
	else {
		p = head;
		for (int i = 0; i < pos - 1; i++)
			p = p->link;
		delete(head, p);
	}
	return head;
}	

int main(void)
{
	ListNode* list1 = NULL, * list2 = NULL, * list3 = NULL;

	//list1 = 30->20->10->�� �����. �̶� 10, 20, 30�� ������ ��带 �����Ѵ�. 
	list1 = insert_first(list1, 10);
	list1 = insert_first(list1, 20);
	list1 = insert_first(list1, 30);
	// list1�� ���
	printf("list1 = ");
	print_list(list1);

	// list1�� �� �� ��带 �����Ѵ� ��, list1 = 20->30->
	list1 = delete_first(list1);
	// list1�� ���
	printf("list1 = "); print_list(list1);

	// list2 = 11->22->33->44->�� �����. �̶� 11, 22, 33, 44�� ������ ��带 �����Ѵ�.
	list2 = insert_first(list2, 11);
	list2 = insert(list2, list2, 22);
	list2 = insert(list2, list2->link, 33);
	list2 = insert(list2, list2->link->link, 44);
	// list2�� ���
	printf("list2 = "); print_list(list2);

	// list2�� �� �� ��带 �����Ѵ�. ��, list2 = 11->22->33->
	list2 = delete(list2, list2->link->link);
	// list2�� ���
	printf("list2 = "); print_list(list2);

	//(A) ����: ���⼭���ʹ� list1�� ����Ͽ� �Լ����� �׽�Ʈ����
	printf("\n");
	printf("%d\n", is_in_list(list1, 10)); // �����Ƿ� 1 ���
	printf("%d\n", is_in_list(list1, 100)); // �����Ƿ� 0 ���

	printf("%d\n", get_length(list1)); // ������ 2 ���

	printf("%d\n", get_total(list1)); // ���� 30 ���

	printf("%d\n", get_entry(list1, 0)); // 20 ���
	printf("%d\n", get_entry(list1, 1)); // 10 ���

	list1 = insert_pos(list1, 2, 100);
	print_list(list1); // 20->10->100->NULL ���

	list1 = delete_pos(list1, 2);
	print_list(list1); // 20->10->NULL ���

	list1 = insert_pos(list1, 2, 100);
	print_list(list1); // 20->10->100->NULL ���

	list1 = delete_by_key(list1, 100);
	print_list(list1); // 20->10->NULL ���
}
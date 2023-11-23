#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STACK_SIZE 3 // �迭�� �̿��� ������ �������� ������ �ִ�
#define MAX_STRING 100

// ���ÿ� ����Ǵ� �����͸� ����ü�� ����
typedef struct {
	int num;
	char name[MAX_STRING];
} element;

element stack[MAX_STACK_SIZE];
int top = -1;

// ���� ���� ���� �Լ�
int is_empty()
{
	return (top == -1);
}

// ��ȭ ���� ���� �Լ�
int is_full()
{
	return (top == (MAX_STACK_SIZE - 1));
}

// �����Լ�
void push(element item)
{
	if (is_full()) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else stack[++top] = item;
}

// �����Լ�
element pop()
{
	if (is_empty()) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return stack[top--];
}

// ��ũ�Լ�
element peek()
{
	if (is_empty()) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return stack[top];
}

void stack_print() {
	int i;
	if (is_empty())
		printf("<empty>\n");
	else {
		printf("[%d, %s] <- top\n", stack[top].num, stack[top].name);
		for (i = top - 1; i >= 0; i--)
			printf("[%d, %s]\n", stack[i].num, stack[i].name);
	}
	printf("--\n");
}

// ���Լ�
void main()
{
	element e1 = { 10, "ten" };
	element e2 = { 20, "twenty" };
	element e3 = { 30, "thirty" };
	element e4 = { 40, "forty" };
	element e5 = { 50, "fifty" };
	
	stack_print(e1);

	push(e1); stack_print();
	push(e2); stack_print();
	push(e3); stack_print();
	push(e4); stack_print();
	pop(stack); stack_print();
	push(e5); stack_print();
	pop(stack); stack_print();
	pop(stack); stack_print();
	pop(stack); stack_print();
}
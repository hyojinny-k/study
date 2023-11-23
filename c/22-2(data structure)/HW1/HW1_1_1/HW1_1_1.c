#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STACK_SIZE 3 // �迭�� �̿��� ������ �������� ������ �ִ�

// ������ ���� Ÿ�� ����
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

// ���� �ʱ�ȭ �Լ�
void init(StackType* s)
{
	s->top = -1;
}

// ���� ���� ���� �Լ�
int is_empty(StackType* s)
{
	return (s->top == -1);
}

// ��ȭ ���� ���� �Լ�
int is_full(StackType* s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}

// �����Լ�
void push(StackType* s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}

// �����Լ�
element pop(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}

// ��ũ�Լ�
element peek(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else
		return s->data[s->top];
}

void stack_print(StackType* s) {
	int i;
	if (is_empty(s))
		printf("<empty>\n");
	else {
		printf("%d <- top\n", peek(s));
		for (i = s->top - 1; i >= 0; i--)
			printf("%d\n", s->data[i]);
	}
	printf("--\n");
}

// ���Լ�
void main()
{
	StackType s;

	init(&s);
	stack_print(&s);

	push(&s, 10); stack_print(&s);
	push(&s, 20); stack_print(&s);
	push(&s, 30); stack_print(&s);
	push(&s, 40); stack_print(&s);
	pop(&s); stack_print(&s);
	push(&s, 50); stack_print(&s);
	pop(&s); stack_print(&s);
	pop(&s); stack_print(&s);
	pop(&s); stack_print(&s);
}
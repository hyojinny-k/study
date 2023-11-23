#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int element;
typedef struct StackNode {
	element data;
	struct StackNode *link;
} StackNode;

typedef struct {
	StackNode* top;
} LinkdedStackType;

void init(LinkdedStackType* s)
{
	s->top = NULL;
}

int is_empty(LinkdedStackType* s)
{
	return (s->top == NULL);
}

int is_full(LinkdedStackType* s)
{
	return 0;
}

void push(LinkdedStackType* s, element item)
{
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
	temp->data = item;
	temp->link = s->top;
	s->top = temp;
}

void stack_print(LinkdedStackType* s)
{
	if (is_empty(s))
		fprintf(stderr, "(empty)\n");
	else {
		StackNode* p = s->top;
		printf("%d <-top\n", p->data);
		for (p = p->link; p != NULL; p = p->link)
			printf("%d\n", p->data);
	}
	printf("--\n");
}

element pop(LinkdedStackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	else {
		StackNode* temp = s->top;
		int data = temp->data;
		s->top = s->top->link;
		free(temp);
		return data;
	}
}

element peek(LinkdedStackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	else
		return s->top->data;
}

int main(void)
{
	LinkdedStackType s;
	init(&s); stack_print(&s);
	push(&s, 10); stack_print(&s);
	push(&s, 20); stack_print(&s);
	push(&s, 30); stack_print(&s);
	push(&s, 40); stack_print(&s);
	pop(&s); stack_print(&s);
	push(&s, 50); stack_print(&s);
	pop(&s); stack_print(&s);
	pop(&s); stack_print(&s);
	pop(&s); stack_print(&s);
	pop(&s); stack_print(&s);
	return 0;
}
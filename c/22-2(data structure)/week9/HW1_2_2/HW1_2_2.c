#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define MAX_STRING 100

typedef struct {
	int num;
	char name[MAX_STRING];
} element;

typedef struct StackNode {
	element data;
	struct StackNode* link;
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
		printf("[%d, %s] <-top\n", p->data.num, p->data.name);
		for (p = p->link; p != NULL; p = p->link)
			printf("[%d, %s]\n", p->data.num, p->data.name);
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
		element data = temp->data;
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

	element e1 = { 10, "ten" };
	element e2 = { 20, "twenty" };
	element e3 = { 30, "thirty" };
	element e4 = { 40, "forty" };
	element e5 = { 50, "fifty" };

	init(&s); stack_print(&s);

	push(&s, e1); stack_print(&s);
	push(&s, e2); stack_print(&s);
	push(&s, e3); stack_print(&s);
	push(&s, e4); stack_print(&s);
	pop(&s); stack_print(&s);
	push(&s, e5); stack_print(&s);
	pop(&s); stack_print(&s);
	pop(&s); stack_print(&s);
	pop(&s); stack_print(&s);
	pop(&s); stack_print(&s);
	return 0;
}
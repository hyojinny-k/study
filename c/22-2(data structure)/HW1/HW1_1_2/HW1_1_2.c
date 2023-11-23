#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STACK_SIZE 3 // 배열을 이용한 스택은 사이즈의 제한이 있다
#define MAX_STRING 100

// 스택에 저장되는 데이터를 구조체로 정의
typedef struct {
	int num;
	char name[MAX_STRING];
} element;

element stack[MAX_STACK_SIZE];
int top = -1;

// 공백 상태 검출 함수
int is_empty()
{
	return (top == -1);
}

// 포화 상태 검출 함수
int is_full()
{
	return (top == (MAX_STACK_SIZE - 1));
}

// 삽입함수
void push(element item)
{
	if (is_full()) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else stack[++top] = item;
}

// 삭제함수
element pop()
{
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return stack[top--];
}

// 피크함수
element peek()
{
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");
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

// 주함수
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
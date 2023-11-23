#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100 // 배열을 이용한 스택은 사이즈의 제한이 있다
#define MAX_STRING 100

// 스택을 위한 타입 정의
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

// 스택 초기화 함수
void init(StackType* s)
{
	s->top = -1;
}

// 공백 상태 검출 함수
int is_empty(StackType* s)
{
	return (s->top == -1);
}

// 포화 상태 검출 함수
int is_full(StackType* s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}

// 삽입함수
void push(StackType* s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}

// 삭제함수
element pop(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}

// 피크함수
element peek(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[s->top];
}

int palindrome(char str[])
{ 
	StackType s; 

	int i;

	init(&s);
	for (i = 0; i < strlen(str); i++)
		push(&s, str[i]);

	for (i = s.top; i >= 0; i--)
		if (s.data[i] != str[strlen(str) - i - 1])
			return 0;
	return 1;
}

int main(void) 
{ 
	char word[MAX_STRING]; 

	printf("Enter a word to check palindrome: "); 
	scanf("%s", word); 

	if (palindrome(word)) 
		printf("palindrome 입니다.\n"); 
	else 
		printf("palindrome 이 아닙니다.\n"); 
}
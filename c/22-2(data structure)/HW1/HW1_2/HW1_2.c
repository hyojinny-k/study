#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100 // �迭�� �̿��� ������ �������� ������ �ִ�
#define MAX_STRING 100

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
		printf("palindrome �Դϴ�.\n"); 
	else 
		printf("palindrome �� �ƴմϴ�.\n"); 
}
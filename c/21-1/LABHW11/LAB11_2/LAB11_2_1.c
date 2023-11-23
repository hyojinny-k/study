#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};

typedef struct {
	char name[20];
	int midterm;
	int final;
	int average;
} Student;

void readStudentScore(Student* p)
{
	printf("Enter student name: ");
	scanf("%s", p->name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &p->midterm, &p->final);
}

void printStudent(Student* p)
{
	printf("%s\t", p->name);
	printf("%d\t%d\t%d\n", p->midterm, p->final, p->average);
}

void calculateStudentAverage(Student* p)
{
	p->average = (p->midterm + p->final) / 2;
}

int main(void)
{
	Student s[40];
	Student* sp = s;
	int num, i;

	printf("Enter a number of student:");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		readStudentScore(sp++);
	sp = s;
	for (i = 0; i < num; i++)
		calculateStudentAverage(sp++);

	sp = s;
	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < num; i++)
		printStudent(sp++);
}
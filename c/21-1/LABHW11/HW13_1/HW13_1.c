#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};

typedef struct student Student;

struct cClass {
	int num;
	Student s[40];
};

typedef struct cClass CClass;

void printStudent(Student* sp)
{
	printf("%s\t", sp->name);
	printf("%d\t%d\t%d\n", sp->midterm, sp->final, sp->average);
}

void readStudentScore(Student* sp)
{
	printf("Enter student name: ");
	scanf("%s", sp->name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &sp->midterm, &sp->final);
	sp++;
}

void calculateStudentAverage(Student* sp)
{
	sp->average = (sp->midterm + sp->final) / 2;
	sp++;
}

int main(void)
{
	CClass cp;
	int i;
	Student all = {"Total", 0, 0, 0};

	printf("Enter a number of student:");
	scanf("%d", &cp.num);

	for (i = 0; i < cp.num; i++)
		readStudentScore(&cp.s[i]);

	for (i = 0; i < cp.num; i++)
		calculateStudentAverage(&cp.s[i]);

	printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < cp.num; i++)
		printStudent(&cp.s[i]);
}
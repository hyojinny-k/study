struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	struct student s[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d%d", &s[i].midterm, &s[i].final);
		s[i].average = (s[i].midterm + s[i].final) / 2;
	}

	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < 3; i++)
		printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);

	for (i = 0; i < 3; i++) {
		if (s[i].average >= 80)
			s[i].grade = 'A';
		else if (s[i].average >= 50)
			s[i].grade = 'B';
		else
			s[i].grade = 'F';
	}

	printf("\n�̸�\t����\n");
	for (i = 0; i < 3; i++)
		printf("%s\t%c\n", s[i].name, s[i].grade);

	printf("\n�߰������ ��� = %d\n", (s[0].midterm + s[1].midterm + s[2].midterm) / 3);
	printf("�б⸻����� ��� = %d\n", (s[0].final + s[1].final + s[2].final) / 3);
}
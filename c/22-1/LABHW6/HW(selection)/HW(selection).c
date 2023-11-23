#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Student {
	int id;
	int English;
	int math;
	int Korean;
};

void selection_sort(struct Student* s, int n)
{
	int i, j, min, min_idx, temp;

	for (i = 0; i < n - 1; i++) {
		min = s[0].Korean, min_idx = 0;
		for (j = 1; j < n - i; j++) {
			if (s[j].Korean < min) {
				min = s[j].Korean;
				min_idx = j;
			}
		}
		temp = min;
		s[min_idx].Korean = s[n - 1 - i].Korean;
		s[n - 1 - i].Korean = temp;
		temp = s[min_idx].id;
		s[min_idx].id = s[n - 1 - i].id;
		s[n - 1 - i].id = temp;
		temp = s[min_idx].English;
		s[min_idx].English = s[n - 1 - i].English;
		s[n - 1 - i].English = temp;
		temp = s[min_idx].math;
		s[min_idx].math = s[n - 1 - i].math;
		s[n - 1 - i].math = temp;
	}
}

void print(struct Student* s, int n)
{
	printf(" �й�  ����  ����  ����\n");
	for (int i = 0; i < n; i++)
		printf("%5d %5d %5d %5d\n", s[i].id, s[i].Korean, s[i].English, s[i].math);
}

int main(void)
{
	struct Student *p;
	int i, n = 0;

	printf("�л��� �� �Է� : ");
	scanf("%d", &n);
	(int*)p = (int*)malloc(sizeof(int) * n);

	if (!p) {
		printf("�޸𸮸� �Ҵ��� �� �����ϴ�.");
		return 0;
	}
	
	//srand(time(NULL));

	for (i = 0; i < n; i++) {
		p[i].id = i + 1;
		p[i].English = rand() % 101;
		p[i].math = rand() % 101;
		p[i].Korean = rand() % 101;
	}

	print(p, n);
	selection_sort(p, n);

	printf("���ĵ� ��:\n");
	print(p, n); 

	free(p);
}
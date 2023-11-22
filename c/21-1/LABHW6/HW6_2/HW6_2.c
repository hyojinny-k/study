#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade == 'A')
		printf("Congratulation\n");
	else if (grade == 'B')
		printf("Okay, try harder\n");
	else if (grade == 'C')
	{
		printf("enter your score: ");
		scanf("%d", &score);
		printf("Try harder, your need to get %d next time\n", score + 10);
	}
	else if (grade == 'D' || grade == 'F')
		printf("Sorry, you should take this course again\n");
	else
		printf("Wrong grade\n");
}





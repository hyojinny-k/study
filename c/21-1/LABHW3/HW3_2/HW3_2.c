#include <stdio.h>
int main(void)
{
	int ����, ��, ��, ��;

	printf("Enter the total seconds: ");
	scanf_s("%d", &����);
	
	�� = ���� / 3600;
	�� = ���� % 3600 / 60;
	�� = ���� % 3600 % 60;

	printf("---Calculation Result---\n");
	printf("%d seconds\n", ����);
	printf("%dh %dm %ds\n", ��, ��, ��);
}
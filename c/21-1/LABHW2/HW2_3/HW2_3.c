#include <stdio.h>
int main(void)
{
	int ����;
	int ��, ��, ��;

	���� = 14000;
	�� = ���� / 3600;
	�� = ���� % 3600 / 60;
	�� = ���� % 3600 % 60;

	printf("%d seconds:\n", ����);
	printf("%dh %dm %ds\n", ��, ��, ��);
}

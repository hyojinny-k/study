#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char id[15];
	char birth[5] = {'1', '9'};

	printf("�ֹε�Ϲ�ȣ �Է�('-'����):");
	fgets(id, sizeof(id), stdin);

	strncat(birth, id, 2);
	printf("����� %s�⵵ ���̱���.\n", birth);

	int atoi(birth);

	if (id[7] == '1') {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(birth) + 77);
	} 
	else if (id[7] == '2') {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(birth) + 84);
	}
}
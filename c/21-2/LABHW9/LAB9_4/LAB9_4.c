#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char fullName[50];
	char lastName[50] = "Pak";
	char firstName[50] = "Suehee";

	char id[15] = "630826-2020222";
	char idFront[7];

	strcpy(fullName, lastName);
	strcat(fullName, ", ");
	strcat(fullName, firstName);

	printf("����� fullname�� %s\n", fullName);

	strncpy(idFront, id, 6);
	idFront[6] = '\0';

	printf("�ֹε�Ϲ�ȣ ���ڸ��� %s\n", idFront);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(char n[], char n_re[])
{
	for (int i = 0; i < (int)strlen(n); i++)
		n_re[i] = n[strlen(n) - i - 1];
}

int get_carry(char n1[], char n2[])
{
	int num1, num2;
	int i = 0;
	int carry = 0;
	int count = 0;
	char n1_re[101] = { 0 };
	char n2_re[101] = { 0 };

	reverse(n1, n1_re);
	reverse(n2, n2_re);

	while (n1_re[i] != '\0' || n2_re[i] != '\0') {
		if (n1_re[i] == '\0')
			num1 = 0;
		else
			num1 = n1_re[i] - 48;
		if (n2_re[i] == '\0')
			num2 = 0;
		else
			num2 = n2_re[i] - 48;

		if (num1 + num2 + carry >= 10) {
			count++;
			carry = 1;
		}
		else
			carry = 0;
		i++;
	}

	return count;
}

int main(void)
{
	char n1[101];
	char n2[101];

	scanf("%s", &n1);
	scanf("%s", &n2);

	printf("%d\n", get_carry(n1, n2));
}
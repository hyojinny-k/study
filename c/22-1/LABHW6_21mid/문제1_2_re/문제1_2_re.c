#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int toNum(char ch)
{
	if (ch == '\0')
		return 0;
	else
		return ch - 48;
}

int add_carry(char n1[], char n2[])
{
	int i, carry = 0, carryCount = 0;
	int sum;

	for (i = 0; n1[i] != '\0' || n2[i] != '\0'; i++) {
		sum = toNum(n1[i]) + toNum(n2[i]) + carry;

		if (sum >= 10) {
			carryCount++;
			carry = 1;
		}
		else
			carry = 0;
	}
	
	return carryCount;
}
void reverse(char n[], char n_re[])
{
	for (int i = 0; i < (int)strlen(n); i++)
		n_re[i] = n[strlen(n) - i - 1];
}

int main(void)
{
	char src_num1[101];
	char src_num2[101];
	char num1[101] = {0};
	char num2[101] = {0};

	scanf("%s %s", src_num1, src_num2);

	reverse(src_num1, num1);
	reverse(src_num2, num2);

	printf("%d\n", add_carry(num1, num2));
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n;
	int i, j;
	int choose;
	char shape[100][100];

	scanf("%d%d", &m, &n);
	scanf("%d", &choose);

	for (i = 0; i < n; i++)
		scanf("%s", shape[i]);

	j = choose;

	for (i = 0; i <= n; i++) {
		if (shape[i][j] == '1')
			j++;
		else if (shape[i][j - 1] == '1')
			j--;
	}
	printf("%d\n", j);
}
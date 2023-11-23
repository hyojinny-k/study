#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, score, key;
	int i, j = 0, k = 0;
	int num[21], low[21], high[21];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &score);
		num[i] = score;
	}
	scanf("%d", &key);

	for (i = 0; i < n; i++)
		if (num[i] < key)
			low[j++] = num[i];
		else
			high[k++] = num[i];

	for (i = 0; i < j; i++)
		printf("%d ", low[i]);
	printf("\n");
	for (i = 0; i < k; i++)
		printf("%d ", high[i]);
	printf("\n");
}
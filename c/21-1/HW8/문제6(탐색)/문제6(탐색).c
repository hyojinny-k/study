#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, key, num, i;
	int found = 0;

	scanf("%d", &n);
	scanf("%d", &key);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		if (num != key)
			found++;
		else
		{
			found++;
			break;
		}
	}

	if (found != n)
		printf("%d\n", found);
	else if (num == key)
		printf("%d\n", found);
	else
		printf("not found\n");	
}
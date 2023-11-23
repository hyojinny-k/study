#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h>

int check_two(char n[]) 
{ 
	if ((n[strlen(n) - 1] - 48) % 2 == 0) 
		return 1; 
	return 0; 
} 

int main(void)
{
	char n[52]; 
	
	scanf("%s", n);

	printf("%d\n", check_two(n));
}
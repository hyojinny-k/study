struct customer {
	char name[40];
	int age;
};

#include <stdio.h>
#include <string.h>

int main(void)
{
	struct customer cArray[2] = {{"�嵿��", 38}, {"��ҿ�", 38}};
	int i;

	for (i = 0; i < 2; i++)
		printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);
}
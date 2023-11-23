#define WIDTH 10
#define HEIGHT 10
#include <stdio.h>
int screen[WIDTH][HEIGHT] = {
0, 0, 0,-1,-1,-1,-1,-1,-1,-1,
-1,-1, 0,-1,-1,-1,-1,-1,-1,-1,
-1, 0, 0, 0, 0, 0, 0,-1,-1,-1,
-1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
-1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
-1,-1, 0, 0, 0,-1, 0, 0, 0,-1,
-1,-1,-1,-1, 0,-1, 0,-1,-1,-1,
-1,-1,-1,-1, 0,-1, 0,-1, 0,-1,
-1,-1,-1,-1, 0,-1,-1,-1, 0,-1,
-1,-1,-1,-1, 0, 0, 0, 0, 0, 0
};

void display()
{
	int i, j;
	for (i = 0; i < WIDTH; i++) {
		for (j = 0; j < HEIGHT; j++)
			printf("%2d ", screen[i][j]);
		printf("\n");
	}
}

void flood_fill(int x, int y)
{
	static int count = 1;

	if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
		if (screen[x][y] == 0)
		{
			screen[x][y] = count++;

			flood_fill(x, y + 1); // ��ȯ ȣ��
			flood_fill(x + 1, y); // ��ȯ ȣ��
			flood_fill(x, y - 1); // ��ȯ ȣ��
			flood_fill(x - 1, y); // ��ȯ ȣ��
		}
}

int main()
{
	printf("�̷�:\n");
	display();
	printf("\n");

	printf("�������� <0 0>���� �� �̷ι湮<����ǥ��>:\n");
	flood_fill(0, 0);
	display();
}
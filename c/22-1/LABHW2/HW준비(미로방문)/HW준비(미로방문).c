#define WIDTH 10
#define HEIGHT 10
#include <stdio.h>
int screen[WIDTH][HEIGHT] = {
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
-1,-1, 0, 0,-1,-1,-1, 0,-1,-1,
-1,-1,-1, 0, 0, 0, 0, 0,-1,-1,
-1,-1,-1, 0,-1,-1,-1,-1,-1,-1,
-1,-1,-1, 0, 0, 0, 0, 0,-1,-1,
-1,-1,-1, 0,-1, 0,-1,-1,-1,-1,
-1,-1,-1, 0,-1, 0,-1,-1,-1,-1,
-1,-1,-1, 0,-1, 0, 0, 0,-1,-1,
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
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
	static count = 1;

	if (screen[x][y] == 0)
	{
		screen[x][y] = count++;

		flood_fill(x, y + 1); // 순환 호출
		flood_fill(x + 1, y); // 순환 호출
		flood_fill(x, y - 1); // 순환 호출
		flood_fill(x - 1, y); // 순환 호출
	}
}

int main()
{
	display();
	printf("\n");

	flood_fill(4, 3);
	display();
}
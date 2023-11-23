#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y; //x는 분자, y는 분모
    int Lx = 0, Ly = 1, Rx = 1, Ry = 0;
    int midX, midY;
    int i;

    scanf("%d%d", &x, &y);

    midX = Lx + Rx;
    midY = Ly + Ry;
    while (midX != x || midY != y) {
        if ((x * midY) < (y * midX)) {
            Rx = midX;
            Ry = midY;
            midX += Lx;
            midY += Ly;
            printf("L");
        }
        else {
            Lx = midX;
            Ly = midY; 
            midX += Rx;
            midY += Ry;
            printf("R");
        }
    }
    printf("\n");
}
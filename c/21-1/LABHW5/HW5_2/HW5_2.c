#include <stdio.h>
int main(void)
{
	const double PI = 3.141592;
	int radius;
	double area;

	printf("Enter a radius: ");
	scanf_s("%d", &radius);

	area = PI * radius * radius;

	printf("The area of a circle with %d:\t\t%f\n", radius, area);
	printf("The circumference of a circle with %d: %f\n", radius, PI*radius*2);
}
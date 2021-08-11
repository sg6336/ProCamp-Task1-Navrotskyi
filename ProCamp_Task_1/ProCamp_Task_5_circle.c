// Task5:
// Write a program that computes the perimeter and the area of a
// circle with a radius of 6

// perimetr = 2 * pi * r
// area = pi * r^2

#include "ProCamp_Task_5_circle.h"

void task5_main_circle()
{
	printf("Task 5: the perimeter and the area of the circle \n");
	printf("Start \n\n");

	float radius = 6.0;

	printf("radius = %f \n", radius);

	long double perimeter = circle_perimeter(radius);
	long double area = circle_area(radius);

	printf("Perimeter of the Circle = %.20Lf \n", perimeter);
	printf("Area of the Circle = %.20Lf square \n\n", area);

	printf("Task 5: the perimeter and the area of the circle \n");
	printf("Stop \n\n");
}

long double circle_perimeter(float radius)
{
	return 2 * M_PI * radius;
}

long double circle_area(float radius)
{
	return M_PI * radius * radius;
}
/*
* Write a program that computes the perimeter and the area of a
* circle with a radius of 6
*/

// perimetr = 2 * pi * r
// area = pi * r^2

#define _USE_MATH_DEFINES // for C
#include <math.h>

//#define M_PI acos(-1.0)
//#define PI 3.14159265358979323846 // long double

long double circle_perimeter(float radius)
{
	return 2 * M_PI * radius;
}

long double circle_area(float radius)
{
	return M_PI * radius * radius;
}
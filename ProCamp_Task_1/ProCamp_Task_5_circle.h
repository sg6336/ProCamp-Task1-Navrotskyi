// Task5:
// Write a program that computes the perimeter and the area of a
// circle with a radius of 6
/*
* void task5_main_circle(void); // main() for task5
* 
* long double circle_perimeter(float radius); // find the perimeter of the circle
* long double circle_area(float radius); // find the area of the circle
*/

#pragma once

#define _USE_MATH_DEFINES // for C to use M_PI in math.h

#include <stdio.h>
#include <math.h>

void task5_main_circle(void);

long double circle_perimeter(float);
long double circle_area(float);
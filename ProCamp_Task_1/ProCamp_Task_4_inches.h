// Task4:
// Write a program that gets two values from a user: height and
// width of a rectangle in metersand calculatesand prints the
// perimeter and the area of the rectangle in inches
/*
* void task4_main_inches(void); // main() for task4
* 
* float rectangle_perimeter(float width, float height); // find the perimeter of the rectangle
* float rectangle_area(float width, float height); // find the area of the rectangle
* float convertor_meters_to_inches(float length_meters); // convert the meters to the inches
*/

#pragma once

#define _CRT_SECURE_NO_WARNINGS

#define METER_PER_INCH 39.3700787402f

#include <stdio.h>

void task4_main_inches(void);

float rectangle_perimeter(float, float);
float rectangle_area(float, float);
float convertor_meters_to_inches(float);

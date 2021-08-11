// Task4:
// Write a program that gets two values from a user: height and
// width of a rectangle in meters and calculates and prints the
// perimeter and the area of the rectangle in inches

// How to Convert Meter to Inch
// 1 m = 39.3700787402 in
// 1 in = 0.0254 m
//
// Example : convert 15 m to in :
// 15 m = 15 x 39.3700787402 in = 590.5511811024 in

#include "ProCamp_Task_4_inches.h"

void task4_main_inches()
{
	printf("Task 4: the perimeter and the area of the rectangle in inches \n");
	printf("Start \n\n");

	float width_meters, height_meters; /* length in meters */

	printf("Enter width in meters, (m): ");
	while (scanf("%f", &width_meters) != 1) {
		printf("Please enter a float: ");
		while (getchar() != '\n');
	}

	printf("Enter height in meters, (m): ");
	while (scanf("%f", &height_meters) != 1) {
		printf("Please enter a float: ");
		while (getchar() != '\n');
	}

	float perimeter_meters = rectangle_perimeter(width_meters, height_meters);
	float area_meters = rectangle_area(width_meters, height_meters);

	float perimeter_inches = convertor_meters_to_inches(perimeter_meters);
	float area_inches = convertor_meters_to_inches(area_meters);

	printf("\nperimeter = %0.2f(m) = %0.2f(in)\n", perimeter_meters, perimeter_inches);
	printf("area = %0.2f(m) = %0.2f(in)\n\n", area_meters, area_inches);

	printf("Task 4: the perimeter and the area of the rectangle in inches \n");
	printf("Stop \n\n");
}

float rectangle_perimeter(float width, float height)
{
	return 2 * (width + height);
}

float rectangle_area(float width, float height)
{
	return width * height;
}

float convertor_meters_to_inches(float length_meters)
{
	return length_meters * METER_PER_INCH;
}


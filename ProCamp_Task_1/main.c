/*
* task2_main_swap();
* Write the swap16, swap32, swap64 functions that swap bytes in
* uint16_t, uint32_t, and uint64_t (endianness conversions)
*/
/*
* task3_main_RGB888_to_RGB565();
* Write a function that converts the RGB888 data format to RGB565
*/
/*
* task4_main_inches();
* Write a program that gets two values from a user: height and
* width of a rectangle in meters and calculates and prints the
* perimeter and the area of the rectangle in inches
*/
/*
* task5_main_circle();
* Write a program that computes the perimeter and the area of a
* circle with a radius of 6
*/
/*
* task6_main_factorial();
* Write a program that computes the factorial of 10
*/
/*
* task7_main_divisible();
* Write a program that prints all the integer numbers between 1 to
* 500 which are divisible by a number received from a user
*/

#define _CRT_SECURE_NO_WARNINGS

#include "main.h"
#include <stdio.h>
//#include <assert.h>
//#include <limits.h>

int main() {

	task2_main_swap();
	task3_main_RGB888_to_RGB565();
	task4_main_inches();
	task5_main_circle();
	task6_main_factorial();
	task7_main_divisible();

	return 0;
}

void task2_main_swap()
{
	/*
	* Write the swap16, swap32, swap64 functions that swap bytes in
	* uint16_t, uint32_t, and uint64_t (endianness conversions)
	*/
	printf("Task 2: swap \n");
	printf("Start \n\n");

	uint16_t a16_old = 0xA1B2;
	uint16_t a16_new = swap16(a16_old);

	uint32_t a32_old = 0xA1B2C3D4;
	uint32_t a32_new = swap32(a32_old);

	uint64_t a64_old = 0xA1B2C3D4E5F60102ULL;
	uint64_t a64_new = swap64(a64_old);

	printf("uint16_t a16_old = 0x%04X \n", a16_old);
	printf("uint16_t a16_new = 0x%04X \n\n", a16_new);

	printf("uint32_t a32_old = 0x%08X \n", a32_old);
	printf("uint32_t a32_new = 0x%08X \n\n", a32_new);

	printf("uint64_t a64_old = 0x%016jX \n", a64_old);
	printf("uint64_t a64_new = 0x%016jX \n\n", a64_new);

	printf("Task 2: swap \n");
	printf("Stop \n\n");
}

void print_binary(unsigned int number)
{
	if (number >> 1) {
		print_binary(number >> 1);
	}
	putc((number & 1) ? '1' : '0', stdout);
}

void print_rgb888Pixel(uint8_t* rgb888Pixel)
{
	printf("uint8_t rgb888Pixel[3] = RGB(8+8+8=24) \n\t\t\t");
	print_binary(rgb888Pixel[0]);
	printf(" ");
	print_binary(rgb888Pixel[1]);
	printf(" ");
	print_binary(rgb888Pixel[2]);
	printf("\n");
}

void print_rgb565(uint16_t rgb565Pixel)
{
	printf("uint16_t rgb565Pixel = RGB(5+6+5=16) \n\t\t\t");
	print_binary(rgb565Pixel);
	printf("\n\n");
}

void task3_main_RGB888_to_RGB565()
{
	/*
	* Write a function that converts the RGB888 data format to RGB565
	*/
	printf("Task 3: RGB8888 to RGB565 \n");
	printf("Start \n\n");

	uint8_t rgb888Pixel[3] = {0b10010001, 0b10011001, 0b11111111};
	uint16_t rgb565Pixel = RGB888_to_RGB565(rgb888Pixel);

	print_rgb888Pixel(rgb888Pixel);
	print_rgb565(rgb565Pixel);

	printf("Task 3: RGB8888 to RGB565 \n");
	printf("Stop \n\n");
}

void task4_main_inches()
{
	/*
	* Write a program that gets two values from a user: height and
	* width of a rectangle in meters and calculates and prints the
	* perimeter and the area of the rectangle in inches
	*/
	printf("Task 4: the perimeter and the area of the rectangle in inches \n");
	printf("Start \n\n");

	float width_meters, height_meters; /* length in meters */

	printf("Enter width in meters, (m): ");
	while (scanf("%f", &width_meters) != 1)	{
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

	float perimeter_inches = convertor_meters_to_inshes(perimeter_meters);
	float area_inches = convertor_meters_to_inshes(area_meters);

	printf("\nperimeter = %0.2f(m) = %0.2f(in)\n", perimeter_meters, perimeter_inches);
	printf("area = %0.2f(m) = %0.2f(in)\n\n", area_meters, area_inches);

	printf("Task 4: the perimeter and the area of the rectangle in inches \n");
	printf("Stop \n\n");
}

void task5_main_circle()
{
	/*
	* Write a program that computes the perimeter and the area of a
	* circle with a radius of 6
	*/
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

void task6_main_factorial()
{
	/*
	* Write a program that computes the factorial of 10
	*/
	printf("Task 6: the factorial of 10 \n");
	printf("Start \n\n");

	int n = 10;
	printf("Factorial of %d = %ld \n\n", n, multiplyNumbers(n));

	printf("Task 6: the factorial of 10 \n");
	printf("Stop \n\n");
}

void task7_main_divisible()
{
	/*
	* Write a program that prints all the integer numbers between 1 to
	* 500 which are divisible by a number received from a user
	*/
	printf("Task 7: numbers (1-500) which are divisible by a number \n");
	printf("Start \n\n");

	int n;
	int temp = 500;
	int i = 0, d = 0;

	printf("Enter a number (integer): ");
	while (scanf("%d", &n) != 1)	{
		printf("Please enter an integer: ");
		while (getchar() != '\n');
	}

	printf("\nAnswer: ");
	while (i <= temp) {
		i++;		
		d = divisible(temp, n, i);
		if (d == -1)
			break;
		else
			printf("%d ", d);
	}
	printf("\n\n");

	printf("Task 7: numbers (1-500) which are divisible by a number \n");
	printf("Stop \n\n");
}
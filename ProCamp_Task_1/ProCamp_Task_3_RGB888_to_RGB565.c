// Task3:
// Write a function that converts the RGB888 data format to RGB565
/*
* RGB888 - 24 bits, 8 bits per component.
* RGB565 - 16 bits, 5 bits red, 6 bits green, 5 bits blue.
* https://www.researchgate.net/figure/Bit-rearrangement-substep-applied-to-every-pixel-of-a-source-image-for-obtaining_fig5_333883036
*/

#include "ProCamp_Task_3_RGB888_to_RGB565.h"

void task3_main_RGB888_to_RGB565()
{
	printf("Task 3: RGB8888 to RGB565 \n");
	printf("Start \n\n");

	uint8_t rgb888Pixel[3] = { 0b10010001, 0b10011001, 0b11111111 };
	uint16_t rgb565Pixel = RGB888_to_RGB565(rgb888Pixel[0], rgb888Pixel[1], rgb888Pixel[2]);

	print_rgb888Pixel(rgb888Pixel);
	print_rgb565Pixel(rgb565Pixel);

	printf("Task 3: RGB8888 to RGB565 \n");
	printf("Stop \n\n");
}

uint16_t RGB888_to_RGB565(uint8_t red, uint8_t green, uint8_t blue)
{
    uint16_t b = (blue >> 3) & 0x1f;
    uint16_t g = ((green >> 2) & 0x3f) << 5;
    uint16_t r = ((red >> 3) & 0x1f) << 11;

    return (uint16_t)(r | g | b);
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

void print_rgb565Pixel(uint16_t rgb565Pixel)
{
	printf("uint16_t rgb565Pixel = RGB(5+6+5=16) \n\t\t\t");
	print_binary(rgb565Pixel);
	printf("\n\n");
}
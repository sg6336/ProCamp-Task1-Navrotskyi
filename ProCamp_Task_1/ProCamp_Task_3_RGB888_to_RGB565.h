// Task3:
// Write a function that converts the RGB888 data format to RGB565
/*
* void task3_main_RGB888_to_RGB565(void); // main() for task3
* 
* uint16_t RGB888_to_RGB565(uint8_t red, uint8_t green, uint8_t blue) // convert the pixel in RGB888 format to pixel in RGB565 format
* 
* void print_binary(unsigned int number); // printf number as binary
* void print_rgb888Pixel(uint8_t* rgb888Pixel); // print rgb888Pixel as binary
* void print_rgb565Pixel(uint16_t rgb565Pixel); // print result as rgb565Pixel as binary
*/

#pragma once

#include <stdint.h>
#include <stdio.h>

void task3_main_RGB888_to_RGB565(void);

uint16_t RGB888_to_RGB565(uint8_t, uint8_t, uint8_t);

void print_binary(unsigned int);
void print_rgb888Pixel(uint8_t*);
void print_rgb565Pixel(uint16_t);
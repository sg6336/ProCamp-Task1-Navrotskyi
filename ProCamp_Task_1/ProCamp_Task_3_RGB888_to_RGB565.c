// Task:
// Write a function that converts the RGB888 data format to RGB565
/*
* RGB888 - 24 bits, 8 bits per component.
* RGB565 - 16 bits, 5 bits red, 6 bits green, 5 bits blue.
* https://www.researchgate.net/figure/Bit-rearrangement-substep-applied-to-every-pixel-of-a-source-image-for-obtaining_fig5_333883036
*/

// #include <stdint.h>
#include "ProCamp_Task_3_RGB888_to_RGB565.h"

uint16_t RGB888_to_RGB565(uint8_t* rgb888Pixel)
{
    uint8_t red = rgb888Pixel[0];
    uint8_t green = rgb888Pixel[1];
    uint8_t blue = rgb888Pixel[2];

    uint16_t b = (blue >> 3) & 0x1f;
    uint16_t g = ((green >> 2) & 0x3f) << 5;
    uint16_t r = ((red >> 3) & 0x1f) << 11;

    return (uint16_t)(r | g | b);
}

// TODO:
//uint32_t RGB565_to_RGB888(uint16_t rgb565)
//{
//    uint32_t B = (uint32_t)(((rgb565 & 0x001F) << 3) | (rgb565 & 0x0007));
//    uint32_t G = (uint32_t)(((rgb565 & 0x07E0) << 5) | ((rgb565 & 0x0060) << 3));
//    uint32_t R = (uint32_t)(((rgb565 & 0xF800) << 8) | ((rgb565 & 0x3800) << 5));
//
//    return (R | G | B);
//}
// Task2:
// Write the swap16, swap32, swap64 functions that swap bytes in
// uint16_t, uint32_t, and uint64_t(endianness conversions)
/*
* void task2_main_swap(void); // main() for task2
* 
* uint16_t swap16(uint16_t val); // Byte swap in uint16_t val
* uint32_t swap32(uint32_t val); // Byte swap in uint32_t val
* uint64_t swap64(uint64_t val); // Byte swap in uint64_t val
*/

#pragma once

#define MASK32H8 0xFF00FF00
#define MASK32L8 0x00FF00FF

#define MASK64H8 0xFF00FF00FF00FF00ULL
#define MASK64L8 0x00FF00FF00FF00FFULL

#define MASK64H16 0xFFFF0000FFFF0000ULL
#define MASK64L16 0x0000FFFF0000FFFFULL

#include <stdint.h>
#include <stdio.h>

void task2_main_swap(void);

uint16_t swap16(uint16_t); 
uint32_t swap32(uint32_t); 
uint64_t swap64(uint64_t); 


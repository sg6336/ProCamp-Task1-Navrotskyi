// Task:
// Write the swap16, swap32, swap64 functions that swap bytes in
// uint16_t, uint32_t, and uint64_t (endianness conversions)

// #include <stdio.h>
#include "ProCamp_Task_2_swap.h"

// Byte swap in uint16_t
uint16_t swap16(uint16_t val)
{
    return ((val << 8) & 0xFF00) | ((val >> 8) & 0x00FF);
}

// Byte swap in uint32_t
uint32_t swap32(uint32_t val)
{
	val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF);
	return (val << 16) | (val >> 16);
}

// Byte swap in uint64_t
uint64_t swap64(uint64_t val)
{
	val = ((val << 8) & 0xFF00FF00FF00FF00ULL) | ((val >> 8) & 0x00FF00FF00FF00FFULL);
	val = ((val << 16) & 0xFFFF0000FFFF0000ULL) | ((val >> 16) & 0x0000FFFF0000FFFFULL);
	return (val << 32) | (val >> 32);
}

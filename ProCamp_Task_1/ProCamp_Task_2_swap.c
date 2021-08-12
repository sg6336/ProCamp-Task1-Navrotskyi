// Task2:
// Write the swap16, swap32, swap64 functions that swap bytes in
// uint16_t, uint32_t, and uint64_t (endianness conversions)

#include "ProCamp_Task_2_swap.h"

void task2_main_swap()
{
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

uint16_t swap16(uint16_t val)
{
    return ((val << 8) | (val >> 8));
}

uint32_t swap32(uint32_t val)
{
	val = ((val << 8) & MASK32H8) | ((val >> 8) & MASK32L8);
	return (val << 16) | (val >> 16);
}

uint64_t swap64(uint64_t val)
{
	val = ((val << 8) & MASK64H8) | ((val >> 8) & MASK64L8);
	val = ((val << 16) & MASK64H16) | ((val >> 16) & MASK64L16);
	return (val << 32) | (val >> 32);
}

// Task7:
// Write a program that prints all the integer numbers between 1 to
// 500 which are divisible by a number received from a user

#include "ProCamp_Task_7_divisible.h"

void task7_main_divisible()
{
	printf("Task 7: numbers (1-500) which are divisible by a number \n");
	printf("Start \n\n");

	int n;
	int temp = 500;
	int i = 0, d = 0;

	printf("Enter a number (integer): ");
	while (scanf("%d", &n) != 1) {
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

int divisible(int temp, int n, int i) 
{
    if (n * i <= temp)
        return n * i;

    return -1;
}
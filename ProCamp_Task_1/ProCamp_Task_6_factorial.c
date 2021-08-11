// Task6:
// Write a program that computes the factorial of 10

// factorial of n (n!) = 1 * 2 * 3 * 4....n

#include "ProCamp_Task_6_factorial.h"

void task6_main_factorial()
{
    printf("Task 6: the factorial of 10 \n");
    printf("Start \n\n");

    int n = 10;
    printf("Factorial of %d = %ld \n\n", n, multiplyNumbers(n));

    printf("Task 6: the factorial of 10 \n");
    printf("Stop \n\n");
}

long int multiplyNumbers(int n)
{
    long int fact = 1;

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
        return -1;
    }
    else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
}
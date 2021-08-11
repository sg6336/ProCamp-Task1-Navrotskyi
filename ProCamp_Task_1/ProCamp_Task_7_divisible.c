/*
* Write a program that prints all the integer numbers between 1 to
* 500 which are divisible by a number received from a user
*/

int divisible(int temp, int n, int i) 
{
    if (n * i <= temp)
        return n * i;

    return -1;
}
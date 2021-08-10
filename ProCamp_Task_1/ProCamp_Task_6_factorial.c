/*
* Write a program that computes the factorial of 10
*/

// factorial of n (n!) = 1 * 2 * 3 * 4....n

long int multiplyNumbers(int n) 
{
    if (n >= 1)
        return n * multiplyNumbers(n - 1);
    else
        return 1;
}
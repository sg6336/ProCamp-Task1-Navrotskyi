/*
* Write a program that computes the factorial of 10
*/

// factorial of n (n!) = 1 * 2 * 3 * 4....n

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

//long int multiplyNumbers(int n) 
//{
//    if (n >= 1)
//        return n * multiplyNumbers(n - 1);
//    else
//        return 1;
//}
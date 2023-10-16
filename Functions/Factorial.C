//Create a function with the following prototype: 
//long factorial(long n)  
//which calculates the factorial of n
//Reminder factorial(n) equals n∗(n−1)∗(n−2)…3∗2∗
//No main function needed


#include <stdio.h>
#include <math.h>

long int factorial(long int n) {
    // Check if n is non-negative
    if (n < 0) {
        printf("Error: Factorial is undefined for negative numbers.\n");
        return -1; // Indicate an error
    }

    long int result = 1; // Initialize result to 1

    for (int i = 2; i <= n; i++) {
        result *= i; // Multiply result by each number from 2 to n
    }

    return result;
}
//Create a function with the following prototype: 
//long factorial(long n)  
//which recursively calculates the factorial of n
//No main function needed

#include <stdio.h>
#include <math.h>

long factorial(long n) {
    
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
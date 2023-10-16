#include <stdio.h>
#include <stdlib.h>

//Declare a global variable (notice it's before the main function)
int total;
int square(int x) {
    return x*x;
}
int squareOfSum(int x, int y) {
    //Local variable declared is z
    int z = square(x+y);
    return z;
}
int main () {
    //declaring local variabls a and b, etc...
    int a = 4, b = 8,()
    //Global variable declared earlier, which means I can use it in my main w/o issue
    total = squareOfSum(a,b);
    printf("Output = %d\n", total);
}
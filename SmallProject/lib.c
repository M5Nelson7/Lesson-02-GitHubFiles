#include "header.h"
#include <stdlib.h>
#include <stdio.h>

// Function that prints the coordinates of a Point
void print_point(struct Point p1) {
    printf("Point Coordinates: (%.2f, %.2f)\n", p1.x, p1.y);

 }

 int main() {
    // Create an instance of the Point struct
    struct Point myPoint;

    // Assign values to the coordinates of the Point
    myPoint.x = 3.5;
    myPoint.y = 2.0;

    // Call the function to print the coordinates
    print_point(myPoint);

 }
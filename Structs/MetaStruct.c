#include <stdio.h>
#include <stdlib.h>
//  ^^  Wondering if I could call a C file that creates a point struct called "Coordinate" and then call it here in this new struct
typedef struct Point {
    float x, y;
} Point;
//Making a struct, (remember, a struct is like an array that can hold different data types.)
typedef struct Temperature{
    
    float temperature;
    Point coordinate;
    // ^^ Need to look up how to call a Point from another header file into a struct in a new file
} Temperature;


//Create a function average_temperature(Temperature t1, Temperature t2) which computes the average of two temperatures struct
//??? Not sure how to do this...
float average_temperature(Temperature t1, Temperature t2) {

    float result;
    result = (t1.temperature + t2.temperature) / 2;
    return result;
} 

//Do a unit test of it
void test_average_temperature() {
    //it is like a main for testing !
    Temperature t1;
    t1.temperature = 22;
    t1.coordinate.x = 0.1;
    t1.coordinate.y = 0.2;
    
    Temperature t2;
    t2.temperature = 8;
    t2.coordinate.x = 0.4;
    t2.coordinate.y = 0.4;

    float average = average_temperature(t1, t2);

    if (average != 15) {
        printf("Bug in average_temperature %d, expected: %g, actual: %g \n", __LINE__, 15.0, average);
    } else printf("This shit isn't working");
    
}

void main() {

    //BE SURE TO INCLUDE THE PARENTHESES, RAN THIS CODE 15 TIMES AND DIDN'T GET AN OUTPUT TILL I ADDED THESE () AFTER CALLING THE FUNCTION BELOW.
    test_average_temperature();
}
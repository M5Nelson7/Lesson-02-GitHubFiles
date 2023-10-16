#include <stdio.h>
#include <stdlib.h>


typedef struct Point{
    
    float x,y;
    
} Point;



void test_main(){
    //it is like a main for testing !
    Point p1;
    p1.x = 5.40;
    p1.y = 3.14;
    
    printf("Point Coordinates: (%.2f, %.2f)\n", p1.x, p1.y);
}

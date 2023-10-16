#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct Position {
    
    float x,y;
    
} Position;

float distance(Position p1, Position p2) {
    
  float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;

    return sqrt(dx * dx + dy * dy);
}


int test_main(){
    //it is like a main for testing !
    
    // Create two Position variables
    struct Position pos1 = {1.0, 2.0};
    struct Position pos2 = {4.0, 6.0};

    // Calculate the distance between the two positions
    float dist = distance(pos1, pos2);

    // Display the result
    printf("Distance between positions: %f\n", dist);

    return 0;
}


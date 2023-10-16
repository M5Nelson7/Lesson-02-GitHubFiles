#include <stdio.h>
#include <stdlib.h>

float minimum_three_numbers(float n1, float n2, float n3) {
    float min;
    if (n1<n2)
        min = n1;
        
    else 
        min = n2;
        
    if (min > n3)
        min = n3;
        
    return min;
}



void test_main(){
    //it is like a main for testing !
    float v1 = 5;
    float v2 = 10;
    float v3 = 2;
minimum_three_numbers(v1,v2,v3);
}

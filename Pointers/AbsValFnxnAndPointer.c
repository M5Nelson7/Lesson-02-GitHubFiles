#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int replaceWithAbsolute(int *x) {
    
    if (*x < 0) {
        *x = -*x;
    }
}

void main(){
    int y = -7;
    
    printf("Original value is:  %d \n", y);
    
    replaceWithAbsolute(&y);
    
    printf("Absolute value is:  %d", y);

}

#include <stdio.h>
#include <stdlib.h>

int count_value_above_threshold(float* values, int n_value, float threshold) {
    
    int count = 0;
    
    for (int i = 0; i < n_value; i++) {
        
        if (values[i] >= threshold) {
            count++;
        }
    }
    
    return count;
}




void test_main(){
    //it is like a main for testing !

}

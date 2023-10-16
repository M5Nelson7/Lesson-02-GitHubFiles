//Code the function create_float_array which creates an array of floats. The function must have the following prototype: 
//float* create_float_array(int n_values, float initial_value) 
//The array must be filled with the value initial_value.
//Example:  create_float_array(3, 1.1) will create an array with 3 values all worth 1.1 
//Note: no main function needed!

#include <stdio.h>
#include <stdlib.h>

float* create_float_array(int n_values, float initial_value) {

if (n_values <= 0) {
    return NULL;
}

//allocate memory for the array
float* float_arr = (float*)malloc(n_values * sizeof(float));


    //logic: need to take whatever the intial value is and duplicate it
    // n times (which is just wahtever the number is in n_values)
    // THIS FILLS THE ARRAY (float_arr), with the "initial_value";
    for (int i = 0; i < n_values; i++) {
        float_arr[i] = initial_value;
    }
    
    return float_arr;
}
//Create an is_in_array function that checks for the presence of a given value in a float array
//It returns 1 if the value is there and -1 otherwise. The function must have the following prototype:
//int is_in_array(float* values, int n_values, float needle ) 
//Example : is_in_array used on array [1, 1.1, -2] and with needle = -2, must return 1
//Note: No main function needed!

    //So basically what we're trying to do w/ this function is the following:
    //Create an array as per usual, and then do a logical check to see if the
    // "needle" value is contained w/i the array.
    // if so, return 1, otherwise return -1.

#include <stdio.h>
#include <stdlib.h>

int is_in_array(float* values, int n_values, float needle) {
    
    //First off we do a logical check the make sure that we actually have values in our array
    //else return NULL.
    if (n_values <= 0) {
    return NULL;}
    
    //Next we need to allocate memory for the array
    //int check_arr = (float*)malloc(n_values * sizeof(float));
    
    //next we need to create logic to verify whether or not needle is there
        for (int i = 0; i < n_values; i++) {
        
            if(needle == values[i]) {
                return 1; //if value is found, loop can be stopped, value is returned
            }
    
    }

    return -1;  //if no value found in the array that matches needle, the loop goes to the end.

}

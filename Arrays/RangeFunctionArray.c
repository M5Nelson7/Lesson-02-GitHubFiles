//Code a range function that creates an array and fills it with inters. 
//The integer array must contain all integers between min_value (included) and max_value (excluded). 
//The function must have the following prototype: 
//int* range(int min_value, int max_value) 
//Example: range(3, 7) returns the array [3, 4, 5, 6]
//Note: No need for a main function! 

#include <stdio.h>
#include <stdlib.h>

int* range(int min_val, int max_val) {

    int arr_size = max_val - min_val;         //(int*) malloc(sizeof(int)) * arr_size;

    int* range_arr = (int*)malloc(sizeof(int) * arr_size);

    for (int i = 0; i < arr_size; i++) {
        //Logically this makes sense, since we want to count up from the min value, we're taking that and adding i.
        range_arr[i] = min_val + i;
    }

    printf(" %d, %d, %d, %d \n ", range_arr[0], range_arr[1], range_arr[2]);
    return range_arr;
}
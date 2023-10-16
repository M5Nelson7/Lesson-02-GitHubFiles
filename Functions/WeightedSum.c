//Create a function with the following prototype: 
//float weighted_sum(float values[], float weights[], int n_values) 
//which returns the weighted sum of values by weights
//Example: 
//if we take an array of values such as [1, 3, -1]
//and take [0.5, 0, 1]
//the function must calculate 0.5 * 1 + 0 * 3 + 1 * -1
//Note: pno need for main function!


#include <stdio.h>
#include <math.h>

float weighted_sum(float values[], float weights[], int n_values) {
    float wtdSum = 0.0;
    
    if (n_values < 0) 
    {
    return -1.0;
    }
    
    for (int i = 0; i < n_values; i++)
    {
        wtdSum += values[i] * weights[i];
    }
    
    return wtdSum;
}
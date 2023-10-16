#include <stdio.h>


int main(){

    int arr[6] = {5, 30, 40, 15, 70, 55};
    
    
        int size = sizeof(arr) / sizeof(int);
        int min = arr[0];
        //int *ptr = array;
        
        for (int i = 0; i < size; i++) {
            if (arr[i] < min)
            min = arr[i];
            return min;
            
    }
    
    printf("Minimum of array = %d", min);
    return 0;
}
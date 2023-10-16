#include <stdio.h>


int main(){

    int arr[7] = {5, 20, 30, 40, 15, 70, 55};
    
        int size = sizeof(arr) / sizeof(int);
        int sum = 0;
        int *ptr = arr;
        for (int i = 0; i < size; i++) {
            sum+=*ptr;
            ptr++;
            
    }
    
    printf("Sum of array = %d", sum);
    return 0;
}
#include <stdio.h>
int main(){

    int arr[5] = {10, 20, 30, 40, 15};
    //The sizeof() operator calculates the size in bytes of the array, in this instance
    // each integer's size is typically 4 bytes, therefore, with 5 integers in this array, the sizeof() operator will return 20 (bytes)
    // Dividing by sizeof(int) [which as we know an int = 4 bytes], will give you 5.  20/4=5.
    int size = sizeof(arr) / sizeof(int);
    //^^ Knowing what we listed above, if it was a float or double this would be different, might still work fine though... could always do sizeof(arr)/sizeof(arr[0]) though
    
    
// Use a pointer to iterate through the array in reverse order
//arr: This is the base address of the array, pointing to the first element.
//size: This is the number of elements in the array.
//arr + size - 1: This expression calculates the memory address of the last element in the array. It takes the base address of the array (arr), adds the total size of the array (size), and then subtracts 1 to get the address of the last element.
//int *ptr: This declares a pointer to an integer (int *) named ptr.
//So, the line essentially initializes the pointer ptr to point to the last element of the array arr. This pointer is then used to iterate through the array in reverse order in the subsequent loop.
    int *ptr = arr + size - 1;
    
    for (int i = 0; i < size; i++){
            printf("%d, ", *ptr);
            ptr--;
    }
    
    return 0;
}




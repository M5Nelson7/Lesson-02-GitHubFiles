#include <stdio.h>
#include <stdlib.h>

//Consider an array of N elements stored in heap memory.  Write C functions to:
//Remove duplicate elements



// Function to remove duplicate elements from an array
int* removeDuplicates(int* arr[], int size) {
    if (size <= 1) {
        return size; // No duplicates to remove for an array of size 1 or empty array
    }

    int* newSize = 1; // Initialize the new size of the array
    //Outer Loop
    for (int i = 1; i < size; i++) {
        int j;  //initializing a second variable, j
        //Inner loop,  -- j is used to iterate thru everything that we've already checked w/ i.
        for (j = 0; j < newSize; j++) {
            //vv, --This checks if the current number (arr[i]) is equal to any number already in the new array.
            if (arr[i] == arr[j]) {
                break; // If a duplicate is found, break out of the inner loop
            }
        }

        // If no duplicate is found, add the unique number to the new array
        //If the Inner loop above, on line 19, completes w/o finding a duplicate
        //then j will be equal to 'newSize', indicating that the current number is unique.
        if (j == newSize) {
            arr[newSize] = arr[i];  //The unique number is added to the new array
            newSize++;  //increment this variable to account for the newly added unique number(s)
        }
    }

    return newSize; // Return the new size of the array after removing duplicates
}

// Function to display elements of an array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

// Dynamic allocation of an array in heap memory
    int* arr = (int*)malloc(10 * sizeof(int));
arr[0]=1;
arr[1]=2;
arr[2]=5;
arr[3]=2;
arr[4]=4;
arr[5]=3;
arr[6]=3;
arr[7]=1;
arr[8]=2;
arr[9]=4;

    // Example array with 10 elements (with duplicates)
    //int arr[] = {1, 2, 5, 2, 4, 3, 3, 1, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display original array
    printf("Original Array, ");
    displayArray(arr, size);

    // Remove duplicates and display the modified array
    int newSize = removeDuplicates(arr, size);
    printf("Array after removing duplicates: ");
    displayArray(arr, newSize);

// Free allocated memory when done
    free(arr);

    return 0;
}


// removeDuplicates function:  In summary, the outer loop iterates through each element of the array, 
//and the inner loop checks whether the element is a duplicate by comparing it with elements already in the new array.
//If it's not a duplicate, the element is added to the new array, and newSize is incremented.
//The final result is an array without duplicates, and newSize represents its new size.
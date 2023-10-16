#include <stdio.h>
#include <stdlib.h>

// Defining a node structure (as Link) for the SLL
struct Link {
    int data;
    struct Link* next;
}; 

int sll_nOccs(struct Link* sll, int val) {
    //Intialize count to -
    int count = 0;
    
        //Traverse / Go through the SLL
    while (sll != NULL) {
        //Logical check to see if the current node contains the desired value
        if (sll->data == val) {
            count++; // Increment count for ea. time a value is found.
        }
        // Move to the next node
        sll = sll->next;
    }
    
    // Return the total count of occurrences
    return count;
}
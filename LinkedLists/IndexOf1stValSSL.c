#include <stdio.h>
#include <stdlib.h>

// Defining a node structure (as Link) for the SLL
struct Link {
    
    int data;
    struct Link* next;
    
}; 


//Per the instructions, fnxn finds the index of the first occurence of a val in the SLL
int sll_indexOf(struct Link* sll, int value) {
    // Initialize index to 1
    int index = 1;
    //Traverse / Go through the SLL
    while (sll != NULL) {
        //Logical check to see if the current node contains the desired value
        if (sll->data == value) {
            return index; // Value found at the current index
        }
        
        //instruct / code to move to the next node
        sll = sll->next;
        index++;
    }

    return -1; // Value not found in the list
}



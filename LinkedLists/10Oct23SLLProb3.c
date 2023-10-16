//A Singly Linked List (SLL) is a data structure made up of linked elements (links), with each link represented by a structure containing a value (data) and a pointer to the next link.
//A SLL starts from a head (which we'll simply call sll for the following exercises) linked to all subsequent elements. The last element points to 'NULL' to mark the end of the LSC.
//1. Create a 'Link'  structure corresponding to a link in an LSC via typedef struct, containing a pointer next to the next 'Link' and an integer, called value.
//2. Code a function int sll_length(Link* sll) taking as input the head of an LSC and returning the length of the listwith an iterative algorithm. 

#include <stdio.h>
#include <stdlib.h>

typedef struct Link {
    //contents of struct:  you'll always have a type (i.e. float, int, Point [which could be the name of a struct you defined earlier in the code], etc...) and a (variable) name.
    int value;
    struct Link *next;  //hold the pointer to the next element of the chain

} Link;



int sll_length(Link* sll) {
    
    if (sll == NULL) {
        return 0;
    }
    
    int total = 1;
    
    Link* iterator = sll; //used to loop over the linked list nodes
    
    while(iterator->next != NULL) {
        
        total++;
        iterator = iterator->next;
    }
    
    return total;
}

int main() {
    //NEED TO ENTER MY UNIT TEST HERE, I.E. what each variable's value is so I can actually run the code.  It won't run otherwise.
}

//This is just for reference on how to link two nodes to create an SLL
//Node n1;
//n1.value = 3;
//Node n2;
//n2.value = 12;
// v v   linking n1 and n2 n1.next <- address(n2)
//n1.next = &n2
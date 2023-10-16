#include <stdio.h>
#include <stdlib.h>
//STEP 1)  This is creating the structure for your initial node.
typedef struct Entry {
    
    char* key;
    float value;
    struct Entry* next;  //Apparently when initiating the pointer w/i the struct you always need a "struct" there.
    
} Entry;

//Creating a function, which adds a new entry at the end of the linked list
Entry* add_entry_to_the_end(Entry* head, char* key, float value) {
    
    // Create a new entry
    Entry* newEntry = (Entry*)malloc(sizeof(Entry));
    
    // Assign data to the new entry
    newEntry->key = key;
    newEntry->value = value;
    newEntry->next = NULL; // It's the last node, so next is NULL

    // If the list is empty, make the new entry the head
    if (head == NULL) {
        return newEntry;
    }

    // Traverse the list to find the last node
    Entry* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Link the last node to the new entry
    current->next = newEntry;

    // Return the head of the updated list
    return head;
}

void test_main(){
    //it is like a main for testing !

  
//STEP 2)  This is creating the actual node, Node 1 or in this case ("Entry" 1) of our soon to be Linked List
 struct Entry* head = (struct Entry*)malloc(sizeof(struct Entry));
 //Assigning Data to the 1st node "Entry" that we just created in the line above
 head->value = 10.0;
 //Initiating the pointer "next" to NULL, which is the next step before we can create the 2nd node, because this will be the link between the two
 head-> next = NULL;
 
 //creating the 2nd node...that I'll end up linking the 1st node to.
 struct Entry* second = (struct Entry*)malloc(sizeof(struct Entry));
 //Assigning Data to the 2nd node "second" that we just created in the line above
 second->value = 20;
 //Initiating the pointer "next" to NULL, which will always be the value of the last pointer of the last node.
 second->next = NULL;
 
 
 //This is the actual LINKING STEP that chains the two (formerly) spearate nodes ("Entry" and "second") together.
 head->next = second;
 
 //Need to call the new function here...
// Testing the add_entry_to_the_end function
 head = add_entry_to_the_end(head, "New Entry", 30.0);
 // Display the linked list
 struct Entry* current = head;
 while (current != NULL) {
    printf("Key: %s, Value: %f\n", current->key, current->value);
    current = current->next;
    }
}
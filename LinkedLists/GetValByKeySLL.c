#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STEP 1)  This is creating the structure for your initial node.
typedef struct Entry {
//The char* key in the code represents a character array (string) that holds a key associated with each entry in the linked list. 
//This key is used to identify or label each entry and is typically a string.The char* key in the code represents a character array (string)
//that holds a key associated with each entry in the linked list. This key is used to identify or label each entry and is typically a string.    
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

//Create a function that returns the node matching key_to_search if it has been found and null otherwise. 
Entry* get_value_by_key(Entry* head, char* key_to_search) {
    // Traverse the list to find the node with the matching key
    Entry* current = head;
    while (current != NULL) {
    // to compare the keys
    if (strcmp(current->key,key_to_search) == 0) {
//only check to see if the key exists for the SLL
    
    //Key found, return the node
    return current;
    }
    
    current = current->next;
  }
  //if key isn't found we're returning NULL.
  return NULL;
}




void test_main(){
    //it is like a main for testing !

  
//STEP 2)  This is creating the actual node, Node 1 or in this case ("Entry" 1) of our soon to be Linked List
 struct Entry* head = (struct Entry*)malloc(sizeof(struct Entry));
 //Assigning Data to the 1st node "Entry" that we just created in the line above
 head->key = "First";
 head->value = 10.0;
 //Initiating the pointer "next" to NULL, which is the next step before we can create the 2nd node, because this will be the link between the two
 head-> next = NULL;
 
 //creating the 2nd node...that I'll end up linking the 1st node to.
 struct Entry* second = (struct Entry*)malloc(sizeof(struct Entry));
 //Assigning Data to the 2nd node "second" that we just created in the line above
 second->key = "Second";
 second->value = 20;
 //Initiating the pointer "next" to NULL, which will always be the value of the last pointer of the last node.
 second->next = NULL;
 
 
 //This is the actual LINKING STEP that chains the two (formerly) spearate nodes ("Entry" and "second") together.
 head->next = second;
 
 //Testing the add_entry_to_the_end function here...
 head = add_entry_to_the_end(head, "New Entry", 30.0);     
 
 // Testing the get_value_by_key function.
 Entry* result = get_value_by_key(head, "Second");
 
 // Display the result
    if (result != NULL) {
        printf("Key: %s, Value: %f\n", result->key, result->value);
    } else {
        printf("Key not found.\n");
    }
}
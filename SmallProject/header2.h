#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
 };

 // Adding a node at the end of a SLL
void add_node_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    
    temp = (struct node*) malloc(sizeof(struct node));
    temp->data = data; 
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }

    ptr->link = temp;
}

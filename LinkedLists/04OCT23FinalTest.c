#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Implementation of a Singly Linked List

//Def. structure for employee records
struct employeeNode {
    int empNumber;
    char empName[35];
    int empDesignation;
    struct employeeNode* next;
};

//Fnctn to create new employee records
struct employeeNode* createEmp(int empNumber, const char* empName, int empDesignation) {
    struct employeeNode* newEmp = (struct employeeNode*)malloc(sizeof(struct employeeNode));
    if (newEmp==NULL) {
        printf("Unable to allocate memory");
        exit(EXIT_FAILURE);
    }

    newEmp->empNumber = empNumber;
    strncpy(newEmp->empName, empName, sizeof(newEmp->empName)-1);

}

int main() {
head = malloc(sizeof(struct node));			
middle2 = malloc(sizeof(struct node));
middle3 = malloc(sizeof(struct node));
middle4 = malloc(sizeof(struct node));
last = malloc(sizeof(struct node));

head->data	=  10;					
middle2->data	=  23;
middle3->data	=  26;
middle4->data	=  29;
last->data	=  30;

}

int searchNode(struct node *head, int key)
{
    struct node *temp = head;
    int position = 1; //Initialize position to 1 (assuming 1-based index)
    //Traverse the linked list
    while (temp != NULL)
    {   //Check if the current node's data is equal to the key
        if(temp->data == key) {
            // Element found, return its position
            return position;
        }
        //Move to the next node
        temp = temp->next;
        position++;
    }
    //If the key isn't found, return -1 to indicate that the element is not found
    return -1;
}  
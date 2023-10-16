#include <stdio.h>
#include <stdlib.h>
//Queues need a front of the queue where dequeueing happens and  a rear where we add to the queue...
struct node *front = NULL, *rear = NULL; //So we're creating nodes/pointers that correspond to that.

void enqueue(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if(front == NULL && rear == NULL)  //Checking to see if the queue is empty.
        front = rear = newNode;
    else  // When queue is not empty execute this line of script below 
    {
        rear->next = newNode; //this is saying that rear next is = to newNode
        rear = newNode; //now we're making rear point to that newNode
    }
}

void dequeue()
{
    struct node *temp; //initializing the node and creating the memory address of the next node w/ the temp pointer

    if(front == NULL)
        printf("Queue is Empty.  Unable to perform dequeue\n");
    else
    {
        printf("Dequeued Element = %d\n",front->data);

        temp = front;
        front = front->next;

        if(front == NULL)
            rear = NULL;
        free(temp);
    }
}
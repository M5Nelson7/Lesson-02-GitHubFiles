#include <stdio.h>
#include <stdlib.h>

#define size 3
int arr[size];

int front = 0;
int rear = 0;  

void enqueue(int val)
{
    if(rear ==size)  //This checks to see if the queue is full, which it shouldn't be since up above we have rear = 0 and size = 3
        printf("Queue is Full\n");  //condition will fail, i.e. it won't print this unless the front or rear integers are greater than 0
    else
 {  //if condition failed so we're moving here to the else condition
    arr[rear] = val;  //We're adding the value "val" which is equal to 10 to the "rear" array
    rear++; //Here we're incrementing rear.  So this moves "rear" to the right and becomes 1.
    }
}   

int dequeue()      //Dequeue is basically like a delete function, deletes are always done at the front of the queue
{
    if(front == rear)
        printf("Queue is Empty.\n");
    else
    {
        printf("Dequeued element = %d\n",arr[front]);
        front++;    //this is important, remember that dequeue is always done at the front of the queue
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("%d ", dequeue());
    printf("%d ", dequeue());
    printf("%d ", dequeue());
    printf("%d ", dequeue());

    return 0;
}
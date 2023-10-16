#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void deleteNode(struct node **head, int key) {
    if(*head ==NULL)
        return;
    struct node *temp = *head;

    while(temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }

    if(temp == NULL)
        printf("Key Not Found\n");
    else if (temp == *head)
    {
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
    }
    else if(temp->next == NULL)
    {
        temp->prev->next = NULL;
        free(temp);
    }
    else
    {}
}
int searchNode(struct node *head, int key)
{
    struct node *temp = head;

    while(temp != NULL)
    {
        if(temp->data == key)
            return 1;
        temp = temp->next;
    }
    return -1;
}


int main () {
int x;

struct node *head,*middle2,*middle3,*middle4,*last;

//apparently you need to have the integers entered by the user prior to allocating memory w/ malloc() below.
printf("Enter Integer: ");
scanf("%d", &x);

head = malloc(sizeof(struct node));
middle2 = malloc(sizeof(struct node));
middle3 = malloc(sizeof(struct node));
middle4 = malloc(sizeof(struct node));
last = malloc(sizeof(struct node));

head->data=x;
middle2->data=x;
middle3->data=x;
middle4->data=x;
last->data=x;

head->prev = NULL;
head->next = middle2;
middle2->prev=head;
middle2->next=middle3;
middle3->prev=middle2;
middle3->next=middle4;
middle4->prev=middle3;
middle4->next=last;
last->prev=middle4;
last->next=NULL;

struct node *temp = head;

printf("Forward Transversal\n");
while(temp != NULL)
{
    printf("%d", temp->data);
    temp = temp->next;
}

    int key;
    scanf("%d",&key);

    printf("%d",searchNode(head, key));

    return 0;
}
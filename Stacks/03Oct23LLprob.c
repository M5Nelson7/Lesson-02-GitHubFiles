#include <stdio.h>
#include <stdlib.h>


//This creates/initializes the actual Node,
struct Node 
{
    int x;                        //Data of the Node
    struct Node *next;           //Pointer of struct Node type and this is used to refer to the next Node
}*startingNode;  //***UNSURE WHAT THIS POINTER IS FOR***, looks like it's a ptr for mem address of 'Node'
//listing these two global functions here, and then their logic is created below the main.
void createNodeList(int n); // function to create the list
void displayList();         // function to display the list

//Note:  Apparently you can struct multiple Nodes at once, i.e. "struct Node *head,*middle,*last"

////This is code added from a diff. tutorial that I frankensteined in to help search for an element w/i the array
int searchElement (struct Node *startingNode, int item)
{
  struct Node* current = startingNode;	// Initialize current
  int index = 1;
  // traverse till then end of the linked list
  while (current != NULL)
    {
      if (current->x == item)
	{
	  return index;
	}
      current = current->next;
      index++;
    }
  return -1;
}


//Main:
//Prints off some generic messages of what the code is doing and then uses the scan function with variable "n" 
//(which is really an input for the CreateNodeList function), then prints off a generic msg and finally calls the 'displayList' function to print the list
int main()
{   int item;
    int n;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of Nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    
    int index = searchElement (startingNode, item);

    if (index == -1)
        printf ("Item not found");
    else
        printf ("Item found at position: %d", index + 1);

    return 0;
}

//Function does a simple memory check then asks the user to input a xber for each Node.
void createNodeList(int n)
{
    struct Node *finalNode, *tmp;  //declaring multiple pointers
    int x, i;
    startingNode = (struct Node *)malloc(sizeof(struct Node));

    if(startingNode == NULL) //check whether the finalNode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the Node through keyboard

        printf(" Input data for Node 1 : ");
        scanf("%d", &x);
        startingNode->x = x;      // **unsure of what this is doing here **
        startingNode->next = NULL; // links the address field to NULL
        tmp = startingNode;
// Creating n Nodes and adding to linked list,  loop logic is there because it depends on user input asking for xber of Nodes in the Main section.
        for(i=2; i<=n; i++)
        {   // Not sure what this is doing, looks like it's calling finalNode which was also mentioned at the beginning of this function
            finalNode = (struct Node *)malloc(sizeof(struct Node));
            if(finalNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for Node %d : ", i);
                scanf(" %d", &x);
 
                finalNode->x = x;      // links the x field of finalNode with x
                finalNode->next = NULL; // links the address field of finalNode with NULL
 
                tmp->next = finalNode; // links previous Node i.e. tmp to the finalNode
                tmp = tmp->next; 
            }
        }
    }
}

//FUNCTION TO PRINT/DISPLAY LIST
void displayList()
{
    struct Node *tmp;
    if(startingNode == NULL)  //Simple data check.
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = startingNode;         //    ???
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->x);       // prints the data of current Node
            tmp = tmp->next;                     // advances the position of current Node
        }
    }
} 

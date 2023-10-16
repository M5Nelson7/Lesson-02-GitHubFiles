#include<stdio.h>
#include<stdlib.h>

//Consider an array of N elements in global memory.  Write C functions to:
//Reverse the order of the elements in an array.

int tab[5];

void reverseArray(int tab[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        int temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
    }
  
}

// Function to display elements of an array
void displayArray(int tab[], int size) {
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(){

tab[0]=1;
tab[1]=2;
tab[2]=3;
tab[3]=4;
tab[4]=5;


//int tab[]={1,2,3,4,5};
int size = sizeof(tab)/sizeof(tab[0]); //Nb of items
//printf("Nb of elements:%d\n",size);

//for(int i = size-1; i>=0;i--)

//printf("%d\n",tab[i]);

reverseArray(tab, size);
displayArray(tab, size);
//return 0;

}
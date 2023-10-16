#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Consider an array of N elements in global memory.  Write C functions to:
//Sort array in ascending order

//Declaration of Global Array
int tab[7];

// Sorting elements numerically, per Google this is called the "Bubble Sort method,"
//which supposedly is not the most efficient method but easier to understand for beginners.
int arraySort(int tab[], int size) {
for (int i = 0; i < size; ++i){
   for (int j = i + 1; j < size; ++j){
      if (tab[i] > tab[j]) {
         int temp = tab[i];
         tab[i] = tab[j];
         tab[j] = temp;
      }
    }
  }
}

// Function to display elements of an array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){ 
tab[0]=1;
tab[1]=2;
tab[2]=3;
tab[3]=4;
tab[4]=5;
tab[5]=2;
tab[6]=6;
tab[7]=3;
//bool sorted= true;

int size = sizeof(tab)/sizeof(tab[0]); //Nb of items
arraySort(tab,size);
displayArray(tab, size);

//if(sorted)
//printf("Array is sorted\n");
//else printf("Array is not sorted");



return 0;

}
#include<stdio.h>
#include<stdlib.h>

//Consider an array of N elements in global memory.  Write C functions to:
//Swap two particular elements at positions 1 and 2.
int tab[4];

int swapArray(int tab[]) {
    int temp = tab[1];
    tab[1] = tab[2];
    tab[2] = temp;
}

// Function to display elements of an array
//void displayArray(int tab[], int size) {
//    printf("Sum of Array: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", tab[i]);
//    }
//    printf("\n");
//}

int main(){

tab[0]=1;
tab[1]=2;
tab[2]=3;
tab[3]=4;
tab[4]=5;
//int size = sizeof(tab)/sizeof(tab[0]); //Nb of items
//printf("Nb of elements:%d\n",size);

//for(int i = size-1; i>=0;i--)
printf("Original Array order is as follows:  %d,%d,%d,%d,%d\n", tab[0], tab[1],tab[2],tab[3],tab[4]);
swapArray(tab);
//printf("%d\n",tab[i]);

printf("Array with swapped elements is as follows:  %d,%d,%d,%d,%d\n", tab[0], tab[1],tab[2],tab[3],tab[4]);
//displayArray(tab, size);
//return 0;


}
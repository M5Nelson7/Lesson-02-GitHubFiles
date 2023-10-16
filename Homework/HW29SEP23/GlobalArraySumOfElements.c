#include<stdio.h>
#include<stdlib.h>

//Consider an array of N elements in global memory.  Write C functions to:
//Sum each element in the array.

//declare global array
int tab[5];
int sumArray(int tab[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += tab[i];
    }
    return sum;
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

tab[4]=1;
tab[3]=2;
tab[2]=3;
tab[1]=4;
tab[0]=5;
//int tab[]={1,2,3,4,5};
int size = sizeof(tab)/sizeof(tab[0]); //Nb of items
//printf("Nb of elements:%d\n",size);

//for(int i = size-1; i>=0;i--)

//printf("%d\n",tab[i]);
int arraySum = sumArray(tab, size);
printf("Sum of all elements in the array is:  %d", arraySum);
//displayArray(tab, size);
//return 0;

}
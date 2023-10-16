#include <stdio.h>
#include <stdlib.h>

//Consider an array of N elements in global memory.  Write C functions to:
//Find the largest element in the array.

//declare global array
int tab[5];

int arrayMaximum(int t[], int size);

int main()
{

tab[4]=1;
tab[3]=2;
tab[2]=3;
tab[1]=4;
tab[0]=5;

    int size = sizeof(tab) / sizeof(tab[0]); // Nb of items7
    //int size1 = sizeof(tab1) / sizeof(tab1[0]); // Nb of items

    printf("Nb of elements:%d\n", size);

    int max = arrayMaximum(tab, size);
    //int min1 = arrayMinimum(tab1, size1);
    printf("The maximum of tab is %d\n", max);
    //printf("The minimum of tab1 is %d\n", min1);

    /*int min;
    min= tab[0];
    for(int i =1; i<size;i++){
        if(tab[i]<min)
        min=tab[i];
    }*/
    //printf("The minimal value of the array is %d\n", min);

    return 0;
}

int arrayMaximum(int t[], int size){

int max;
max = t[0];
for (int i = 1; i < size; ++i)
{
    if (t[i] > max)
        max = t[i];
}
return max;
}
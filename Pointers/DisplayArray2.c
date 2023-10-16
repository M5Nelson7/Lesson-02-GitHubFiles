#include <stdio.h>
int main(){

    int arr[5] = {10, 20, 30, 40, 15};
    int *ptr = arr;
    
    int size = sizeof(arr) / sizeof(int);
    
    for (int i = 0; i < size;i++){
        
            printf("%d, ", *ptr);
            ptr++;
    }
    return 0;
}

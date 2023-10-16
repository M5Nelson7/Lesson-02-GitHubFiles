#include <stdio.h>

int main() {
    int x;
    double y;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of variable x: %zu bytes\n", sizeof(x));
    printf("Size of variable y: %zu bytes\n", sizeof(y));

    return 0;
}

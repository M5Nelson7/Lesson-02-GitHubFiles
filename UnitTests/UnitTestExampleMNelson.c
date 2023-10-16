#include <stdio.h>

int simpleMultiplicationFunction(int a) {
    return (a*0);
    // ^^ basically if you switch out the zero in line 4 with any positive integer you can clearly see it prints "Not Working"
}
int unitTest() {
float actualResult = simpleMultiplicationFunction(5); {
    if (actualResult !=0 ) {
        printf("Not working");
    }
}
}

int main() {
  
  unitTest();
}
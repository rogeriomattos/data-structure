#include <stdio.h>

int main (){
    // x is allocating memory
    int x;

    // this statment is puting the value 1 in memory address
    x = 1;

    // y is receiving the memory address of x
    int *y = &x;

    printf("x = %d\n", x);
    printf("x = %d\n", y);

    //now this statment is puting the value 22 in memory adress of x, then now x value 22
    *y = 22;
    printf("x = %d\n", x);
    
}
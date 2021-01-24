#include <stdio.h>

void compareAddress (int *x, int *y){
    printf("x = %d  y = %d\n", x, y);

    if(x < y)
        printf("x is less than y");
    else if( x > y)
        printf("x is greater than y");
    else 
        printf("x is equals y");
}

int main() {
    int x;
    int y;

    compareAddress(&x, &y);
}

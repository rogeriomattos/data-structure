#include <stdio.h>

void doubleValue(int item){
    printf("double %d is %d\n", item, item * 2);
}

void forEach(int *array, int length, void (*callback)(int item)){
    int i;
    for(i = 0; i < length; i++)
        callback(i);
}

int main () {
    int x[4] = {1, 3, 5, 6};

    forEach(x, 4, doubleValue);
}
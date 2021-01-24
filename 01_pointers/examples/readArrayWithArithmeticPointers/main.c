#include <stdio.h>

int main (){
    int length = 2;
    int arr[length];

    int *el =  &arr[0];
    
    int i;

    for(i = 0; i < length; i++){
        scanf("%d", &(*(el + i))); 
    }
    printf("\nArray values\n");
    int j;
    for(j = 0; j < length; j++){
        printf("%d\n", arr[j]);
    }
}
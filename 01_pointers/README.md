# Pointers

### What are Pointers?
A pointer is a variable whose value is the address of another variable. 
In general, a normal variable, when created, reserves a space in the computer's memory to be able to store its values.
A pointer does nothing more than take the address of this memory that was reserved for the other variable.
The general form of a pointer variable declaration is:
```
type *var_name;
```

### Example in C
```c
#include <stdio.h>

int main (){
    int x;
    x = 1;

    int *y = &x;

    printf("x = %d\n", x);
    printf("x = %d\n", y);

    *y = 22;
    printf("x = %d\n", x);    
}
```

### Links to reference
https://youtu.be/r7f-aR7vgg0
https://youtu.be/AdyGxhYWhoM

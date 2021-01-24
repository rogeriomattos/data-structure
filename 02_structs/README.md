# Structs

### What are Structs?

### Why use Structs?

### Example in C
[Execute this code here](/02_structs/_definition)
```c
#include <stdio.h>

typedef struct {
    int age;
    float height;
    char name[];
} Person;


int main (){
    Person x;
    
    x.age = 18;
    x.height = 1.80;
    strcpy(x.name, "Rogerio");

    printf("%s is %i years old and is %.2f tall",x.name, x.age, x.height);
}
```

### Links to reference
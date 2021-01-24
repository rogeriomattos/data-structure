# Structs

### What are Structs?
Structs are customizable data types. Structs allows that a user to group any data in unique variable.

### Why use Structs?
Usually structures are used to stored any data of same entity. For example, You need to storage informations of any people, as name, age and height, so instead of  creating 3 variable to represtent the features of a person, You build a structure Person that contains all its features. Like the example below.

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

[C - Structures](https://www.tutorialspoint.com/cprogramming/c_structures.htm)

[Estrutura de Dados - Aula 2 - Criação de uma primeira estrutura](https://youtu.be/x2DwllnUZDg)

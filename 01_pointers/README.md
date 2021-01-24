# Pointers

### What are Pointers?
A pointer is a variable whose value is the address of another variable. 
In general, a normal variable, when created, reserves a space in the computer's memory to be able to store its values.
A pointer does nothing more than take the address of this memory that was reserved for the other variable.
The general form of a pointer variable declaration is:
```
type *var_name;
```

Type is the type of variable that the pointer will catch memory address. The asterisk * is used to indicate that we want to create a pointer.

### Why use pointers
**Performance**: to use pointers decreases the space allocated in memory, for example, when we pass a variable as parameter to a fuction, this parameter will copy our variable, but if we pass the memory address to function, this value will not be copied but referenced.


### Example in C
[Execute this code here](/01_pointers/_definition)
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

First of all we create a normal variable called `x`. When we are writing `int x;` the language is reserving a memory space of type integer for to variable x. But in this moment it still don't put any value in this address. It only put value in address when we attribute a value to variable as in line `x = 1;`.

In line `int *y = &x;` we are declaring a pointer that it receives as value the memory address of variable `x`.

Even, when we print `x` in first `printf` it will print the value `1` and when we print `y` it will print the address memory of `x`.

With this in mind, we can to manipulate freely the memory address of `x`, for example at line `*y = 22;`, this statement is assigning the value `22` into memory address of `x`,
thus making `x` have the value of `2`.


### Links to reference
[Pointers in C / C++ [Full Course]](https://youtu.be/zuegQmMdy8M)

[Programar em C - Introdução Ponteiros(Teoria) - Aula 60](https://youtu.be/r7f-aR7vgg0)

[Programar em C - Introdução Ponteiros(Prática) - Aula 61](https://youtu.be/AdyGxhYWhoM)

[Ponteiro em C: Aritmética de ponteiro](https://www.embarcados.com.br/ponteiro-em-c-aritmetica-de-ponteiro/)

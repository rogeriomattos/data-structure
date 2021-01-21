#include <stdio.h>

typedef struct {
    int age;
    float height;
} Person;


int main (){
    Person person1;
    
    person1.age = 18;
    person1.height = 1.80;

    printf("Person1 is %i years old and is %.2f tall", person1.age, person1.height);
}
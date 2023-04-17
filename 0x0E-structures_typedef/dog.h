#include <stdio.h>
#include <stdlib.h>

/*
 *  Poppy
 *  Struct add elemnets
 */
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog;

int main() {
    dog my_dog;
    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s  , and I am %.1f , Owner %s ", my_dog.name, my_dog.age, my_dog.owner);
    return (0);
}

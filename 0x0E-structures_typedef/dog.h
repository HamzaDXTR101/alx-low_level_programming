#include <stdio.h>
#include <stdlib.h>

/*
 *  Poppy
 *  Struct add elemnets 
 */
struct dog{
	char * name ;
	float age ;
	char * owner ;
};

int main(){
	struct dog dog ;
	dog.name = "Poppy";
	dog.age = 3.5;
	dog.owner = "Bob";
	printf("My name is %s  , and I am %.1f , Owner %s ",dog.name,dog.age,dog.owner);
	return (0);
}

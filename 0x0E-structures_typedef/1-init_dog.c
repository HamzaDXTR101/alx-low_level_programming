#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - Initializes a dog structure
 * @d : A dog structure.
 * @name: This  name of the dog.
 * @age: This age of the dog.
 * @owner: This owner of the dog.
 *
 * Return : nothing !!!
 */
 
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

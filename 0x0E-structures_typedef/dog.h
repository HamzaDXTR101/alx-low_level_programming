#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attributes
 * @name: hIS name of the dog.
 * @age: His age of the dog.
 * @owner: His  owner of the dog.
 * Description: The attributes of  dog.
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

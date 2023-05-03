#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates Memory Using Malloc
 * @b: Number Bytes To Allocate
 *
 * Return: A pointer to a the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}


#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: takes in an unsigned integer
 * Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *val;

	val = malloc(b);

	if (val == NULL)
	{
		exit(98);
	}

	return (val);
}

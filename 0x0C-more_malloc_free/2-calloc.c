#include "main.h"
#include <stdlib.h>
/**
 * set_memory- prints buffer in hexa
 * @s: string
 * @b: write
 * @n: size of string
 * Return: Pointer to string.
 */
char *set_memory(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - function that allocates memory from an array using malloc
 * @nmemb: number of elements to be allocated
 * @size: size of the elements
 * Return: pointer to the allocated memory of NUll if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *string;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	string = malloc(nmemb * size);
	if (string == NULL)
	{
		return (NULL);
	}
	set_memory(string, 0, nmemb * size);

	return (string);
}

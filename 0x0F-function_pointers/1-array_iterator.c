#include "function_pointers.h"
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array);
			i++;
		}
	}
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	int sum;

	sum = 0;

	unsigned int i;

	unsigned int x;

	for (i = 0; i < n; i++)
	{

		x = va_arg(args, int);

		sum += x;
	}

	va_end(args);

	return (sum);
}

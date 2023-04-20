#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	int sum;

	sum = 0;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		int x;

		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);

	return (sum);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

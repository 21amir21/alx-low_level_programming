#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	int sum;

	sum = 0;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			int j;

			j = 0;

			while (argv[i][j] != '\0')
			{
				if (isdigit(argv[i][j]))
				{
					j++;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("%d\n", 0);
	}

	return (0);
}

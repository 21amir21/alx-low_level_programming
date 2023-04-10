#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cent, counter;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	counter = 0;
	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
			counter += 1;
		}
		else if (cent >= 10)
		{
			cent -= 10;
			counter += 1;
		}
		else if (cent >= 5)
		{
			cent -= 5;
			counter += 1;
		}
		else if (cent >= 2)
		{
			cent -= 2;
			counter += 1;
		}
		else
		{
			cent -= 1;
			counter += 1;
		}
	}
	printf("%d\n", counter);
	return (0);
}

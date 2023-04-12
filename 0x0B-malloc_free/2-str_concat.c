#include "main.h"
#include <stdlib.h>
/**
 * get_length - function to count string length
 * @str: takes in string
 * Return: returns string length
 */
int get_length(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		continue;
	}

	return (l);
}
/**
 * str_concat - concats two strings
 * @s1: takes in string
 * @s2: takes in string
 * Return: returns a pointer to concat, followed by null
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		l1 = get_length(s1);
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		l2 = get_length(s2);
	}

	concat = (char *)malloc((l1 * sizeof(char)) + (l2 * sizeof(char)) + 1);

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';
	return (concat);
}

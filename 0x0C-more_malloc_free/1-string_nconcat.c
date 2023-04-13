#include "main.h"
#include <stdlib.h>

/**
 * get_length - function to count string length
 * @str: takes in string
 * Return: returns string length
 */
int get_length(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}

	return (i);
}

/**
 * string_nconcat - function that concats two strings
 * @s1: takes in one string
 * @s2: takes in another string
 * @n: takes the total caracter to concat
 * Return: returns a new string up to the num passed for str2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, str1 = 0, str2 = 0;

	if (s1 == NULL)
		s1 = "";
	else
		str1 = get_length(s1);
	if (s2 == NULL)
		s2 = "";
	else
		str2 = get_length(s2);
	if (n >= str2)
		n = str2;

	new_str = malloc((str1 * sizeof(char)) + n + 1);
	if (new_str == NULL)
		return ('\0');

	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	if (str2 < n)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			new_str[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++, i++)
		{
			new_str[i] = s2[j];
		}
	}
	new_str[i] = '\0';
	return (new_str);
}

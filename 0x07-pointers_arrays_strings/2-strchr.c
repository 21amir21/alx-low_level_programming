#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
int i;
i = 0;
while (*s != '\0')
{
if (s[i] != c)
{
s++;
}
else 
{
return (s);
}
}
return (s);
}

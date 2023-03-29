#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer to char (string)
 *
 * Return: n (string) same string but uppercase
 */
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 97 && n[i] <= 122)
{
n[i] -= 32;
}
i++;
}
return (n);
}

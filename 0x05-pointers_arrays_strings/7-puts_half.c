#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int ilongy = 0;
char *y = str;
int j;
int n;
while (*y != '\0')
{
y++;
ilongy++;
}
n = (ilongy - 1) / 2;
if (ilongy % 2 != 0)
{
for (j = (ilongy / 2); j <= n; j++)
{
_putchar(str[j]);
}
}
else
{
for (j = (ilongy / 2); j <= ilongy; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}

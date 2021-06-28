#include "holberton.h"
/**
 * _strlen - returns the length of a string
 *@s: string
 *Return: length of string
 */
int _strlen(char *s)
{
char *p = s;

while (*s)
{
s++;
}
return (s - p);
}
/**
 * print_rev - prints the reverse of a string
 * @s: string
 */
void print_rev(char *s)
{
int length = _strlen(s);

while (length--)
{
_putchar(*(s + length));
}
_putchar('\n');
}

#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: llength of string
 */
int _strlen(char *s)
{
int length = 0;

while (*s)
{
s++;
length++;
}
return (length);
}
/**
 * puts2 - prints one char out of 2 of a string followed by a new line
 * @str: string
 */
void puts2(char *str)
{
int i;
int length = _strlen(str);

for (i = 0; i < length; i += 2)
{
_putchar(*(str + i));
}
_putchar('\n');
}

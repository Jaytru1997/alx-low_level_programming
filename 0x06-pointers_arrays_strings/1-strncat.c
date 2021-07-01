#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: return the length
 */
int _strlen(char *str)
{
int length = 0;

while (*str)
{
str++;
length++;
}
return (length);
}
/**
 * _strncat - conctenates two strings
 * @dest: destination pointer
 * @src: pointer to a string
 * @n: amount to be concatenated
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
char *cat  = dest + _strlen(dest);
int length;

if (n > _strlen(src) + _strlen(dest))
{
length = _strlen(dest) + _strlen(src);
}
else
{
length = _strlen(dest) + n;
}
while (*src && n > 0)
{
*cat += *src;
src++;
cat++;
n--;
}
if (n > 0)
{
*cat += '\0';
}
cat -= (length);
*dest = *cat;
return (cat);
}

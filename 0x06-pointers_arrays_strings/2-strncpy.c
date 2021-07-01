#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: destination of copy
 * @src: source of copy
 * @n: bytes to be copied
 * Return: return copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;

while (*src && n--)
{
*dest++ = *src++;
}
if (!*src)
{
while (*dest && n--)
{
*dest++ = 0;
}
}
return (ptr);
}

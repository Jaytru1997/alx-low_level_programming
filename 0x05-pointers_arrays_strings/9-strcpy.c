#include "holberton.h"
/**
 * *_strcpy - copies the string from src to dest
 * including the terminating null byte
 * @dest: string copy
 * @src: string to be copied
 * Return: pointer to new copied string
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

while (*src)
{
*dest++ = *src++;
}
*dest = 0;
return (ptr);
}

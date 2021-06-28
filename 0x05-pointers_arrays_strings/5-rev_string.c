#include "holberton.h"
/**
 * _strlen - returns the length a string
 * @s: string
 * Return: length
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
 * rev_string - prints the reverse of a string
 * @s: string
 */
void rev_string(char *s)
{
int length = _strlen(s);
int counter = 0;
char tmp;

while (counter < length / 2)
{
tmp = *(s + counter);
*(s + counter) = *(s + length - 1 - counter);
*(s + length - 1 - counter) = tmp;
counter++;
}
}

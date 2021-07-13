#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
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
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: copied string
 */
char *_strdup(char *str)
{

	char *copy, *_copy;

	if (!str)
		return (NULL);
	copy = malloc((_strlen(str) + 1) * sizeof(char));
	/*incase there is insufficent memory*/
	if (!copy)
		return (NULL);
	_copy = copy;

	while (*str)
	{
		*_copy = *str;
		str++;
		_copy++;
	}
	*_copy = '\0';
	return (copy);
}

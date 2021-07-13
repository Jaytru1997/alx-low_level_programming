#include <stdlib.h>
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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *cat, *_cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	cat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (!cat)
		return (NULL);
	_cat = cat;
	while (*s1)
	{
		*_cat = *s1;
		_cat++;
		s1++;
	}
	while (*s2)
	{
		*_cat = *s2;
		_cat++;
		s2++;
	}
	*_cat = '\0';
	return (cat);
}

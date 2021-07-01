#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to
 * uppercase
 * @s: string to be passed
 * Return: capitalized string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (ptr);
}


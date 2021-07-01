#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int _intlen(unsigned long int num)
{
	int length = 0;

	while (num)
	{
		length++;
		num /= 10;
	}
	return (length);
}
/**
 *
 *
 *
 */
int _strlen(char *string)
{
	int length = 0;

	while (*string)
	{
		length++;
		string++;
	}
	return (length);
}
/**
 *
 *
 *
 *
 */
unsigned long int map2int(char *n)
{
	unsigned long int num = 0;

	while (*n)
	{
		num = num * 10 + (*n - 48);
		n++;
	}
	return (num);
}
/**
 *
 *
 *
 */

char *map2char(unsigned long int num)
{

	char *a = malloc(_intlen(num) * sizeof(char));
	char *b = a;

	while (num)
	{
		*a = num % 10;
		num /= 10;
		a++;
	}
	*a = '\0';
	return (b);
}

/**
 *
 *
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long int sum = map2int(n1) + map2int(n2);

	if (_intlen(sum) <= size_r)
	{
		*r = sum;
		return (map2char(sum));
	}
	else
	{
		return (0);
	}
}

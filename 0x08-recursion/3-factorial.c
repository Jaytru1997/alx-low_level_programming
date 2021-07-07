#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input number
 * Return: factorial of input
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}

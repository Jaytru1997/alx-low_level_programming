#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first input unsigned long
 * @m: second input unsigned long
 * Return: how many bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int flip = 0;

	while (x)
	{
		if (1 & x)
			flip++;
		x = x >> 1;
	}

	return (flip);
}

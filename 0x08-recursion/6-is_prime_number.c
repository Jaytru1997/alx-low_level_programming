#include "holberton.h"

/**
 * isPrime - helper function for is_prime_number
 * @n: input number
 * @i: iterator
 * Return: 1 if true, 0 if false
 */
int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrime(n, i - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input number
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (isPrime(n, n - 1));
}

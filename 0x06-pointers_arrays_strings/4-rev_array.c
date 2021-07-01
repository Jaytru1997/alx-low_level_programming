#include "holberton.h"
/**
 * swap_int - swaps the value of two integers
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
*a = *b + *a;
*b = *a - *b;
*a = *a - *b;
}
/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
int counter = 0;

while (counter < n / 2)
{
/*if you have an  array of n elements the last element is at n - 1*/
swap_int(a + counter, a + (n - counter - 1));
counter++;
}
}

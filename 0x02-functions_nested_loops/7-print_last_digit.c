#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: lastdigit
 */
int print_last_digit(int n)
{
int lastDigit;

lastDigit = _abs((n % 10));
_putchar(lastDigit + 48);
return (lastDigit);
}

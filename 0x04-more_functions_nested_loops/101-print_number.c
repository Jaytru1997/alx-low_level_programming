#include "holberton.h"
/**
 * powB - raises the number base to power power
 * @base: the base
 * @power: the power
 * Return: return the answer
 */
int powB(unsigned int base, int power)
{
int i, product = 1;

for (i = 0; i < power; i++)
{
product = product * base;
}
return (product);
}
/**
 * numLength - returns the length of string
 * @num: operand number
 * Return: number of digits
 */
int numLength(unsigned int num)
{
int length = 0;

if (!num)
{
return (1);
}
while (num)
{
num = num / 10;
length += 1;
}
return (length);
}
/**
 * printnchar - Print a number of any digit
 * @n: takes an input number
 */
void printnchar(int n)
{
int length, j, k, digit1, tmp2;
unsigned int num;

if (n < 0)
{
n *= -1;
_putchar('-');
}
num = n;
length = numLength(num), j = length - 1, k, digit1, tmp2;
if (num == 0)
{
_putchar(48);
}
else
{
while (j >= 0)
{
if (num % powB(10, j) == 0 && j != 0)
{
_putchar(48 + num / powB(10, j));
for (k == j; k > 0; k--)
{
_putchar(48);
}
j = -1;
}
else
{
digit1 = num / powB(10, j);
_putchar(digit1 + 48);
tmp2 = num;
num -= powB(10, j) * digit1;
if (numLength(tmp2) - numLength(num) == 2)
{
_putchar(48);
j--;
}
j--;
}
}
}
}

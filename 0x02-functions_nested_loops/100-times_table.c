#include "holberton.h"
/**
 * powB - raises the number to power power
 * @base: the base
 * @power: the power
 * Return: return the answer
 */
int powB(int base, int power)
{
int i, product = 1;

for (i = 0; i < power; i++)
{
product = product *base;
}
return (product);
}
/**
 * numLength - returns the length of string
 * @num: operand number
 * Return: number of digits
 */
int numLength(int num)
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
 *putnchar - prints a number of any digit
 *@num: takes an input number
 */
void putnchar(int num)
{
int length = numLength(num), j = length - 1, k, tmp2, digit1;

if (num == 0)
_putchar(48);
else
{
while (j >= 0)
{
if (num % powB(10, j) == 0 && j != 0)
{
_putchar(48 + num / powB(10, j));
for (k = j; k > 0; k--)
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
/**
 * print_times_table - print multiplication table for factor of n
 * @n: interger n
 */
void print_times_table(int n)
{
int i, j, product, m;

if (n < 16 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;
putnchar(product);
if (j != n)
{
_putchar(',');
for (m = 0; m < 4 - numLength(i * (j + 1)); m++)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
}

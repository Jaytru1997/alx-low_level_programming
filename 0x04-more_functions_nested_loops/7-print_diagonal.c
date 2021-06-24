#include "holberton.h"
/**
 * print_diagonal - print a diagonal line of  arg length
 * @n: length of line
 */
void print_diagonal(int n)
{
int i = 0, j;

if (n > 0)
{
while (i < n)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}

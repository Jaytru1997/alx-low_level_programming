#include "holberton.h"
/**
 * more_numbers -prints 10 times the numbers 0-14
 */
void more_numbers(void)
{
int i, j;

for (i = 48; i < 58; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
{
_putchar(j / 10 + 48);
}
_putchar(j % 10 + 48);
}
_putchar('\n');
}
}

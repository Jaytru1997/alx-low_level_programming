#include <stdio.h>

/**
 * main - create two pairs of numbers that do not repeat
 * Return: 0
 */
int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
if (i != j)
{
putchar(i / 10 + 48);
putchar(i % 10 + 48);
putchar(' ');
putchar(j / 10 + 48);
putchar(j % 10 + 48);
if (i * 100 + j != 9899)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

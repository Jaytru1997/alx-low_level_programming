#include <stdio.h>

/**
 * main - prints out all the numbers under 10 with a ,
 * Return: 0
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

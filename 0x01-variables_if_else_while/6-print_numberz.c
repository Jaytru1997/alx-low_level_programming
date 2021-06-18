#include <stdio.h>

/**
 * main - prints out all numbers under 
 * without using any char variables
 * Return: 0
 */
int main(void)
{
int i = 12;

do
{
putchar(i);
i++;
}while (i < 58);
putchar('\n');
return (0);
}

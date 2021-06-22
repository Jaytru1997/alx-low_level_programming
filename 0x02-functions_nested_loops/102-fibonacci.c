#include "holberton.h"
#include <stdio.h>
/**
 * main - prints first 50 numbers of the fibonacci series
 * Return: 0
 */
int main(void)
{
int i, j = 50;
long fib1 = 1, fib2 = 2, next;

for (i = 0; i < j; i++)
{
if (i == 49)
printf("%lu", fib1);
else
{
printf("%lu, ", fib1);
next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}
}
printf("\n");
return (0);
}

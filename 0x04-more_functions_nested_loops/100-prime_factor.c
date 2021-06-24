#include "holberton.h"
#include <stdio.h>
/**
 * main - program prints out the highest prime
 * Return: 0
 */
int main(void)
{
int i = 2;
long n = 612852475143;

while (i < n)
{
while (n % i == 0)
{
if (n == i)
{
break;
}
n /= i;
}
i++;
}
printf("%lu\n", n);
return (0);
}

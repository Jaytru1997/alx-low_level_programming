#include "holberton.h"
/**
 * mapint - maps a character to its integer form
 * @a: character to be mapped
 * Return: the integer version of the char
 */
int mapint(char a)
{
if (a >= 48 && a <= 57)
{
return ((int)a - 48);
}
return (0);
}
/**
 * isDigit - returns true if i is a number
 * @i: integer i
 * Return: true if number, false if not number
 */
int isDigit(char i)
{
return (i >= '0' && i <= '9');
}
/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: returns parsed integer
 */
int _atoi(char *s)
{
unsigned int num = 0, sign = 1, started = 0;

while (*s)
{
if (started && !isDigit(*s))
{
break;
}
if (*s == '-')
{
sign *= -1;
}
if (isDigit(*s))
{
started = 1;
num = num * 10 + mapint(*s);
}
s++;
}
return (sign *num);
}

#include <stdio.h>

/**
 * main - prints out the alphabets in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}
a = 'A';
while (a <= 'Z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}

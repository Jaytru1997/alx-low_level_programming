#include <stdio.h>
/**
 * main - prints sum of fibonacci numbers under 4,000,000 & divisible by 2
 * Return: 0
 */
int main(void)
{
long fib1 = 1, fib2 = 2, sum = fib2, next;

while (fib2 < 4000000)
{
next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
sum += (fib2 % 2 == 0) ? fib2 : 0;
}
printf("%li\n", sum);
return (0);
}

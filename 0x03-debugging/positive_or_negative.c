#include "holberton.h"
/**
 * positive_or_negative - returns + integer or - integer
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}

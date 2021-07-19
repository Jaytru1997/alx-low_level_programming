#include <stdlib.h>

/**
 * print_dog - prints elements of struct dog
 * @d: struct dog
 * Return: o if true, null if null
 */
void print_dog(struct dog *d)
{
if (!d)
{
return;
}
printf("Name: %s\n", d->name ? d->name : ("nil"));
printf("Age: %d\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : ("nil"));
}

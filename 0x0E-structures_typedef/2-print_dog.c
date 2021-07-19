#include "dog.h"

/**
 * print_dog - prints elements of struct dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %d\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}

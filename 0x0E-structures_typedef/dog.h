#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - new struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: true
 */

typedef struct dog
{
char *name;
float age;
char *owner;
}
my_dog;

int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);
char *_strdup(char *str);

#endif

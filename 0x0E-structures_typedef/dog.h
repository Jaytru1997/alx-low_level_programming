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
dog_t;

int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);

#endif

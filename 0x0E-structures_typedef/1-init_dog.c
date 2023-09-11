#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point
 * @d: first 
 * @name: dog name
 * @age: dog age
 * @ownwer: dog owner
 * Return: always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

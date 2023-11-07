#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize strct dog type
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: dog age
 * @owner: owner of the dog
 *
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

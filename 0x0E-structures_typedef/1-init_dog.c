#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function to initialize dog variables
 *
 * @d: address of dog
 *
 * @name: name of dig
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 * Return: Void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

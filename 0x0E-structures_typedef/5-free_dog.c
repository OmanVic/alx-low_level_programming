#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function to clear members of a structure
 *
 * @d: pointer to variable d
 *
 * Return: Void
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

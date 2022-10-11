#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that create a copy of new dog
 *
 * @name: pointer to variable name
 *
 * @age: pointer to variable age
 *
 * @owner: pointer to variable owner
 *
 * Return: pointer new_dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, m;
	dog_t *dog1;

	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->name = malloc(i * sizeof(char));
	if (dog1->name == NULL)
	{
		free(dog1->name);
		return (NULL);
	}
	for (m = 0; m <= i; m++)
	{
		dog1->name[m] = name[m];
	}
	dog1->age = age;
	dog1->owner = malloc(j * sizeof(char));
	if (dog1->owner == NULL)
	{
		free(dog1->owner);
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (m = 0; m <= j; m++)
	{
		dog1->owner[m] = owner[m];
	}
	return (dog1);
}

#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: one of the member variable of the new created dog strcut
 * @age: one of the member variable of the new created dog strcut
 * @owner: one of the member variable of the new created dog strcut
 *
 * Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

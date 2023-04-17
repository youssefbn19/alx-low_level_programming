#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog data
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog data pointer. NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);

}

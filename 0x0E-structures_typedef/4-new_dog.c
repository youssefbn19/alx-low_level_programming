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
	dog_t *d;
	int i, len_name, len_owner;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (*(name + i))
		i++;
	len_name = i;

	i = 0;
	while (*(owner + i))
		i++;
	len_owner = i;

	d->name = malloc(len_name * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		*(d->name + i) = *(name + i);

	d->owner = malloc(len_owner * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < len_owner; i++)
		*(d->owner + i) = *(owner + i);

	d->age = age;
	
	return (d);

}

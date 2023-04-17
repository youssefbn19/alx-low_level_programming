#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog structure data from a memory allocate
 *
 * @d: dog structure data
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

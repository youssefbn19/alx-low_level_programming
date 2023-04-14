#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 *
 * @ptr: previous memory allocated pointer
 * @old_size: previous memory allocated size
 * @new_size: new memory allocatde size
 *
 * Return: pointer to the new memory allocate block.
 * NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *cast_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	cast_ptr = ptr;

	for (i = 0; i < old_size; i++)
		*(new_ptr + i) = *(cast_ptr + i);

	free(ptr);
	return (new_ptr);
}

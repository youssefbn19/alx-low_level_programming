#include <stdlib.h>
/**
 * malloc_checked - create an allocate memory space
 *
 * @b: allocated memory size
 *
 * Return: a pointer to the allocated memory;
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

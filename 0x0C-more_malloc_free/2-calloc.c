#include <stdlib.h>
/**
 * _calloc - create allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: byte size of the elements
 *
 * Return: pointer to the allocated memory. NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	ptr = malloc(b);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
		*(ptr + i) = 0;

	return (ptr);
}

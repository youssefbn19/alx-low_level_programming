#include <stdlib.h>
/**
 * create_array -  creates an array of chars with a specific char
 *
 * @size: size of the array
 * @c: the specific char
 *
 * Return: a char pointer if success, and NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	char_array = malloc(sizeof(char) * size);

	if (char_array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		char_array[i] = c;
		i++;
	}

	return (char_array);
}

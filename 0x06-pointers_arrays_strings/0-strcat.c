#include "main.h"
/**
 *_strcat - contact two strings
 *
 *@dest: first string
 *@src: second string
 *
 *Return: Pointer to `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
		j++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	dest[j + i] = '\0';

	return (dest);

}

#include "main.h"
/**
 *_strncat - contact two strings
 *
 *@dest: first string
 *@src: second string
 *@n: integer number
 *
 *Return: pointer to string 'dest' argument
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;

	while (dest[j] != '\0')
		j++;

	for (i = 0; (i < n && src[i] != '\0')  ; i++)
		dest[j + i] = src[i];

	dest[j + i] = '\0';

	return (dest);
}

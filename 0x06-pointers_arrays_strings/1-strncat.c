#include "main.h"
/**
 *_strncat - contact two strings
 *
 *@dest: first string
 *@src: second string
 *@n: integer number
 *
 *Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	for (i = 0; i < sizeof(dest); i++)
	{
		if (dest[i] == '\0')
			break;
		len++;
	}
	for (i = 0; (i < n && src[i] != '\0'); i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';
	return (dest);
}

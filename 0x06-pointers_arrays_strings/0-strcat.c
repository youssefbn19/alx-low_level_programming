#include "main.h"
/**
 *_strcat - contact two strings
 *
 *@dest: first string
 *@src: second string
 *
 *Return: string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	for (i = 0; i < sizeof(dest); i++)
	{
		if (dest[i] == '\0')
			break;
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';
	return (dest);
}

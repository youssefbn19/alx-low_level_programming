#include "main.h"
/**
 *_strlen -  length of a string
 *@s: character pointer
 *Return: the length of a giving string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

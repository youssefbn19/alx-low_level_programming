#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: The number of s2 characters to use
 *
 * Return: a pointer which contains concatenation of s1 and s2
 * NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	unsigned int size1, size2, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = 0;
	while (*(s1 + size1))
		size1++;

	size2 = 0;
	while (*(s2 + size2))
		size2++;

	len = n >= size2 ? size2 : n;
	str = (char *)malloc((size1 + len + 1) *  sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(str + i) = *(s1 + i);

	for (j = 0; j < len; j++)
	{
		*(str + i) = *(s2 + j);
		i++;
	}
	*(str + i) = '\0';

	return (str);
}

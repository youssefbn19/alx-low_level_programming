#include <stdlib.h>
/**
 * str_concat - concatenates two strings using malloc
 *
 * @s1: first string
 * @s2: second string
 *
 *Return: return a pointer of a new allocated space
 *of the s1 and s2 concatenates, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, size1, size2;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	size1 = size2 = 0;
	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	str = malloc(sizeof(char) * (size1 + size2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		str[i] = s1[i];

	for (i = 0; i < size2; i++)
		str[size1 + i] = s2[i];

	return (str);

}

#include <stdio.h>
/**
 *string_toupper - convert a string to uppercase
 *
 *@s: string to convert
 *
 *Return: the string argument `s` to uppercase
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		i++;
	}

	return (s);
}

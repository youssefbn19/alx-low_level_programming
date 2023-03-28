#include "main.h"
/**
 *rev_string - reverse a string
 *@s: character pointer
 */
void rev_string(char *s)
{
	int i, len, j, swap;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	j = 0;
	for (i = len; i >= j; i--)
	{
		swap = s[i - 1];
		s[i - 1] = s[j];
		s[j] = swap;
		j++;
	}
}

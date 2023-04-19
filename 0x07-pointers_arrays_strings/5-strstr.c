#include <stdio.h>
/**
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{
		if (haystack[i] == '\0' && needle[i] != '\0')
			return (0);

		if (needle[i] == haystack[i])
			continue;

		haystack++;
		i++;
	}
	
	if (*haystack == '\0')
		return (0);

	return (haystack);
}	

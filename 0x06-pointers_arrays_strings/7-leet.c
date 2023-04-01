#include <stdio.h>
/**
 *leet - encodes a string into 1337
 *
 *@s: string
 *
 *Return: encoded string `s`
 */
char *leet(char *s)
{
	int i, j;
	char leet_char[] = "aAeEoOtTlL";
	char leet_num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet_char[j] != '\0'; j++)
		{
			if (s[i] == leet_char[j])
				s[i] = leet_num[j];
		}
	}

	return (s);
}

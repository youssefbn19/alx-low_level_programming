/**
 *_strchr - locates a character in a string
 *
 *@s: the string that search in
 *@c: the character to be searched for
 *
 *Return: a pointer to the first occurrence of the `c` in `s`,
 *NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	return (0);
}

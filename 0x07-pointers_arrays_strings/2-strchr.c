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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}

	if (s[i] == '\0')
		return (0);

	return (s + i);
}

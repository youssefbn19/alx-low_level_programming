/**
 *_strpbrk - searches a string for any of a set of bytes
 *
 *@s: string
 *@accept: substring
 *
 *Return: a pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	}

	return (0);
}

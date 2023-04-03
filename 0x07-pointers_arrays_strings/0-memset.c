/**
 *_memset - fills memory with a constant byte character;
 *
 *@s: string to fills with the constant byte
 *@b: constant byte character
 *@n: number of bytes
 *
 *Return: a pointer to the memory area `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 *_memcpy - copies memory area;
 *
 *@dest: string copies with the `src`
 *@src: source string
 *@n: number of bytes
 *
 *Return: a pointer to the memory area `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

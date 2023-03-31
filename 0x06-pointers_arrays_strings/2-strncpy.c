/**
 *_strncpy - Copy a string
 *
 *@dest: first string pointer
 *@src: second string pointer
 *@n: integer number
 *
 *Return: edited string pointer `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

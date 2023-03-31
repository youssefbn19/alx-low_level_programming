/**
 *
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = sizeof(dest);
	
	for (i = 0; i < n; i++)
		dest[i] = src[i];	

	
	return (dest);
}

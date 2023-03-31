/**
 *_strcmp - compare two string
 *
 *@s1: first string
 *@s2: second string
 *
 *Return: return positive integer if s1 > s2 and negative integer otherwise
 *and 0 if they are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

/**
 *cap_string - capitalizes all words of a string.
 *
 *@s: string to capitalize its words
 *
 *Return: return `s` string argument in capitalize
 */
char *cap_string(char *s)
{
	char sprts[] = " \t\n,;.!?\"(){}";
	int i, j;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; sprts[j] != '\0'; j++)
		{
			if (s[i] == sprts[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] -= 32;
			}
		}
	}

	return (s);
}

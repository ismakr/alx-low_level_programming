/**
 * _strpbrk - Returns a pointer to the first
 * occurrence in str1 of any of the characters
 * that are part of str2,
 * or a null pointer if there are no matches
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * Return: A pointer to the first occurrence in str1
 * of any of the characters that are part of str2
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(accept + j) != '\0')
	{
		while (*(accept + j) != '\0' && *(s + i) != *(accept + j))
		{
			j++;
		}
		if (*(s + i) == *(accept + j))
		{
			return (s + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

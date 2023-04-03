/**
 * _strchr - function returns a pointer to
 * the first occurrence of the character c in the string s
 * @s: pointer to the null-terminated byte string to be analyzed
 * @c: character to search for
 * Return: Pointer to the found character in str,
 * or null pointer if no such character is found.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
		{
			i++;
		}
	}
	return ('\0');
}

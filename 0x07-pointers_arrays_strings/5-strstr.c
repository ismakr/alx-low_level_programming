/**
 * _strlen - ret the length of str
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strstr - fun strstr
 * @haystack: parametre
 * @needle: parametre
 * Return: str
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = _strlen(needle) - 1;
	while (*needle != '\0')
	{
		while (*(needle + j) == *(haystack + i))
		{
			j++;
			i++;
		}
		if (*(needle + j) == '\0')
			return (haystack + k);
		j = 0;
	}
	return (0);
}

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
 * string_nconcat -  concatenates two strings
 * @s1: dest
 * @s2: src
 * @n: n bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *p;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	i = 0;
	p = malloc(_strlen(s1) + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (*(s1 + i) != '\0')
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j) != '\0' || j < n)
	{
		*(p + i) = *(s2 + j);
		j++;
		i++;
	}
	return (p);
}

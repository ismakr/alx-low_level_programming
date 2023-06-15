#include <stdlib.h>
/**
 * _strlen - ret the length of str
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int i
 */
unsigned int _strlen(char *s)
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
 * string_nconcat -  concatenates two strings.
 * @s1: dest
 * @s2: src
 * @n: the first n bytes of s2
 * Return: pointer points to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		p = malloc(_strlen(s1) + _strlen(s2) + 1);
	else
		p = malloc(_strlen(s1) + n + 1);
	if (p == NULL)
		return (NULL);
	while (*(s1 + j) != '\0')
	{
		*(p + i) = *(s1 + j);
		i++;
		j++;
	}
	j = 0;
	while (*(s2 + j) != '\0' || i < n)
	{
		*(p + i) = *(s2 + j);
		i++;
		j++;
	}
	*(p + i) = '\0';
	return (p);
}

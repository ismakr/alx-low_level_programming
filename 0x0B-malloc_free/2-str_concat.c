#include <stdlib.h>
/**
 * _strlen - len of str
 * @s: ptr to str
 * Return: len of str
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
 * str_concat - concatenates two strings.
 * @s1: str
 * @s2: str
 * Return: pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (*(s1 + j) != '\0')
	{
		*(p + i) = *(s1 + j);
		i++;
		j++;
	}
	*(p + i) = '\0';
	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(p + i) = *(s2 + j);
		i++;
		j++;
	}
	*(p + i) = '\0';
	return (p);
}

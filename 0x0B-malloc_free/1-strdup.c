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
 * _strdup -  pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: returns a pointer to the duplicated string.
 * or NULL  if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	p = malloc(sizeof(char) * _strlen(str) + 1);
	if (p == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		*(p + j) = *(str + i);
		i++;
		j++;
	}
	*(p + j) = '\0';
	return (p);
}

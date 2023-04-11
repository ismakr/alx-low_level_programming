#include <stdlib.h>
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
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to be copied
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *p;

	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	j = 0;
	p = (char *)malloc(_strlen(str) + 1);
	while (*(str + i) != '\0')
	{
		if (p == NULL)
		{
			return (0);
		}
		*(p + j) = *(str + i);
		i++;
		j++;
	}
	return (p);
}

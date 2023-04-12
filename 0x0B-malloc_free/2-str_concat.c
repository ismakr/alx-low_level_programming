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
 * str_concat - concat 2 str
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *p;

	i = 0;
	j = 0;
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	if (s1 == NULL)
	{
		s1 = "\0";
	}
	p = (char *)malloc(_strlen(s1) + _strlen(s2) + 1);
	while (*(s1 + i) != '\0')
	{
		if (p == NULL)
		{
			return (0);
		}
		*(p + j) = *(s1 + i);
		i++;
		j++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		*(p + j) = *(s2 + i);
		i++;
		j++;
	}
	return (p);
}

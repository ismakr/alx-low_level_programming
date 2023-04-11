#include <stdlib.h>
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
	p = (char *)malloc(1);
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
	*(p + j) = '\0';
	return (p);
}

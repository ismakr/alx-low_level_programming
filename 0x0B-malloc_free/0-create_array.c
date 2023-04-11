#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to be initialized
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (0);
	}
	p = (char *)malloc(size);
	while (i < size)
	{
		if (p == NULL)
		{
			return (0);
		}
		*(p + i) = c;
		i++;
	}
	return (p);
}

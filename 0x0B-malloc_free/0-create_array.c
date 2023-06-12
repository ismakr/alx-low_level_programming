#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of arr
 * @c: char
 * Return:  pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	i = 0;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}

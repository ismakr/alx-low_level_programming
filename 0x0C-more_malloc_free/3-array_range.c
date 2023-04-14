#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min: min nb to print
 * @max: max nb
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(max * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < max)
	{
		*(p + i) = min;
		min++;
		i++;
	}
	return (p);
}

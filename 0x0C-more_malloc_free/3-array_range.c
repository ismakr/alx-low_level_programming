#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min: min nbr of ele
 * @max: max nbr of ele
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc((sizeof(int) * max) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}

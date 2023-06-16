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
	int i, all;

	all = max - min;
	if (min > max)
		return (NULL);
	if (all == 0)
		all = 1;
	p = malloc((sizeof(int) * all) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	if (max == min)
		p[i] = min;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}

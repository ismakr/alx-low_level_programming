#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: nb of r
 * @height: nb of c
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	if (width == 0 || height == 0)
	{
		return (0);
	}
	i = 0;
	p = (int **)malloc(height * sizeof(int *));
	*p = 0;
	while (i < height)
	{
		if (p == NULL)
		{
			i = 0;
			while (i < height)
			{
				free(*(p + i));
				i++;
			}
			return (0);
		}
		*(p + i) = (int *)malloc(width * sizeof(int));
		i++;
	}
	return (p);
}

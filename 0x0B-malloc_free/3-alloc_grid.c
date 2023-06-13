#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: col
 * @height: row
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	i = 0;
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		*(p + i) = malloc(sizeof(int) * width);
		if (*(p + i) == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < height)
	{
		free(*(p + i));
		i++;
	}
	free(p);
	return (p);
}

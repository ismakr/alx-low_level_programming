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

	i = 0;
	p = (int **)malloc(height * 8);
	while (i < width)
	{
		*(p + i) = (int *)malloc(width * 8);
		i++;
	}
	return (p);
}

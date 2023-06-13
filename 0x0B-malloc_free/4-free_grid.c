#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid.
 * @grid: ptr to add of n a
 * @height: r
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: ptp 2d array
 * @height: nb of c
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
}

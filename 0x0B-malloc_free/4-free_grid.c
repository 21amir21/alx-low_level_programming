#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free grid space
 * @grid: takes in the grid from #3
 * @height: takes in the height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

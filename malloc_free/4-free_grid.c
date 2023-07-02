#include <stdio.h>
#include <stdlib.h>

/**
*free_grid - principal function.
*@grid: first value.
*@height: second value.
*Return: zero on success.
*/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}

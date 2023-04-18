#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *
 * @grid: pointer to the 2D array of integers
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i = 0;

while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}

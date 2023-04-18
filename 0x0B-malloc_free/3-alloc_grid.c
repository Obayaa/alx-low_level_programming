#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - create a 2D array of integers
 *
 *@width: width of the grid
 *@height: height of the grid
 *Return: pointer to the grid or NULL on failure
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i = 0, j = 0;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}

while (i < height)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (--i >= 0)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
j = 0;
while (j < width)
{
grid[i][j] = 0;
j++;
}
i++;
}
return (grid);
}

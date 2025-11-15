#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: The address of the two dimensional grid
 * @height: Height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
    int i;

    /* Check if grid is NULL */
    if (grid == NULL)
        return;

    /* Free each row (inner arrays) */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /* Free the main grid array */
    free(grid);
}

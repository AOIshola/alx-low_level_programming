#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free dynamically allocated memory
 * @grid: 2D array of integers
 * @height: number of rows in array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
    {
        return;
    }

    for (i = 0; i < height; i++)
    {
        free (grid[i]);
    }
    free(grid);
}

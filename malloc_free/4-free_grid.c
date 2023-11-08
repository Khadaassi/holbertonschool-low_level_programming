#include "main.h"
#include "alloc_grid.h"
#include "free_grid.h"

/**
 * free_grid - function that frees a 2D grid
 * @height: height of the array
*/
void free_grid(int **grid, int height)
{
    int i;

	if(grid != NULL)
    {
        for (i = 0; i < height; i++)
	    {
		    free(grid[i]);
        }
		
		free(grid);
    }
}

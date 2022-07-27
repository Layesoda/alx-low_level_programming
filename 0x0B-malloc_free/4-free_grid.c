#include "main.h"
<<<<<<< HEAD

#include <stdio.h>

#include <stdlib.h>



/**

 * free_grid - Entry point

 *@grid: rows of matrix

 *@height: columns of string

 * Return: a pointer to a 2 dimensional array of integers or null

 */

void free_grid(int **grid, int height)
  
{
  
  int i;
  
  int *p;
  

  
  for (i = 0; i < height; i++)
    
    {
      
      p = grid[i];
      
      free(p);
      
    }
  
  free(grid);
  
}
=======
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: rows of matrix
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
>>>>>>> 535ec48449b786eb1a27439af422cef30c195f56

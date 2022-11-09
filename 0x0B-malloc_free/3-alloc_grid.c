#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array
 * Return: If width <= 0, height <= 0, or the function fails - NULL,
 * otherwise a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twodimen;
	int hgt;
	int wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	twodimen = malloc(sizeof(int *) * height);

	if (twodimen == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		twodimen[hgt] = malloc(sizeof(int) * width);

		if (twodimen[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(twodimen[hgt]);

			free(twodimen);
			return (NULL);
		}
	}
	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			twodimen[hgt][wid] = 0;
	}

	return (twodimen);
}

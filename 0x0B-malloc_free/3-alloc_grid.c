#include "main.h"

/**
 * alloc_grid - returns pointer to 2 dimensional array of integer
 *
 * @width: first input
 * @height: secodn input
 *
 * Return: pointer or NULL if there's error
*/

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (width > 0 && height > 0 && tab != 0)
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}
	return (tab);
}

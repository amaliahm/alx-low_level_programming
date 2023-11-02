#include "main.h"

/**
 * array_range - create array of integers
 *
 * @min: int input
 * @max: int input
 *
 * Return: array
*/

int *array_range(int min, int max)
{
	int i, len, *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (!p)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min++;
	return (p);
}

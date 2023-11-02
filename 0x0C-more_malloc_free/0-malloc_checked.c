#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 *
 * @b: integre input
 *
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}

#include "main.h"

/**
 * create_array - create array of type char
 *
 * @size: size of the array
 * @c: initialize array
 *
 * Return: pointer to the array or null
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}

#include "main.h"

/**
 * clear_bit - clears index's bit
 *
 * @n: index input
 * @index: bit input
 *
 * Return: int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}

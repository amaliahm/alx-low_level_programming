#include "main.h"

/**
 * set_bit - sets index's bit
 *
 * @n: index input
 * @index: bit input
 *
 * Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}

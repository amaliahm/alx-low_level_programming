#include "main.h"

/**
 * get_bit - gets the index's bit
 *
 * @n: index
 * @index: bit input
 *
 * Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}

#include "main.h"

/**
 * flip_bits - get flipped bit
 *
 * @n: int input
 * @m: int input
 *
 * Return: int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int done = 0;

	while (i)
	{
		if (i & 1ul)
			done++;
		i = i >> 1;
	}
	return (done);
}

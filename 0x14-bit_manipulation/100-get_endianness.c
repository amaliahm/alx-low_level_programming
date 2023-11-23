#include "main.h"

/**
 * get_endianness - gets system's endianness
 *
 * Return: int
*/

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}

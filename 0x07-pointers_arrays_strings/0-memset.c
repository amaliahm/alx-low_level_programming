#include "main.h"

/**
 * *_memset - fills memory with constant byte
 *
 * @s: pointer to put b
 * @b: constant input
 * @n: max bytes to use
 *
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;

	return (s);
}

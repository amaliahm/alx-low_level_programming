#include "main.h"

/**
 * _memset - fills memory with constant
 *
 * @s: pointer inptu
 * @b: constant input
 * @n: int input
 *
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	while (n--)
		*str++ = b;
	return (str);
}

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: array length input
 * @size: int input
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb + 1);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}

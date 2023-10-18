#include "main.h"

/**
 * _strcat - function concatenates two strings
 *
 * @dest: pointer of first string
 * @src: pointer of second string
 *
 * Return: pointer of resulting string
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];
	return (dest);
}

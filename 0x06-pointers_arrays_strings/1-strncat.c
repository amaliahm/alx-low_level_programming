#include "main.h"

/**
 * _strncat - function contcatenates two strings
 *
 * @dest: pointer of first string
 * @src: pointer of second string
 * @n: number of bites from src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int i;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	return (dest);
}

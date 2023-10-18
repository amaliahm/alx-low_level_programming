#include "main.h"

/**
 * _strncpy - function copies string
 *
 * @dest: pointer of destination string
 * @src: pointer of source string
 * @n: bites of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

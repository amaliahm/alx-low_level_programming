#include "main.h"

/**
 * _strdup - returns a pointer to new duplicated string of str
 *
 * @str: string input
 *
 * Return: pointer
*/

char *_strdup(char *str)
{
	int size, i;
	char *p;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	p = malloc(size * sizeof(*str) + 1);
	if (p != 0)
		for (i = 0; i < size; i++)
			p[i] = str[i];
	return (p);
}

#include "main.h"

/**
 * str - find length of string
 *
 * @s: string input
 *
 * Return: length of string
*/

int str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * str_concat - concatenates two string
 *
 * @s1: first string input
 * @s2: second string input
 *
 * Return: concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *p;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	size1 = str(s1);
	size2 = str(s2);
	p = malloc((size1 + size2) * sizeof(char) + 1);
	if (p == 0)
		return (0);
	if (size1 != 0)
		for (i = 0; i <= size1; i++)
			p[i] = s1[i];
	if (size2 != 0)
		for (j = 0; j <= size2; j++)
		{
			p[i] = s2[i];
			i++;
		}
	p[i] = '\0';
	return (p);
}

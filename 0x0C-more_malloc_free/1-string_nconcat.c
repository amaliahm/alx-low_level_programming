#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenate two string
 *
 * @s1: pointer input
 * @s2: pointer input
 * @n: number of bytes to concatenate
 *
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len1 = 0; s2[len2] != '\0'; len2++)
		;
	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[j] = '\0';
	return (str);
}

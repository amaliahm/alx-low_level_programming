#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string input
 *
 * Return: void
*/

void rev_string(char *s)
{
	int l, i;
	char tmp;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}

#include "main.h"

/**
 * str - finds length of string
 *
 * @s: string input
 *
 * Return: integer
*/
int str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - concatenated all arguments of my program
 *
 * @ac: first input
 * @av: second input
 *
 * Return: pointer of NULL
*/

char *argstostr(int ac, char **av)
{
	int i, j, nc = 0, cmpt;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, nc++)
		nc += str(av[i]);
	p = malloc(sizeof(char) * nc + 1);
	for (i = 0; i < ac; i++)
	{
		for (j = 0, cmpt = 0; av[i][j] != '\0'; j++, cmpt++)
			p[cmpt] = av[i][j];
		p[cmpt] = '\n';
		cmpt++;
	}
	p[cmpt] = '\n';
	return (p);
}

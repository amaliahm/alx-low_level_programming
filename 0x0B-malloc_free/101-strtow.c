#include "main.h"

/**
 * count - counts the number of words in string
 *
 * @s: string input
 *
 * Return: int
*/

int count(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits string inot words
 *
 * @str: string input
 *
 * Return: pointer
*/

char **strtow(char *str)
{
	int i = 0, j, k, l, n = 0, u = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[u] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[u] == NULL)
			{
				for (k = 0; k < u; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[u][l] = str[i + l];
			w[u][l] = '\0';
			u++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}

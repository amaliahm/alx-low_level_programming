#include "main.h"

/**
 * _strlen - gets the string's length
 *
 * @s: string input
 *
 * Return: int
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates file
 *
 * @filename: string input
 * @text_content: contenu de fichier
 *
 * Return: int
*/

int create_file(const char *filename, char *text_content)
{
	int i;
	ssize_t bytes = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);
	if (l)
		bytes = write(i, text_content, l);
	close(i);
	return (bytes == l ? 1 : -1);
}

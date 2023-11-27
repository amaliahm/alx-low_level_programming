#include "main.h"

/**
 * _strlen - get the string's length
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
 * append_text_to_file - appends text to file
 *
 * @filename: string input
 * @text_content: string input
 *
 * Return: int
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	ssize_t bytes = 0, l = _strlen(text_context);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (l)
		bytes = write(i, text_content, l);
	close(i);
	return (bytes == l ? 1 : -1);
}

#include "main.h"

/**
 * read_textfile - reads and prints text from file
 *
 * @filename: string input
 * @letters: n of bytes to raad
 *
 * Return: n of bytes printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	bytes = read(i, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(i);
	return (bytes);
}

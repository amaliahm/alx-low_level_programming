#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRO | S_IWGRP | S_IROTH)

/**
 * main - Entry point
 *
 * Description: task number 3
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: int
*/

int main(int ac, char **av)
{
	int from = 0, to = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exie(97);
	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to = open(av[2], O_WRONLY | O_CREAT | PERMISSIONS);
	if (to == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((b = read(from, buf, READ_BUF_SIZE)) > 0)
		if (write(to, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	from = close(from);
	to = close(to);
	if (from)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from), exit(100);
	if (to)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, to), exit(100);
	return (EXIT_SUCCESS);
}

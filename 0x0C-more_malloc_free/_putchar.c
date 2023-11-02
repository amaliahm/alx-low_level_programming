#include <unistd.h>

/**
 * _putchar - writes character to stdout
 *
 * @c: character input
 *
 * Return: int
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

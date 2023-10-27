#include <unistd.h>

/**
 * _putchar - writes character c to output
 *
 * @c: character input to write
 *
 * Return: On success 1 else -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

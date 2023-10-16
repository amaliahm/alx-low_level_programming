#include <stdio.h>

/**
 * _putchar: writes the character c to stdout
 *
 * @c: input
 *
 * Return: 1 (Success)
 *         -1 failed
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

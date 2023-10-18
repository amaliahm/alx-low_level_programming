#include <stdio.h>

/**
 * _putchar - writes character c
 *
 * @c: character input
 *
 * Return: on success 1
 *         on error -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * _puts - print string followed by new line
 *
 * @str: string input
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

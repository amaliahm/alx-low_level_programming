#include "main.h"

/**
 * _puts_recursion - prints string with new line
 *
 * @s: pointer input to string
 *
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar('\n');
		_puts_recursion(s + 1);
	}
}

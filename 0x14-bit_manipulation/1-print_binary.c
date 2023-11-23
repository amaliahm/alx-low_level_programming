#include "main.h"

/**
 * print_binary - prints binary number as string
 *
 * @n: binary number input
 *
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, done = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1);
			done++;
		}
		else if (done)
			_putchar('0');
	}
	if (!done)
		_putchar('0');
}

/**
 * _putchar - writes char
 *
 * @c: char input
 *
 * Return: int
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

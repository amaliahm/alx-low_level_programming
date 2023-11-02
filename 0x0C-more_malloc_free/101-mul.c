#include "main.h"

/**
 * _puts - print string and new line
 *
 * @str: pointer
 *
 * Return: void
*/

vodi _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert string to integer
 *
 * @s: input
 *
 * Return: int
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, first, i;

	for (first = 0; !(s[first] >= 48 && s[first] <= 57); first++)
		if (s[first] == '-')
			sign *= -1;
	for (i = first; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}

/**
 * print_int - print integer
 *
 * @n: integer input
 *
 * Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int d = 1, i, resp;

	for (i = 0; n / d > 9; i++, d *= 10)
		;
	for (; d >= 1; n %= d, d /= 10)
	{
		resp = n / d;
		_putchar('0' + resp);
	}
}

/**
 * main - Entry point
 *
 * Description: prints result of multiplication and new line
 *
 * @argc: integer input
 * @argv: list input
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

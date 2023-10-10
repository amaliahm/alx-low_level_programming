#include "main.h"

/**
 * print_last_digit - print last digit of number
 *
 * @n: taks number input
 *
 * Description: last digit of number
 *
 * Return: last Digit
*/

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = (-1) * (n % 10);
	else
		last = n % 10;
	_putchar(last + '0');
	return (last);
}

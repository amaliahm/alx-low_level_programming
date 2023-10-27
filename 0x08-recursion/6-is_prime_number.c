#include "main.h"

/**
 * check - check all number < n
 *
 * @n: integer input
 * @y: ineteger input
 *
 * Return: int
*/

int check(int n, int y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n % y == 0 || n <= 1)
		return (0);
	else
		return (check(n, y + 1));
}

/**
 * is_prime_number - ckeck if n is prime or not
 *
 * @n: integer input
 *
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	return (check(n, 2));
}

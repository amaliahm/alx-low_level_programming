#include "main.h"

/**
 * square - find square root
 *
 * @n: integer input
 * @v: square root
 *
 * Return: int
*/

int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, v + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - fint natural square root
 *
 * @n: integer input
 *
 * Return: int
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

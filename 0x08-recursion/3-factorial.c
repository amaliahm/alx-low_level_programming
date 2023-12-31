#include "main.h"

/**
 * factorial - calculate factorial
 *
 * @n: int input
 *
 * Return: result
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

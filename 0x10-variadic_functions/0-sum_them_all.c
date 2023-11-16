#include "variadic_functions.h"

/**
 * sum_them_all - sums of all the variables argumenst
 *
 * @n: number of arguments
 * @struct-token: the arguments
 *
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	int i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}

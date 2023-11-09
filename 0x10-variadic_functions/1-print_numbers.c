#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 *
 * @separator: string input
 * @n: number of arguments
 * @...: the arguments
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf('\n');
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : '') : '\n');
	va_end(ap);
}

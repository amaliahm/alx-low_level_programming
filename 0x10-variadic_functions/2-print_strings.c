#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 *
 * @separator: string input
 * @n: number of arguments
 * @...: arguments
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf('\n');
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (s - va_arv(ap, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}

#include "variadic_functions.h"


/**
 * format_char: formats char
 *
 * @s: strint input represents separator
 * @ap: pointer input
*/

void format_char(char *s, va_list ap)
{
	printf("%s%c", s, va_arg(ap, int));
}


/**
 * format_int: formats int
 *
 * @s: strint input represents separator
 * @ap: pointer input
*/

void format_int(char *s, va_list ap)
{
	printf("%s%d", s, va_arg(ap, int));
}

/**
 * format_f: formats float
 *
 * @s: strint input represents separator
 * @ap: pointer input
*/

void format_f(char *s, va_list ap)
{
	printf("%s%f", s, va_arg(ap, double));
}

/**
 * format_s: formats string
 *
 * @s: strint input represents separator
 * @ap: pointer input
*/

void format_s(char *s, va_list ap)
{
	char *str = va_arg(ap, char*);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", s, str);
}


/**
 * print_all - prints all arg
 *
 * @format: format input
 * @...: arg input
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sp = "";
	va_list ap;
	token_t tokens[] = {
		{'c', format_char},
		{'i', format_int},
		{'f', format_f},
		{'s', format_s},
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sp, ap);
				sp = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

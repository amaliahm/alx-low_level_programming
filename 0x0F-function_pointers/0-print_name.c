#include "function_pointers.h"

/**
 * print_name - prints name
 *
 * @name: strins input
 * @f: pointer input
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

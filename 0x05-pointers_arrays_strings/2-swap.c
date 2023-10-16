#include "main.h"

/**
 * swap_int -  swaps value of two integers
 *
 * @a: first input
 * @b: second input
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

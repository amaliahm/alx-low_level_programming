#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - description
 *
 * @a: two dimensions array of int
 * @size: size of array
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += s[i];
		s2 += s[size - i + 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d, ", s2);
}

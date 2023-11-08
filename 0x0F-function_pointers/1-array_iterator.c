#include "function_pointers.h"

/**
 * array_iterator - maps array
 *
 * @array: array input
 * @size: size of the array
 * @action: function input
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i = array + size - 1;

	if (array && size && action)
		while (array <= i)
			action(*array++);
}

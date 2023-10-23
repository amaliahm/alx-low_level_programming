#include "main.h"

/**
 * set_string - sets value of pointer to char
 *
 * @s: pointer to pointer to data
 * @to: pointer char
 *
 * Return: nothing
*/

void set_string(char **s, char *to)
{
	*s = to;
}

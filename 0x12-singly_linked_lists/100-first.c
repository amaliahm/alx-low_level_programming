#include "lists.h"

void _contructor(void) __attribute__ ((constructor));

/**
 * _contructor - exec before main
 *
 * Return: nothing
*/

void _contructor(void)
{
    printf("You're beat! and yet, you must allow,\n"
    "I bore my house upon my back!\n");
}

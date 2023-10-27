#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: print number of argumenst passed
 *
 * @argc: integer input
 * @argv: pointer input
 *
 * Return: On Success(0)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

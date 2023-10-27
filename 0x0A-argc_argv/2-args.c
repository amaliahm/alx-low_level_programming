#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print number of arguments passed
 *
 * @argc: integer input
 * @argv: list input
 *
 * Return: On Succeess(0)
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

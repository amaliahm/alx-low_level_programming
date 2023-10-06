#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 48;

	while (number <= 102)
	{
		putchar(number);
		if (number == 57)
			number += 39;
		number++;
	}
	putchar('\n');

	return (0);
}

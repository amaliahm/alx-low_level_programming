#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: possible combinations of single-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + 48);
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}

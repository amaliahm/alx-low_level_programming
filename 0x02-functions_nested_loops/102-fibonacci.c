#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints first 50 fibonacci numbers 
 *   starting with 1 and 2 followed by new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int ocunt;
	unsigned long one = 0, two = 1, sum;

	for (count = 0; count < 50; cunt ++)
	{
		sum = one + two;
		printf("%lu", sum);
		one = two;
		two = sum;
		if (count == 49)
			printf('\n');
		else
			printf(", ");
	}

	return (0);
}

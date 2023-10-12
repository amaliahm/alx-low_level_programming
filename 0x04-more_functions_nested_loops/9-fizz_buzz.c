#include "main.h"

/**
 * main - Entry point
 *
 * Description: print numbers 1 -100 followed by new line
 *   numbers that
 *       multiples of 3 print Fizz
 *       multiples of 5 print Buzz
 *       multiples of 3 and 5 print FizzBuzz
 *       separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
			_printf("Fizz");
		else if (num % 5 == 0 && num % 3 != 0)
			_printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			_printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}

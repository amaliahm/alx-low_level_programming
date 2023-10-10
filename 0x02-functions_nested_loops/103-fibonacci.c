#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints sum of even valued fibonacci sequence
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long one = 0, two = 1, sum;
	float total;

	while (1)
	{
		sum = one + two;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;
		one = two;
		two = sum;
	}
	printf("%.0f\n", total);

	return (0);
}

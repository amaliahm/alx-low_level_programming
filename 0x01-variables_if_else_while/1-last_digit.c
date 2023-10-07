#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: last digit of random number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is ", n);
	last = n % 10;
	if (last > 5)
		printf("%i and is greater than 5\n", last);
	else if (last == 0)
		printf("0 and is 0\n");
	else
		printf("%i and is less than 6 and not 0\n", last);
	return (0);
}

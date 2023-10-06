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
	printf("Last digit of %i and is ", n);
	last = n % 10;
	if (last > 5)
		printf("greater than 5\n");
	else if (last == 0)
		printf("0\n");
	else
		printf("less than 6\n");
	return (0);
}

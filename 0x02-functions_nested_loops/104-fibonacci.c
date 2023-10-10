#include "main.h"

/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int numLength(int num)
{
	int leng = 0;
	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		leng +=1;
	}

	return (leng);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 fibonacci number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, init;
	unsigned long one = 1, two = 2, sum, max = 100000000, fone = 0, ftwo = 0, sumo = 0;
	for (count = 1; count <= 98; count++)
	{
		if (fone > 0)
			printf("%lu", fone);
		init = numLength(max) - 1 - numLength(one);

		while (fone > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}
	
		printf("%lu", one);
	
		sum = (one + two) % max;
		sumo = fone + ftwo + (one + two) / max;
		one = two;
		fone = ftwo;
		two = sum;
		ftwo = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}

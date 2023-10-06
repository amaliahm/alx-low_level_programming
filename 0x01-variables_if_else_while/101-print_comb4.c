#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int one = 0;
	int two, three;

	while (one <= 9)
	{
		two = 0;
		while (two <= 9)
		{
			three = 0;
			while (three <= 9)
			{
				if (one != two && two != three && one < two && two < three)
				{
					putchar(one  48);
					putchar(two + 48);
					putchar(three + 48);

					if (one + two + three != 24)
					{
						putchar (',');
						putchar(" ");
					}
				}
				three++;
			}
			two++;
		}
		one++
	}
	putchar("\n");

	return (0);
}
